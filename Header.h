#include <iostream>
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <regex>
#include <conio.h>
#include <Windows.h>

using namespace std;

double getnum()//проверка ввода
{
	double value;
	while (!(cin >> value)) 
	{ //Since value is a double, (cin >> value) will be true only if the user enters a valid value that can be put inside a double
		cout << "Please enter a valid value (use '.' instead ','):" << endl;
		cin.clear();
		cin.ignore(32767, '\n');
	}
	cin.ignore(32767, '\n');
	return value;
}