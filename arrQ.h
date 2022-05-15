#pragma once
#include "queue.h"
#include <iostream>
#define SIZE 60
class arrQ : public queue
{
public:
	int* m_arr;
	int m_head;
	int m_tail;
	int m_len;
	int m_current;

public:

	virtual void enqueue(int x);
	virtual int dequeue();
	int getcurrent() const;
	arrQ();
	~arrQ();
	int isEmpty();
	virtual int Top();
	





};

