#include <iostream>
using namespace std;

//2

//double Cube(double number)
//{
//    return number * number * number;
//}
//
//
//int main()
//{
//    double number1;
//
//    cout << "Enter a number:";
//    cin >> number1;
//
//    cout << Cube(number1);
//}


//3

//bool IsPrime(int number)
//{
//	for (int i = number; i > 0; i--)
//	{
//		if (i != 1 && i != number)
//		{
//			if (number % i == 0)
//			{
//				return false;
//			}
//		}
//	}
//	return true;
//}
//
//int main()
//{
//
//	int number1;
//
//	cout << "Ur number?\n";
//	cin >> number1;
//
//	cout << boolalpha << IsPrime(number1) << "\n";
//}

//1

void ShowLine(int size, char symbol, bool view)
{

	if (view)
	{
		for (int i = 0; i < size; i++)
		{
			cout << symbol;
		}
	}
	else
	{
		for (int i = 0; i < size; i++)
		{
			cout << symbol << "\n";
		}
	}
}

int main()
{
	ShowLine(5, '@', false);
}