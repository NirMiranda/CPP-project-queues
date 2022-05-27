#define _CRT_SECURE_NO_WARNINGS
#include "tribe.h"
#include <iostream>
using namespace std;

tribe::tribe()
{
	maxsurvivor = 0;
	leftsurvivor = 0;
	*m_name = nullptr;
	t1 = nullptr;

}
tribe::tribe(char* name, int max, int len)
{

	this->setname(name);
	this->setmax(max);

	t1 = new survivor * [maxsurvivor];

}
tribe::tribe(tribe& other)
{
	this->setmax(other.getmax());
	this->setleft(other.getleft());
	this->setname(other.getname());

}
void tribe::setname(char* name)
{
	*m_name = new char(strlen(name) + 1);
	strcpy(*m_name, name);
}
void tribe::setmax(int max)
{
	maxsurvivor = max;
}
void tribe::setleft(int left)
{
	leftsurvivor = left;
}
char* tribe::getname() const
{
	return *m_name;
}
int tribe::getleft() const
{
	return leftsurvivor;
}
int tribe::getmax() const
{
	return maxsurvivor;

}
void tribe::newsurvivor(survivor* p1)
{
	t1[leftsurvivor] = new survivor();
	t1[leftsurvivor]->setstatus(p1->getstatus());
	t1[leftsurvivor]->setname(p1->getname());
	t1[leftsurvivor]->setage(p1->getage());
	leftsurvivor++;

}
void tribe::deletesurvivor(char* name)
{
	int counter = 0;
	for (int i = 0; i < leftsurvivor; i++)
	{
		if (strcmp(t1[i]->getname(), name) == 0)
		{
			t1[i] = nullptr;
			counter = i;

		}
	}
	for (int j = counter; j < maxsurvivor; j++)

	{
		t1[counter] = t1[counter + 1];
		counter++;

	}
	t1[counter] = nullptr;
	leftsurvivor--;
}
void tribe::printtribe() const
{
	for (int i = 0; i < leftsurvivor; i++)
	{
		cout << "the name of the " << i+1 << " survivor is " << t1[i]->getname() << endl;
		cout << "the age of the " << i+1 << " survivor is " << t1[i]->getage() << endl;
		cout << "the status of the " << i+1 << " survivor is " << t1[i]->getstatus() << endl;

	}

}