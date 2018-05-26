#pragma once
#include <string>
#include "Stack.h"
#include <iostream>
using namespace std;


class Searching
{
	Tree *h;
	Stack st;
public:
	Searching();
	Tree *geth()
	{
		return h;
	}
	void insert(int key, string str);
	bool contain(int key);
	void del(int key);
	void remove(Tree *t,int key);
	Tree *max(Tree *t);
	void print(Tree *hh);
	~Searching();
};

