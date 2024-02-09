#include <iostream>
#include <string>
using namespace std;

int main()
{
	//DZ14.4

	/*std::string text;
	std::cout << "Enter string: ";
	getline(std::cin, text);
	std::cout << "Your string: " << text << "\n";
	std::cout << "String lenght: " << text.length() << "\n";
	std::cout << "First symbol: " << text.front() << "\n";
	std::cout << "Last symbol: " << text.back() << "\n";*/

	//DZ15.4
	// Эта программа выводит в консоль все четные числа от 0 до установленного ограничения
	
	int Limit;

	cout << "Enter numer limit: " << "\n";
	cin >> Limit;

	for (int i = 0; i <= Limit; )
	{
		cout << i << " ";
		i += 2;
	}
		

	return 0;
}