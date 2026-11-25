template <typename T>
struct Node
{
    T val;
    Node<T>* left;
    Node<T>* right;
    Node<T>* parent;
};

template <typename T>
class BST
{
    Node<T>* head;

public:
    BST()
    {
        head = new Node<T>;
        head->left = head->right = head->parent = head;
    }

    void insert(const T& val)
    {
        Node<T>* temp;
        temp = new Node<T>;
        temp->val = val;
        temp->left = head;
        temp->right = head;

        if (head->parent == head)
        {
            temp->parent = head;
            head->parent = temp;
            head->left = temp;
            head->right = temp;
            return;
        }

        Node<T>* ptr = head->parent;  
        while (true)
        {
            if (val < ptr->val)
            {
                if (ptr->left == head)
                {
                    ptr->left = temp;
                    temp->parent = ptr;
                    return;
                }
                ptr = ptr->left;
            }
            else
            {
                if (ptr->right == head)
                {
                    ptr->right = temp;
                    temp->parent = ptr;
                    return;
                }
                ptr = ptr->right;
            }
        }
    }
};