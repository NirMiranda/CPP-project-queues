#include "node.h"

node::node(int x)
{
	this->setkey(x);
	this->m_next = nullptr;
	this->m_prev = nullptr;
	
}


void node::setkey(int x)
{
	m_key = x;

}
void node::setprev(node* x)
{
	m_prev = x;
}
void node::setnext(node* x1)
{
	m_next = x1;
}

node* node::getnext()
{
	return m_next;

}
node* node::getprev()
{
	return m_prev;
}
int node::getkey()
{
	return m_key;
}