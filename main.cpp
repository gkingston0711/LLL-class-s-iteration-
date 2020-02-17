#include<iostream>
#include<cstring>
#include"list.h"

using namespace std;


int main()
{
//	node obj("jake");
	list obj;
	obj.add_name_front("jake");
//	obj.add_name_front("joey");
//	obj.add_name_front("daniel");

	obj.display();


	return 0;
}

