#include <iostream>
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <regex>
using namespace std;

void showmassive(double arr[10][10], int rows)//вывод
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
double getnum()//проверка ввода
{
	double a;
	bool cor = 0;
	string as;
	cor = 0;
	while (!cor)
	{
		cin >> as;
		int i;
		for (i = 0; i < as.length(); i++)
		{
			if ((int(as[i]) > 47 || int(as[i]) < 43) && (int(as[i]) < 48 || int(as[i]) > 57))//-_._,_0-9
				break;
		}
		if (i == as.length())
		{
			cor = 1;
			as = regex_replace(as, regex(","), ".");
			a = stod(as);
		}
		else
		{
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Не верный ввод!!! Введите число : ";
		}
	}
	cin.seekg(0, ios::end);
	cin.clear();
	return a;
}

void fillmass(double arr[10][10], int rows)//заполнение
{
	cout << "Введите элементы массива: " << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			cin >> arr[i][j];
		}
	}
}

void changemass(double (&arr)[10][10], int rows)//изменение
{
	for (int i = 0; i < rows; i++)
		arr[i][rows - i - 1] = 0;
}