#pragma once
using namespace std;

class queue 
{
	
public:
	virtual void enqueue(int x) = 0;
	virtual int dequeue() = 0;
	virtual int Top()=0;

};

