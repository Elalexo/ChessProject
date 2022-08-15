#include <iostream>
#include <string>
using namespace std;


 int main()
{
	setlocale(LC_ALL, "ru");
	int step1_1 ,step1_2 , step2_1,step2_2 ;
	cin >> step1_1;
	cin >> step1_2;

	cin >> step2_1;
	cin >> step2_2;
	if (step1_1<0)
	{
		cout << "Выполнение невозможно";
	}
	if (step1_1 > 8)
	{
		cout << "Выполнение невозможно";
	}
	if (step1_2 < 0)
	{
		cout << "Выполнение невозможно";
	}
	if (step1_2 > 8)
	{
		cout << "Выполнение невозможно";
	}
	if (step2_1 < 0)
	{
		cout << "Выполнение невозможно";
	}
	if (step2_1 > 8)
	{
		cout << "Выполнение невозможно";
	}
	if (step2_2 < 0)
	{
		cout << "Выполнение невозможно";
	}
	if (step2_2 > 8)
	{
		cout << "Выполнение невозможно";
	}

	if (step1_1<step2_1)
	{
		if (step1_2 < step2_2)
		{
			cout << "Yes" << endl;
		}
	}
	if (step1_1 > step2_1)
	{
		if (step1_2 > step2_2)
		{
			cout << "Yes" << endl;
		}
	}
	if (step1_1 > step2_1)
	{
		if (step1_2 < step2_2)
		{
			cout << "Yes" << endl;
		}
	}
	if (step1_1 < step2_1)
	{
		if (step1_2 > step2_2)
		{
			cout << "Yes" << endl;
		}
	}
	else
	{
		cout << "No" << endl;
	}
}