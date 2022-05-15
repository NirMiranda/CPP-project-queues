#pragma once
class node
{
	int m_key;
	node* m_next;
	node* m_prev;
public:
	
	node(int x);
	void setkey(int x);
	void setprev(node *x);
	void setnext(node* x1);
	node* getnext();
	node* getprev() ;
	int getkey() ;



	
};

