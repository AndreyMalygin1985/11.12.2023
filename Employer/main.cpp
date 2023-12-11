#include<iostream>
#include<Windows.h>

using namespace std;


class Employer
{
public:

	virtual void print() = 0;

	virtual void rest() { 
		this->print();
		cout << "Go rest";
	};

	virtual ~Employer() {};
};

class President : public Employer
{
public:
	virtual void print() {
		cout << "President";
	};
};

class Manager : public Employer
{
public:
	virtual void print() {
		cout << "Manager";
	};
};

class Worker : public Employer
{
public:
	virtual void print() {
		cout << "Worker";
	};

	virtual void rest()
	{
		cout << "No time to rest ";
		this->print();
	};

};


int main()
{
	Employer* a[3] = {
	new President(),
	new Manager(),
	new Worker(),
	};

	for (size_t i = 0; i < 3; i++)
	{
		cout << "start work - ";
		a[i]->print();
		cout << endl;
	}
	for (size_t i = 0; i < 3; i++)
	{
		cout << "start work - ";
		a[i]->rest();
		cout << endl;
	}



	return 0;
}