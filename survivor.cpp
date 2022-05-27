#define _CRT_SECURE_NO_WARNINGS
#include "survivor.h"
#include<string.h>
survivor::survivor()
{
	*m_name = nullptr;
	m_age = 0;
	m_status = 0;

}
survivor::survivor(int age, int status, char* name)
{
	this->setname(name);
	this->setage(age);
	this->setstatus(status);
}
survivor::survivor(survivor &other)
{
	this->setname(other.getname());
	this->setage(other.getage());
	this->setstatus(other.getstatus());

}
void survivor::setage(int age)
{
	m_age = age;
}
void survivor::setname(char* name)
{
	*m_name = new char(strlen(name) + 1);
	strcpy(*m_name, name);


}
void survivor::setstatus(int status)
{
	m_status = status;
}
int survivor::getstatus()const
{
	return m_status;
}
int survivor::getage() const
{
	return m_age;
}
char* survivor::getname() const
{
	return *m_name;
}