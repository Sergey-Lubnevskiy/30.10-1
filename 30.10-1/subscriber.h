#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Contact
{
	string name;
	int num;
public:
	Contact()
	{
		name = "name";
		num = 0;
	}
	Contact(const char* n, int nu)
	{
		name = n;
		num = nu;
	}
	void Print()
	{
		cout << "Name: " << name << endl;
		cout << "Number: " << num << endl;
	}
	void Init()
	{
		cout << "Name: ";
		cin >> name;
		cout << "Number: ";
		cin >> num;
	}
	void Save()
	{
		fstream inout;
		inout.open("Phones.txt", ios::app);
		inout << "Name: " << name << endl;
		inout << "Number: " << num << endl;
		inout.close();
	}
};