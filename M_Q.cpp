#include "M_Q.h"
M_Q::M_Q()
{
	
	m_size = 0;
	m_counter = 0;
	m_finished = 0;
	m_current;
	
}
void M_Q::setsize(int size)
{
	
	m_size = size;
}
int M_Q::getsize() const
{
	return m_size;
}
int M_Q::getcurrent1() const
{
	return arr1.getcurrent();
}
void M_Q::setfinished(int finishe)
{
	m_finished = finishe;
}
int M_Q::getfinal() const
{
	return m_finished;
}

void M_Q::MEnqueue(int x)
{
	if (m_finished==0)
	{
		if (m_counter / ((m_size / 2) + 1) == 0)
		{
			arr1.enqueue(x);
			m_counter++;
			return;
		}
		else
		{
			list1.enqueue(x);
			m_counter++;
			return;
		}
	}
	else if (m_finished == 1)
	{
		if (arr1.m_current <= (m_size / 2))
		{
			int temp = list1.dequeue();
			arr1.enqueue(temp);
			
			
		}
		else
		{
			list1.enqueue(x);
			m_counter++;
		}
		
	}

	



}
int M_Q::MDequeue()
{
	int temp;
	int outnumber;
	
	
	if (m_counter % 2 == 0)
	{
		outnumber=arr1.dequeue();
		m_counter--;
		m_size--;
		return outnumber;
	}
	else if (m_counter % 2 != 0)
	{
		temp = list1.dequeue();
		arr1.enqueue(temp);
		outnumber=arr1.dequeue();
		m_counter--;
		m_size--;
		
		return outnumber;
	}
}
int M_Q::Middle()
{
	int middlenumber;
	middlenumber = list1.Top();
	return middlenumber;
}