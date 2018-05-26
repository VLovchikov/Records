#pragma once
#include <string>

using namespace std;

struct  Tree
{
	int key;
	string str;
	Tree *l;
	Tree *r;
};

struct st
{
	Tree *tree;
	st *next;
};

class Stack
{
	st *h;
public:
	Stack();
	~Stack();
	bool isEmpty();
	void push(Tree *t);
	Tree* pop();
	void clean();
};
