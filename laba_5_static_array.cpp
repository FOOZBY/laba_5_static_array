#include "Header.h"

int main()
{
	setlocale(0, "ru");

	//создание массива////////////////////
	int rows;
	cout << "Введите n(количество строк(столбцов)): ";
	while (true)
	{
		rows = getnum();
		if (rows <= 0)
			cout << "Количество строк (столбцов) должно быть больше 0. Повторите ввод." << endl;
		else
			break;
	}
	double arr[10][10];
	
	//заполнение массива//////////////////
	fillmass(arr, rows);
	//вывод изначальной////////////////////////////////////
	cout << "Было: " << endl;
	showmassive(arr, rows);

	//изменение по варианту///////////////
	changemass(arr, rows);
	
	//вывод изменённой////////////////////////////////////
	cout << "Стало: " << endl;
	showmassive(arr, rows);

	system("pause");
	return 0;
}