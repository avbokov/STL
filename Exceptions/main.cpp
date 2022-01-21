#include<iostream>
using namespace std;

#define tab "\t"

#define DIVIZION_BY_ZERO

void main()
{
	setlocale(LC_ALL, "");
#ifdef DIVIZION_BY_ZERO
	//cout << 2 / 0 << endl;
	int a;
	int b;
	cout << "¬введите два числа: "; cin >> a >> b;
	try
	{
		cout << a / b << endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << endl;
	}
	catch (...)
	{
		std::cerr << "Something happened" << endl;
	}
#endif // DIVIZION_BY_ZERO

	int n;
	int f = 1;
	cout << "¬ведите число дл€ вычислени€ ‘акториала: "; cin >> n;
	try
	{
		for(int i =1; i <=n; i++)
		{
			cout << i << " = ";
			f *= i;
			cout << f << endl;
		}
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << endl;
	}
	catch (...)
	{
		std::cerr << "Something happened" << endl;
	}
}