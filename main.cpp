#include<iostream>
#include<cstring>
#include"list.h"

using namespace std;


int main()
{
//	node obj("jake");
	list obj;
	obj.add_name_front("jake");
	obj.add_name_front("joey");
	obj.add_name_front("daniel");
	int COUNT;
	COUNT=obj.count_list();
	cout<<"list has : "<<COUNT<<" name "<<endl;

	obj.display();

	obj.remove_name("joey");
	obj.add_name_end("zelda");
	obj.add_name_front("ammon");
	obj.display();


	return 0;
}

