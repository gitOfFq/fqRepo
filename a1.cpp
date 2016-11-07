#include <iostream>
using namespace std;

class Test
{
public:
	Test(){}
	~Test(){}
};

class MyPrint
{
private:
	string str;
public:
	MyPrint(){}
	MyPrint(string s):str(s){}
	const void show const()
	{
		cout << "str = " << str << endl;
	}
};
