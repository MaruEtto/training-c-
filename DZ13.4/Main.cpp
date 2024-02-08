#include <iostream>
#include <string>

int main()
{
	std::string text;
	std::cout << "Enter string: ";
	getline(std::cin, text);
	std::cout << "Your string: " << text << "\n";
	std::cout << "String lenght: " << text.length() << "\n";
	std::cout << "First symbol: " << text.front() << "\n";
	std::cout << "Last symbol: " << text.back() << "\n";

	return 0;
}