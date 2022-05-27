#define _CRT_SECURE_NO_WARNINGS

#include "survivor.h"
#include "tribe.h"
#include<string.h>

#include <iostream>
using namespace std;
int main()
{
	survivor s;
	char s1[7] = "yoni";
	s.setage(18);
	s.setname(s1);
	s.setstatus(0);
	survivor* s2 = new survivor(s); // building a new survivor from the copyCRT;
	cout << s2->getname() << endl;
	survivor s4;
	char s3[7] = "rinat";
	s4.setage(26);
	s4.setname(s3);
	s4.setstatus(1);
	survivor* s7 = new survivor(s4);
	survivor a1;
	char a2[7] = "yuda";
	a1.setage(18);
	a1.setname(a2);
	a1.setstatus(1);
	survivor* s8 = new survivor(a1);
	survivor b1;
	char b2[7] = "yossi";
	b1.setage(40);
	b1.setname(b2);
	b1.setstatus(2);
	survivor* b3 = new survivor(b1);
	tribe t1;
	char t3[10] = "shevet";
	tribe* t2 = new tribe(t3, 4, 4);
	t2->newsurvivor(s2);
	t2->newsurvivor(s7);
	t2->newsurvivor(s8);
	t2->newsurvivor(b3);
	t2->printtribe();
}