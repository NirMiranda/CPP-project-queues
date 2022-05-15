#pragma once
#include "arrQ.h"
#include "listQ.h"
#include"queue.h"

class M_Q
{
	listQ list1;
	arrQ arr1;
	int m_counter;
	int m_size;
	int m_finished;
	int m_current;
public:
	M_Q();
	void MEnqueue(int x);
	void setsize(int size);
	void setfinished(int finishe);
	int getfinal() const;
	int getsize() const;
	int MDequeue();
	int Middle();
	int getcurrent1() const;

};

