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
		cout << "����: " << stazh << endl;
		cout << "��������� ������: " << clock_pay << endl;
		cout << family << " ���������� " << clock << " �����" << endl;
		cout << "��������: " << pay << endl;
		cout << "������: " << prem_pay << endl;
		
	}
	void write()
	{
		cout << "������� ��� ���������: ";
		cin >> family;
		cout << "������� ���� " << family << ": ";
		cin >> stazh;
		cout << "������� ��������� ������: " << family << ": ";
		cin >> clock_pay;
		cout << "������� ����� ����� ������: " << family << ": ";
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
		fout << "����: " << stazh << endl;
		fout << "��������� ������: " << clock_pay << endl;
		fout << family << " ���������� " << clock << " �����" << endl;
		fout << "��������: " << pay << endl;
		fout << "������: " << prem_pay << endl;
		fout.close();
		cout << "���������� ���� ��������� � ���� Worked.txt" << endl;
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
