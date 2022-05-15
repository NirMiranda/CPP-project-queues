#include "listQ.h"
#include<iostream>
listQ::listQ()
{
	m_head = nullptr;
	m_tail = nullptr;
	m_counter = 0;
}
void listQ::enqueue(int x)
{
	node* newnode = new node(x);
	if (m_counter == 0)
	{
		this->m_head = newnode;
		this->m_tail = newnode;
		m_counter++;
		return;
	}
	else
	{
		newnode->setnext(this->m_head);
		this->m_head->setprev(newnode);
		this->m_head = newnode;
		m_counter++;
		

	}

}
 int listQ::dequeue()
 {
	 int temp;
	 if (m_counter==0 ) 
	 {
		 return 0;
	 }
	 else if (m_counter==1)
	 {
		 temp = this->m_head->getkey();
		 delete this->m_head;
		 this->m_head = NULL;
		 m_counter--;
		 return temp;
		 
	 }
	 else
	 {
		 temp = this->m_tail->getkey();
		 this->m_tail = m_tail->getprev();
		 delete m_tail->getnext();
		 this->m_tail->setnext(nullptr);
		 m_counter--;
		 return temp;

	 }

 }
 int listQ::Top()
 {
	 return m_tail->getkey();
 }
 int listQ::size()
 {

	/* node* temp = this->m_head;
	 if (temp)
	 {
		 temp->setnext(this->m_head);
		 m_counter++;

	 }*/
	 return m_counter;
	 
 }
