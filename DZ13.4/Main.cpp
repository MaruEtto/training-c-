#include <iostream>
//#include <string>
#include <time.h>
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
	// Эта программа выводит в консоль все четные и нечетные числа от 0 до установленного ограничения

//void FindOddOrEvenNumbers(int N, int OddOrNot)
//{
//	for (int i = OddOrNot; i <= N; i += 2)
//	{
//		cout << i << "\n";
//	}
//}
//
//int main()
//{
//		int Limit;
//
//	cout << "Enter numer limit: " << "\n";
//	cin >> Limit;
//
//	cout << "Even numbers are: " << "\n";
//	FindOddOrEvenNumbers(Limit, 2);
//
//	cout << "Odd numbers are: " << "\n";
//	FindOddOrEvenNumbers(Limit, 1);
//
//	return 0;
//}

//DZ16.5
// Эта программа создает и наполняет массив

int main()
{
	int Array[5][5];
	int i, j;

	cout << "Array[5][5]:" << "\n";

	for (i = 0; i < 5; ++i)
	{
		for (j = 0; j < 5; ++j)
		{
			Array[i][j] = i + j;
			cout << Array[i][j] << " ";
		}
		cout << "\n";
	}
	struct tm buf;
	time_t t = time(NULL);
	localtime_s(&buf, &t);

	i = buf.tm_mday % 5;

	cout << "Index = " << i << "\n";

	int sum = Array[i][0];

	for (j = 1; j < 5; j++)
	{
		sum += Array[i][j];
	}

	cout << "Sum = " << sum;

	return 0;
}