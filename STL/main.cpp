//STL
#include<iostream>
#include<array>
#include<vector>
#include<deque>
#include<list>
#include<forward_list>
using namespace std;
using std::cin;
#define tab "\t"
#define delimiter "\n---------------------------\n"
//#define STL_ARRAY
//#define STL_VECTOR
//#define STL_DEQUE
#define STL_LIST
template<typename T>void vector_properties(const std::vector<T>& vec);
void main()
{
	setlocale(0, "");
#ifdef STL_ARRAY
	//array - это контейнер, который хранит данные в статическом массиве
	std::array<int, 5> arr = { 3,5,8,13,21 };
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // STL_ARRAY

#ifdef STL_VECTOR
	//vector - это контейнер, который хранит данные в виде динамического массива
	std::vector<int> vec={ 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };


	try
	{
		for (int i = 0; i < vec.size()*2; i++)
		{
			//cout << vec[i] << tab;
			cout << vec.at(i) << tab;
		}
		cout << endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << endl << e.what() << endl;
	}

	vector_properties(vec);
	//vec.push_back(134);
	//vec.reserve(25);
	//vec.resize(17);

	vec.insert(vec.begin() + 3, { 1024,2048,3072,4096 });
	/*vec.insert(vec.end(), 134);
    vec.insert(vec.begin(), 134);
    int n = 0;
    int c;
    cout << "Введите индекс добавляемого значения:  "; cin >> n;
    cout << "Введите добавляемое значение: "; cin >> c;
    vec.insert(vec.begin() + n, c);*/

	/*int m = 0;
	do
	{
		cout << "Введите индекс удаляемого значения:  "; cin >> m;
	} while (m>=vec.size());
	vec.erase(vec.begin());
	vec.erase(vec.end()-1);
	vec.erase(vec.begin() + m);
	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << tab;
	}
	cout << endl;*/

	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
	{
		cout << *it << tab;
	}
	cout << endl;

	for (std::vector<int>::reverse_iterator it = vec.rbegin(); it != vec.rend(); ++it)
	{
		cout << *it << tab;
	}
	vector_properties(vec);
	cout << delimiter << endl;

	std::vector<int>vec2(100);
	vector_properties(vec2);
	vec2.push_back(1024);
	vec2.shrink_to_fit();
	vector_properties(vec2);
#endif // STL_VECTOR
#ifdef STL_DEQUE
	//deque - это контейнер, который хранит данные в виде набора одномерных динамических массивов
	//Этот контейнер позволяет добавлять элементы как в начало так и в конец за константное время
#endif // STL_DEQUE

}

#ifdef STL_LIST
std::list<int> list1 = { 0,1,1,2,3,5,8,13,21,34,55,89 };

//list1.insert(5, 6);

std::forward_list<int> list2= { 0,1,1,2,3,5,8,13,21,34,55,89 };
std::forward_list<int>::iterator it;

//it = list2.insert_after(it, { 17,18,5 });


#endif // STL_LIST


template<typename T>void vector_properties(const std::vector<T>& vec)
{
	cout << "Size:\t" << vec.size() << endl;
	cout << "Capacity:" << vec.capacity() << endl;
	cout << "Max size:" << vec.max_size() << endl;
}
