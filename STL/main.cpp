#include<iostream>
#include<array>
#include<vector>
//using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

//#define STL_ARRAY
#define STL_VECTOR

void main()
{
	setlocale(LC_ALL, "");
#ifdef STL_ARRAY
	// array - это последовательный контейнер, который
	// для хранения данных использует статический массив.
	// std::array<T, N>
	// T - тип элементов.
	// N - количество элементов.
	const int n = 5;
	std::array<int, 5> arr {3,5,8};
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
#endif // STL_ARRAY

#ifdef STL_VECTOR
	// vector - это контейнер, который хранит данные в виде динамического массива. (это тоже массив)
	std::vector<int> vec = {0,1,1,2,3,5,8,13,21,34};
	cout << "Size: " << vec.size() << endl;
	cout << "Capacity: " << vec.capacity() << endl;
	cout << "MaxSize: " << vec.max_size() << endl;

	vec.push_back(55);

	//vec.shrink_to_fit();
	try
	{
		for (int i = 0; i < vec.capacity(); i++)
		{
			//cout << vec[i] << tab; // метод data возвращает указатель на динамический массив,
			// который обворачивает vector.
			//cout << vec[i] << tab;
			cout << vec.at(i) << tab;
		}
		cout << endl;
		
	}
	catch (const std::exception& e)
	{
		std::cerr << endl << e.what() << endl;
	}

	cout << "Size: " << vec.size() << endl;
	cout << "Capacity: " << vec.capacity() << endl;
	cout << "MaxSize: " << vec.max_size() << endl;

	/*std::vector<double> d_vec;
	cout << "Size: " << d_vec.size() << endl;
	cout << "Capacity: " << d_vec.capacity() << endl;
	cout << "MaxSize: " << d_vec.max_size() << endl;*/
#endif // STL_VECTOR

}