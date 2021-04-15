#include "Header.h"

int main()
{
	setlocale(0, "ru");

	const int N = 10;

	//создание массива////////////////////
	double arr[N][N];

	//ввод размерности массива////////////////////
	int n;
	cout << "Введите n (количество строк(столбцов)): ";
	while (true)
	{
		n = getnum();
		if (n <= 0)
			cout << "Количество строк (столбцов) должно быть больше 0. Повторите ввод." << endl;
		else
			break;
	}

	
	//заполнение массива//////////////////
	cout << endl << "Введите элементы массива: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "[" << i << "][" << j << "] ";
			arr[i][j] = getnum(); // * (arr + i*N + j)
		}
	}

	//вывод изначальной////////////////////////////////////
	cout << endl << "Было: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(7) << arr[i][j] << "\t";
		}
		cout << endl;
	}

	//изменение по варианту///////////////
	for (int i = 0; i < n; i++)
		arr[i][n - i - 1] = 0;

	//вывод изменённой////////////////////////////////////
	cout << endl << "Стало: " << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(7) << arr[i][j] << "\t";
		}
		cout << endl;
	}

	cout << endl;
	system("pause");
	return 0;
}