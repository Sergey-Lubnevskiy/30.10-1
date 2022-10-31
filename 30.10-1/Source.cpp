#include <iostream>
#include "subscriber.h"
#include "scroll.h"
#include "Header.h"
using namespace std;

int main()
{
	Contact obj1("Graf", 362);
	Contact obj2("Lion", 9672);
	Contact obj3("Fanda", 65937);
	scroll<Contact>c_list;
	c_list.Add(obj1);
	c_list.Add(obj2);
	c_list.Add(obj3);
	c_list.Save();
	searchnum(2321);
}