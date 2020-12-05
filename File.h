#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include"Ring.h"
using namespace std;

enum Key{ no = 0,txt,bin};

class File
{
private:
	fstream file;
	string name;
	Key key;
	int size;
public:
	File();
	File(string, Key);
	~File();
	void open(string);
	void close();
	void begin();
	void set_size(int);
	int get_size();
	Teacher read();
	void edit(int, Teacher[]);
	void bouble_sort_fio();
	void bouble_sort_groups();
	void bouble_sort_labs();
	void bouble_sort_subject();
	void bouble_sort_curLabs();
	friend File& operator<<(File&, const char* );
	friend ostream& operator<<(ostream&, File&);
	friend File& operator<<(File&, Teacher& );
};

