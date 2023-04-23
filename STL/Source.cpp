//STL
#include<iostream>
#include<array>
#include<vector>
using namespace std;
using std::cin;
#define tab "\t"
#define delimiter "\n---------------------------\n"
//#define STL_ARRAY
#define STL_VECTOR

template<typename T>void vector_properties(const std::vector<T>& vec);
void main()
{
	setlocale(0, "");
#ifdef STL_ARRAY
	//array - ��� ���������, ������� ������ ������ � ����������� �������
	std::array<int, 5> arr = { 3,5,8,13,21 };
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // STL_ARRAY

#ifdef STL_VECTOR
	//vector - ��� ���������, ������� ������ ������ � ���� ������������� �������
	std::vector<int> vec{ 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

	for (int i = 0; i < vec.size(); i++)
	{
		cout << vec[i] << tab;
	}
	cout << endl;

	vector_properties(vec);
	//vec.push_back(134);
	//vec.reserve(25);
	vec.resize(17);
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

	std::vector<int>vec2(100);
	vector_properties(vec2);
	vec2.push_back(1024);
	vec2.shrink_to_fit();
	vector_properties(vec2);


#endif // STL_VECTOR

}
template<typename T>void vector_properties(const std::vector<T>& vec)
{
	cout << "Size:\t" << vec.size() << endl;
	cout << "Capacity:" << vec.capacity() << endl;
	cout << "Max size:" << vec.max_size() << endl;
}