#include<Windows.h>
#include<iostream>
#include<fstream>
#include<string>
#include<map>
#include<list>

#include"Crime.h"

using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void print(const std::map<std::string, std::list<Crime>>& base);
void save(const std::map<std::string, std::list<Crime>>& base);
int select_crime();

void main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::map<std::string, std::list<Crime>> base =
	{
		std::pair<std::string, std::list<Crime>>("m777ok",{Crime(1, "��. ������"), Crime(2, "��. ������"), Crime(8, "���������� ������ � �����������")}),
		std::pair<std::string, std::list<Crime>>("a666bb",{Crime(3,"��. ������"), Crime(2,"��. ������")}),
		std::pair<std::string, std::list<Crime>>("a123ab",{Crime(5,"�� �������")}),
		std::pair<std::string, std::list<Crime>>("b555aa",{Crime(7,"��. ��������� �������")}),
	};
	print(base);
	//save(base);

	/*std::string lincence_plate;
	cout << "������� �����: ";
	std::getline(cin, lincence_plate);
	cin.clear();
	Crime crime;
	getline(cin, crime);

	base[lincence_plate].push_back(crime);*/

	print(base);
	save(base);
}

void print(const std::map<std::string, std::list<Crime>>& base)
{
	for (std::map<std::string, std::list<Crime>>::const_iterator it = base.begin(); it != base.end(); ++it)
	{
		cout << it->first << ":\n";
		for (std::list<Crime>::const_iterator l_it = it->second.begin(); l_it != it->second.end(); ++l_it)
		{
			cout << tab << *l_it << endl;
		}
		cout << "\n--------------------------------------------------------------\n";
	}
}

void save(const std::map<std::string, std::list<Crime>>& base)
{
	std::ofstream fout("base.txt");
	for (std::map<std::string, std::list<Crime>>::const_iterator it = base.begin(); it != base.end(); ++it)
	{
		fout.width(10);
		fout << std::left;
		fout << it->first + ":";
		for (std::list<Crime>::const_iterator l_it = it->second.begin(); l_it != it->second.end(); ++l_it)
		{
			fout << *l_it << ", ";
		}
		fout.seekp(-2, std::ios_base::cur);
		fout << ";\n";
		//fout << "\n--------------------------------------------------------------\n";
	}
	fout.close();
	system("start notepad base.txt");

}

int select_crime()
{
	for(std::pair<int, std::string> i : crime)
	{
		cout << i.first << tab << i.second << endl;
	}
	int id;
	cin >> id;
	return id;
}