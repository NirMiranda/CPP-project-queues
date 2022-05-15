#include "arrQ.h"
#include "queue.h"
#include <stdlib.h>
using namespace std;
arrQ::arrQ()
{
	m_arr = new int[SIZE];
	m_len = SIZE;
	m_head = 0;
	m_tail = 0;
	m_current = -1;
}
arrQ::~arrQ()
{
	delete[] m_arr;
};

int arrQ::getcurrent() const
{
	return m_current;
}
void  arrQ::enqueue(int x)
{		
	
	if(m_current!=SIZE)			
	{

			m_arr[m_tail] = x;
			m_tail++;
			m_current++;
		
	}
	else
	{

		m_tail = 0;
		cout << "The Queue is full" << endl;
	}
	

}
int arrQ::dequeue()
{
	int temp = 0;
	if(m_current)
	{
		temp = m_arr[m_head];
		m_arr[m_head] = NULL;
		m_head++;
		m_current--;
		return temp;
	}
	if(m_current==0)
	cout << "The Queue is empty" << endl;
	return 0;
}
int arrQ::Top()
{
	if (m_current)
	{
		return m_arr[m_head];
	}
	cout << "The Queue is empty" << endl;
	return 0;
}
int arrQ::isEmpty()
{
	if (m_current==0)
	{
		return true;
	}

	else return false;

}
