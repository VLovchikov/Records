#include "Stack.h"


Stack::Stack()
{
	h = NULL;
}


Stack::~Stack()
{
}

bool Stack::isEmpty()
{
	return (h == NULL);
}

void Stack::push(Tree * t)
{
	st *tt = new st;
	tt->tree = t;
	tt->next = NULL;
	if (h == NULL)
	{
		h = tt;
	}
	else
	{
		st *s = tt;
		tt->next = h;
		h = tt;
	}
}

Tree * Stack::pop()
{
	if (isEmpty()) throw - 1;
	st *s = h;
	Tree *t = h->tree;
	h = h->next;
	delete s;
	return t;
}

void Stack::clean()
{
	if (isEmpty()) return;
	while (!isEmpty())
	{
		Tree *t = pop();
		t=NULL;
		delete t;
	}
}
