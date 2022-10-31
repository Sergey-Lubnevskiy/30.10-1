#pragma once
#include <iostream>
#include "subscriber.h"
#include "scroll.h"
using namespace std;

void Load()
{
	fstream obj;
	obj.open("Text.txt");
	const int size = 300;
	char buf[size] = {};
	do
	{
		obj.getline(buf, size);
		cout << buf << endl;
	} while (obj);
	obj.close();
}

void searchname(const char* a)
{
	fstream in;
	in.open("Text.txt");
	cout << "Here's what we found:"<<endl;
	const int size = 300;
	char buf[size] = {};
	do
	{
		in.getline(buf, size);
		const char check[] = "Name:";
		if (strstr(buf, check))
			if (strstr(buf, a))
			{
				cout << endl;
				cout << buf << endl;
				in.getline(buf, size);
				cout << buf << endl;
			}
	} while (in);
	in.close();
}

void searchnum(int a)
{
	fstream in;
	in.open("Text.txt");
	cout << "Here's what we found:"<<endl;
	const int size = 300;
	char buf[size] = {};
	char buf_check[size] = {};
	char buf_num[size] = {};
	sprintf(buf_num, "%d", a);
	do
	{
		in.getline(buf, size);
		const char check[] = "Name:";
		const char check2[] = "Number:";
		if (strstr(buf, check))
			strncpy(buf_check, buf, size);
		if (strstr(buf, check2))
			if (strstr(buf, buf_num))
			{
				cout << endl;
				cout << buf_check << endl;
				cout << buf << endl;
			}
	} while (in);
	in.close();
}