#include <iostream>
#include <string>
using namespace std;

// DZ14.4
 /*std::string text;
	std::cout << "Enter string: ";
	getline(std::cin, text);
	std::cout << "Your string: " << text << "\n";
	std::cout << "String lenght: " << text.length() << "\n";
	std::cout << "First symbol: " << text.front() << "\n";
	std::cout << "Last symbol: " << text.back() << "\n";*/

//DZ15.4
	// Эта программа выводит в консоль все четные числа от 0 до установленного ограничения

void FindOddOrEvenNumbers(int N, int OddOrNot)
{
	for (int i = OddOrNot; i <= N; i += 2)
	{
		cout << i << "\n";
	}
}

int main()
{
		int Limit;

	cout << "Enter numer limit: " << "\n";
	cin >> Limit;

	cout << "Even numbers are: " << "\n";
	FindOddOrEvenNumbers(Limit, 2);

	cout << "Odd numbers are: " << "\n";
	FindOddOrEvenNumbers(Limit, 1);

	return 0;
}