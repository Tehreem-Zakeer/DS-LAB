#include <iostream>
#include <string>
#include <vector>

// Question 1:
int sum(int n)
{
	if (n > 0)
		return n + sum(n - 1);
	else
		return 0;
}

// Question 2:
int sumDigits(int n)
{
	if (n > 0)
	{
		int digit = n % 10; //seperates a digit
		int val = n / 10; //gives remaining value
		return digit + sumDigits(val);
	}
	else
		return 0;
}

//Question 3:
bool isPalindrome(const std:: string& str, int left, int right)
{
	if (left >= right)
		return true;
	if (str[left] != str[right])
		return false;
	return isPalindrome(str, left + 1, right - 1);
}

//Question 4:
int findMaximum(const std::vector<int>& values, int index)
{

}

int main()
{
	//Sum
	std::cout << "Sum Problem: "<< std::endl;
	int i = 5;
	std::cout << "Input: " << i << std::endl;
	std::cout << "Output: " << sum(i) << std::endl;
	std::cout << std::endl;

	// Sum Digits:
	std::cout << "Sum Digit Problem: " << std::endl;
	int n = 5724;
	std::cout << "Input: "<<n << std::endl;
	std::cout << "Output: "<<sumDigits(n) << std::endl;
	std::cout << std::endl;

	// Palindrome:
	std::cout << "Palindrome Problem: " << std::endl;
	std::string s = "level";
	std::string str = "Quaid";
	std::cout << "Input: " << s << std::endl;
	std::cout << "Output: " << isPalindrome(s,0,s.length()-1) << std::endl;
	std::cout << "Input: " << str << std::endl;
	std::cout << "Output: " << isPalindrome(str, 0, str.length() - 1) << std::endl;
	std::cout << std::endl;
	
	// Maximum In Vector:
	std::cout << "Vector Maximum Problem: " << std::endl;
	std::vector<int> v;
	v = { 12,5,27,8,19,3 };
	std::cout << "Input: "<< std::endl;
	for (int i : v)
	{
		std::cout << i << " ";
	}
	std::cout << "Output: " << findMaximum(v,0) << std::endl;
	std::cout << std::endl;

}

