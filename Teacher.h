#pragma once
#include<iostream>
using namespace std;
class Teacher
{
private:
	
	int groups;
	int labs;
	string subject;
	int curLabs;
public:
	string fio;
	Teacher();
	Teacher(string f, int g, int l, string s, int cl);
	void set_fio(string);
	void set_groups(int);
	void set_labs(int);
	void set_subject(string);
	void set_curLabs(int);
	string get_fio();
	int get_groups();
	int get_labs();
	string get_subject();
	int get_curLabs();
	friend ostream& operator<<(ostream& out, const Teacher c);
	friend istream& operator>>(istream& in, Teacher& t);
	friend bool operator==(const Teacher t1,const Teacher t2);
	friend bool operator<(const Teacher t1,const Teacher t2);
	friend bool operator>(const Teacher t1, const Teacher t2);
};

