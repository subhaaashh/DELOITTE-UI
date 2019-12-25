#include<iostream>
using namespace std;

class Person

{

public:
	void name()
	{
		cout<<"SUBHASH IS A PERSON";
	}
	
class Emplyoee:public Person

{

public:
	void empname()
	{
		cout<<"SUBHASH IS AN EMPLOYEE";
	}

class Manager:public Employee

{
	public:
	void mgrname()
	{
		cout<<"SUBHASH IS A MANAGER ALSO";
	}
};

int main
{
	Manager M
	M.name();
	M.empname();
	M.mgrname();
	return 0;
}
