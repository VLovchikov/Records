#pragma once
#include <string>
#include "Stack.h"
#include <iostream>
using namespace std;


class Searching
{
	Tree *h;
	Stack st;
	int eq;
public:
	Searching();
	Tree *geth()
	{
		return h;
	}
	void insert(int key, string str);
	bool contain(int key);
	void del(int key);
	string get(int key);
	Tree *max(Tree *t);
	void print(Tree *hh);
	void fillst(Tree *h);
	void cleanst();
	bool stIsEmpty();
	Tree *popfromst();
	~Searching();
};

