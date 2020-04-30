#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;

class Worked
{
private:
		string family;
		int stazh,
		clock_pay,
		clock, 
		pay,
		prem_pay;
				
public: 
	void massage()
	{
		cout << endl << family << endl;
		cout << "Стаж: " << stazh << endl;
		cout << "Почасовая оплата: " << clock_pay << endl;
		cout << family << " проработал " << clock << " часов" << endl;
		cout << "Зарплата: " << pay << endl;
		cout << "Премия: " << prem_pay << endl;
		
	}
	void write()
	{
		cout << "Введите имя работника: ";
		cin >> family;
		cout << "Введите стаж " << family << ": ";
		cin >> stazh;
		cout << "Введите почасовую оплату: " << family << ": ";
		cin >> clock_pay;
		cout << "Введите общее время работы: " << family << ": ";
		cin >> clock;
		
		pay = clock * clock_pay;
		if (stazh < 1) prem_pay = 0;
		else if ((stazh >= 1) && (stazh < 3)) prem_pay = pay * 0.05;
		else if ((stazh >= 3) && (stazh < 5)) prem_pay = pay * 0.08;
		else if ((stazh >= 5)) prem_pay = pay * 0.15;
	}
	void writeTXT()
	{
		ofstream fout("Worked.txt");
		fout << family << endl;
		fout << "Стаж: " << stazh << endl;
		fout << "Почасовая оплата: " << clock_pay << endl;
		fout << family << " проработал " << clock << " часов" << endl;
		fout << "Зарплата: " << pay << endl;
		fout << "Премия: " << prem_pay << endl;
		fout.close();
		cout << "Информация была записанна в файл Worked.txt" << endl;
	}
};

int main(int argc, char* argv[])
{
	setlocale(0,"");

	Worked objWorked;
	objWorked.write();
	objWorked.massage();
	objWorked.writeTXT();

	system("pause");
	return 0;
}
