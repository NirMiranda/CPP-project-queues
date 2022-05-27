#pragma once
#include<string.h>

class survivor
{
	char* m_name[20];
	int m_age;
	int m_status;
public:
	survivor();
	survivor(int age, int status, char* name);
	survivor(survivor &other);
	void setage(int age);
	void setname(char* name);
	void setstatus(int status);
	int getstatus()const;
	int getage() const;
	char* getname() const;

};