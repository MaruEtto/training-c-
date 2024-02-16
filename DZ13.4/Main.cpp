#include <iostream>
//#include <string>
//#include <time.h>
#include <cmath>
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
//
//int main()
//{
//	int Array[5][5];
//	int i, j;
//
//	cout << "Array[5][5]:" << "\n";
//
//	for (i = 0; i < 5; ++i)
//	{
//		for (j = 0; j < 5; ++j)
//		{
//			Array[i][j] = i + j;
//			cout << Array[i][j] << " ";
//		}
//		cout << "\n";
//	}
//	struct tm buf;
//	time_t t = time(NULL);
//	localtime_s(&buf, &t);
//
//	i = buf.tm_mday % 5;
//
//	cout << "Index = " << i << "\n";
//
//	int sum = Array[i][0];
//
//	for (j = 1; j < 5; j++)
//	{
//		sum += Array[i][j];
//	}
//
//	cout << "Sum = " << sum;
//
//	return 0;
//}

//DZ17.5
// Эта программа вычисляет модуль вектора.

//class Vector
//{
//private:
//
//	double x, y, z;
//
//public:
//
//	Vector() : x(0), y(0), z(0)
//	{}
//
//	Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
//	{}
//
//	void Show()
//	{
//		cout << "x = " << x << " y = " << y << " z = " << z << "\n";
//	}
//
//	void Module()
//	{
//		cout << "Module = " << sqrt(x * x + y * y + z * z) << "\n";
//	}
//};
//
//int main()
//{
//	double x, y, z;
//
//	cout << " Enter x: " << "\n";
//	cin >> x;
//
//	cout << " Enter y: " << "\n";
//	cin >> y;
//
//	cout << " Enter z: " << "\n";
//	cin >> z;
//
//	Vector V(x, y, z);
//	V.Show();
//	V.Module();
//}

//DZ18.5
// Эта программа создает динамический массив "Таблица баллов" с полями "Имя игрока" и "Количество очков"
// и сортирует массив по убыванию количества очков, набранных игроками.

class Member
{
private:

	char Name;
	int Points;

public:

	char GetName()
	{
		return Name;
	}

	int GetPoints()
	{
		return Points;
	}

	void SetName(char NewName)
	{
		Name = NewName;
	}

	void SetPoints(int NewPoints)
	{
		Points = NewPoints;
	}
	
};

int main()
{
	int NumberOfMembers;

	cout << "Enter the number of players: " << "\n";
	cin >> NumberOfMembers;

	Member *PointsTable = new Member[NumberOfMembers];

	char NewName;
	int NewPoints;

	for (int i = 0; i < NumberOfMembers; i++) //Заполняет объекты массива PointsTable класса Member данными
	{
		cout << "Enter player name: " << "\n";
		cin >> NewName;

		cout << "Enter player points: " << "\n";
		cin >> NewPoints;

		PointsTable[i].SetName(NewName);
		PointsTable[i].SetPoints(NewPoints);

		//cout << "Player " << PointsTable[i].GetName() << " has " << PointsTable[i].GetPoints() << " points \n"; //Проверка записи значений в объект массива класса
	}

	cout << "Points table: \n";

	for (int i = 0; i < NumberOfMembers; i++)
	{
		cout << "Player " << PointsTable[i].GetName() << " has " << PointsTable[i].GetPoints() << " points \n";
	}
	
	//Сортировка методом всплывающего пузырька

	int Box; //Вспомогательная переменная для сортировки

	for (int i = 0; i < NumberOfMembers; i++)
		for (int j = NumberOfMembers - 1; j >= i; j--)
		{
			if (PointsTable[j - 1].GetPoints() > PointsTable[j].GetPoints())
			{
				Box = PointsTable[j - 1].GetPoints();
				PointsTable[j - 1].SetPoints(PointsTable[j].GetPoints());
				PointsTable[j].SetPoints(Box);
			}
		}
	cout << "Sorted array: \n";
	for (int i = 0; i < NumberOfMembers; i++)
	{
		cout << "Player " << PointsTable[i].GetName() << " has " << PointsTable[i].GetPoints() << " points \n";
	}
	delete[] PointsTable;

}