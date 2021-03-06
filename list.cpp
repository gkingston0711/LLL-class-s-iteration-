#include<iostream>
#include<cstring>
#include"list.h"

using namespace std;

node::node()
{
	name=NULL;
	next=NULL;
}

node::node(char *name)
{

	this->name=new char[strlen(name)+1];
	strcpy(this->name,name);
	this->next=NULL;

	//	WE DO NOT CREATE A NEW NODE	
	//	node * new_node;
	//	new_node->name=new char[strlen(name)+1];
	//	strcpy(new_node->name,name);
	//	new_node->next=NULL;
}

node::~node()
{


}

void node::set_node(char *name)
{

	this->name=new char[strlen(name)+1];
	strcpy(this->name,name);
	this->next=NULL;

	//	node * new_node;
	//	new_node->name=new char[strlen(name)+1];
	//	strcpy(new_node->name,name);
	//	new_node->next=NULL;
}

node *& node::go_next()
{
	return next;
}

char* node::get_node()
{
	return this->name;
}

void node::display()
{
	cout<<"This node has the name: "<<this->name<<" ";
}

void node::set_next(node * connect)
{
	next=connect;
}


/**********LIST IMPLEMENTATION IS BELOW**************/


list::list()
{
	head=NULL;
}

list::~list()
{

}

void list::add_name_front(char *name)
{
	node *new_node=new node;
	new_node->set_node(name);//calling set node method from node class, node is private so required
	new_node->set_next(/*head->go_next()*/NULL);

	if(!head)
	{
		head=new_node;
		head->set_next(NULL);
	}
	else
	{
		new_node->set_next(head);
		head=new_node;
	}
}

void list::display()
{
	if(!head)
	{
		return;
	}
	else
	{
		node *temp=head;

		while(temp!=NULL)
		{
			if(temp->go_next()==NULL)
			{

				cout<<temp->get_node()<<endl;
				return;
			}
			cout<<temp->get_node()<<"-> ";
			temp=temp->go_next();
			//	temp->set_next(temp->go_next());//*******ERROR HERE SOME HOW *****
		}
	}
	return;
}

int list::count_list()
{
	if(!head)
	{
		return 0;
	}
	else
	{
		node *temp=head;
		int count=0;

		while(temp!=NULL)
		{
			++count;
			temp=temp->go_next();
		}
		return count;


	}
}

void list::remove_name(char *NAME)
{
	if(!head)
	{
		cout<<"no list"<<endl;
		return;
	}

	node *temp=head;
	node *current=head;
	while(current!=NULL)
	{
		if(strcmp(current->get_node(),NAME)!=0)
		{
			temp=current;
			current=current->go_next();
		}
		if(strcmp(current->get_node(),NAME)==0)
		{
			temp->go_next()=current->go_next();
			delete current;
			return;
		}
	}
}

void list::add_name_end(char *NAME)
{
	node *new_node=new node;
	new_node->set_node(NAME);//calling set node method from node class, node is private so required
	new_node->set_next(/*head->go_next()*/NULL);

	if(!head)
	{
		head=new_node;
		head->set_next(NULL);
		return;
	}
	else
	{
		node *temp=head;

		while(temp->go_next()!=NULL)
		{
			temp=temp->go_next();
		}

		temp->set_next(new_node);
		return;
	}
}

