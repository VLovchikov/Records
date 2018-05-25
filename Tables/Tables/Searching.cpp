#include "stdafx.h"
#include "Searching.h"


Searching::Searching()
{
	h = NULL;
}


void Searching::insert(int key, string str)
{
	if (contain(key)) throw - 1;
	Tree *t = new Tree;
	t->key = key;
	t->str = str;
	t->l = NULL;
	t->r = NULL;
	if (h == NULL)
	{
		h = t; return;
	}
	Tree *tt = h;
	while (tt)
	{
		if (tt->key > t->key)
		{
			if (tt->l != NULL) tt = tt->l;
			else
			{
				tt->l = t; return;
			}
		}
		if (tt->key < t->key)
		{
			if (tt->r != NULL) tt = tt->r;
			else
			{
				tt->r = t; return;
			}
		}
	}
}

bool Searching::contain(int key)
{
	Tree *t = h;
	while (t)
	{
		if (t->key == key) return true;
		if (t->key > key) t = t->l;
		if (t == NULL) return false;
		if (t->key < key) t = t->r;
	}
	return false;
}

void Searching::del(int key)
{

}

Searching::~Searching()
{
}
