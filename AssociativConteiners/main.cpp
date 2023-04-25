#include<iostream>
#include<map>
#include<set>
#define tab "\t"
using namespace std;

//#define STL_SET
#define STL_MAP
void main()
{
	setlocale(0, "");
	//к ассоциативным контейнерам относятся map, set, multimap, multiset
	//все ассоциативные контейнеры хранят данные в бинарном дереве

#ifdef STL_SET
	std::set <int> set = { 50,25,75,16,32,64,128,8 };
	for (std::set<int>::iterator it = set.begin(); it != set.end(); ++it)
	{
		cout << *it << tab;
	}
	cout << endl;
#endif // STL_SET
#ifdef STL_MAP

	std::map<int, std::string>week =
	{
		std::pair<int,std::string>(0,"Sunday"),
		std::pair<int,std::string>(1,"Monday"),
		std::pair<int,std::string>(2,"Tuesday"),
		std::pair<int,std::string>(3,"Wendsday"),
		{4,"THursday"},
	    {5,"THursday"},
	    {6,"Friday"},
	    {0,"Sunday"}
	};
	for(std::map<int,std::string>::iterator it = week.begin(); it!=week.end(); ++it)

		{
			cout<<it->first<<tab<<it->second<<endl;
		}
	cout << endl;
	}
#endif // STL_MAP


}