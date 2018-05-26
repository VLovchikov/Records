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
	if (!contain(key)) throw - 1;
	Tree *t = h;
	st.push(t);
	remove(t,key);
	st.clean();
}

void Searching::remove(Tree * t,int key)
{
	if (t->key > key)
	{
		t = t->l;
		st.push(t);
		remove(t, key);
		return;
	}
	if (t->key < key)
	{
		t = t->r;
		st.push(t);
		remove(t, key);
		return;
	}
	if (t->key == key)
	{
		if ((t->l&&t->r) == NULL)
		{
			Tree *tt = st.pop();
			tt->l = NULL;
			tt->r = NULL;
			delete t;
			st.clean();
			return;
		}
		if (t->r == NULL&&t->l != NULL)
		{
			Tree *tt = t->l;
			t->l = NULL;
			t->key = tt->key;
			t->str = tt->str;
			tt = NULL; delete tt;
			st.clean();
			return;
		}
		if (t->r != NULL&&t->l == NULL)
		{
			Tree *tt = t->r;
			t->r = NULL;
			t->key = tt->key;
			t->str = tt->str;
			tt = NULL;
			delete tt;
			st.clean();
			return;
		}
		if (t->l != NULL&&t->r != NULL)
		{
			Tree *tt=max(t->l);
			t->key = tt->key;
			t->str = tt->str;
			tt = NULL;
			delete tt;
			st.clean();
			return;
		}
	}
}

Tree * Searching::max(Tree * t)
{
	while (t->r != NULL)
	{
		st.push(t);
		t = t->r;
	}
	if (t->l != NULL)
	{
		Tree *tt = st.pop();
		tt->r = t->l;
	}
	else
	{
		Tree *tt = st.pop();
		tt->r = NULL;
	}
	t->l = NULL;
	t->r = NULL;
	return t;
}

void Searching::print(Tree * hh)
{
	if (hh == NULL) return;
	cout << hh->key << "  " << hh->str << endl;
	print(hh->l);
	print(hh->r);
}





Searching::~Searching()
{
}
