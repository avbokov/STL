#include "Crime.h"

const std::map<int, std::string>& crime =
{
	std::pair<int, std::string>(1, "���������� ��������"),
	std::pair<int, std::string>(2, "������ �� �������"),
	std::pair<int, std::string>(3, "����� �� ��������� ������"),
	std::pair<int, std::string>(4, "����������� ��������"),
	std::pair<int, std::string>(5, "�������� � ������������ �����"),
	std::pair<int, std::string>(6, "����������� �������"),
	std::pair<int, std::string>(7, "�������� �� �������� �� ����� ��������"),
	std::pair<int, std::string>(8, "����� �� ����������"),
};


std::ostream& operator<<(std::ostream& os, const Crime& obj)
{
	return obj.print(os);
}

std::ofstream& operator<<(std::ofstream& os, const Crime& obj)
{
	return obj.print(os);
}

std::istream& operator>>(std::istream& is, Crime& obj)
{
	return obj.scan(is);
}
std::ifstream& operator>>(std::ifstream& is, Crime& obj)
{
	return obj.scan(is);
}
std::istream& getline(std::istream& is, Crime& obj)
{
	return obj.scan(is);
}