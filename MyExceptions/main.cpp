//MyExceptions
#include<iostream>
using namespace std;

int factorial(int n);

//#define EXCEPTON_THEORY

void main()
{
	setlocale(LC_ALL, "");

#ifdef EXCEPTON_THEORY
	int a = 2;
	int b = 0;
	try
	{
		//throw 1;
		//throw "Exception happend";
		//throw std::exception("Object of std::exception");
		cout << a / b << endl;
	}
	catch (int e)
	{
		//catch (ïîéìàòü) - îáðàáîò÷èê èñêëþ÷åíèÿ
		//e - Error
		std::cerr << "Error# " << e << endl;
	}
	catch (const char* e)
	{
		std::cerr << e << endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << endl;
		//Ìåòîä what() âîçâðàùàåò ñîîáùåíèå îá îøèáêå
	}
	catch (...)
	{
		cout << "Something happend" << endl;
	}
#endif // EXCEPTON_THEORY

	int n;
	cout << "Ââåäèòå ÷èñëî äëÿ âû÷èñëåíèÿ ôàêòîðèàëà: "; cin >> n;
	try
	{
		cout << factorial(n) << endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << endl;
	}
}

int factorial(int n)
{
	if (n > 12)throw std::exception("Arithmetical overflow");
	int f = 1;
	for (int i = 1; i <= n; i++)
	{
		cout << i << "! = ";
		f *= i;
		cout << f << endl;
	}
	return f;
}