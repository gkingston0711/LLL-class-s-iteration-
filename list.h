

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
		int count_list();
		void display();
		void remove_name(char *NAME);
		void add_name_end(char *NAME);


	private:
		node *head;

};

