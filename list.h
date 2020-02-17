

class node
{
	public:
		node();
		node(char *name);
		~node();
		void set_node(char *name);
		node *& go_next();
		char* get_node();
		void display();
		void set_next(node *connect);
		node* get_next();	

	private:
		char *name;
		node *next;
};

class list
{
	public:
		list();
		~list();
		void add_name_front(char *name);
		void display();


	private:
		node *head;

};

