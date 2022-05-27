#include "survivor.h"
#include <iostream>
using namespace std;
class tribe
{
	char* m_name[20];
	int maxsurvivor;
	survivor** t1;
	int leftsurvivor;
public:
	tribe();
	tribe(char* name, int max, int len);
	tribe(tribe& other);
	void setname(char* name);
	void setmax(int max);
	void setleft(int left);
	char* getname() const;
	int getleft() const;
	int getmax() const;
	void newsurvivor(survivor* p1);
	void deletesurvivor(char* name);
	void printtribe() const;

};