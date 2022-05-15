#pragma once
#include "node.h"
#include"queue.h"
class listQ :public queue
{
	node* m_head;
	node* m_tail;
	int m_counter;

public:
	listQ();
	virtual void enqueue(int x);
	virtual int dequeue();
	virtual int Top();
	int size();
	


};

