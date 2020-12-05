#pragma once
#include<iostream>
#include"Teacher.h"

using namespace std;
class Exception
{
};


class  Node
{
public:
	Teacher data;
	Node* next;
	Node();
	Node(Teacher d);
};


class Ring
{
private:
	Node* head;
	int size;
public:
	Ring();
	void push(Teacher x);
	void pop();
	void output();
	Node* get_node();
	int get_size();
	friend ostream& operator<<(ostream& out, const Node& node);
};


class Iterator
{
private:
	Node* node;
	int size;
	int current;
public:
	friend Ring;
	Iterator(Ring* element); 
	void begin();
	void search(Teacher x);
	Iterator& operator++();
	Teacher operator*();
	void operator = (Teacher x);
	Iterator& operator[](int index);
	void shell();
	void sort_special();
	friend ostream& operator<<(ostream& out, const Iterator& it);
};


