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
	if (h == NULL) return false;
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
	Tree *t, *tt, *e;
	if (h->key == key)
	{
		if (h->l == NULL)
		{
			if (h->r == NULL)
			{
				h = NULL;
				return;
			}
			else
			{
				t = h;
				h = h->r;
				delete t;
				return;
			}
		}
		t=max(h->l);
		h->key = t->key;
		h->str = t->str;
		if (t = h->l)
		{
			if (t->l == NULL) h->l = NULL;
		}
		t = NULL;
		delete t;
		return;
	}
	t = h;
	tt = h;
	while (t)
	{
		if (t->l)
		{
			if (t->l->key == key)
			{
				tt = t->l; break;
			}
		}
		if (t->r)
		{
			if (t->r->key == key)
			{
				tt = t->r; break;
			}
		}
		if (t->key > key) t = t->l;
		else if (t->key < key) t = t->r;
	}
	if (tt->r == NULL&&tt->l == NULL)
	{
		if (t->l == tt) t->l = NULL;
		else t->r = NULL;
		delete tt;
		return;
	}
	if ((tt->r != NULL&&tt->l == NULL) || (tt->r == NULL&&tt->l != NULL))
	{
		if (tt->l != NULL)
		{
			if (t->l == tt) t->l = tt->l;
			else t->r = tt->l;
		}
		if (tt->r != NULL)
		{
			if (t->l == tt) t->l = tt->r;
			else t->r = tt->r;
		}
	}
	if (tt->r != NULL&&tt->l != NULL)
	{
		e = max(tt->l);
		tt->key = e->key;
		tt->str = e->str;
		if (tt->key == tt->l->key)
		{
			e = tt->l;
			tt->l = NULL;
			delete e;
		}
		st.clean();
		return;
	}
}

string Searching::get(int key)
{
	if (!contain(key)) throw - 1;
	Tree *t = h;
	while (t)
	{
		if (t->key > key)
		{
			t = t->l; eq++;
		}
		if (t->key < key)
		{
			t = t->r; eq++;
		}
		if (t->key == key) return t->str;
	}
}



Tree * Searching::max(Tree * t)
{
	if (t->l == NULL&&t->r == NULL)
	{
		return t;
	}
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

void Searching::fillst(Tree *h)
{
	if (h == NULL) return;
	st.push(h);
	fillst(h->l);
	fillst(h->r);
}

void Searching::cleanst()
{
	st.clean();
}

bool Searching::stIsEmpty()
{
	return st.isEmpty();
}

Tree * Searching::popfromst()
{
	return st.pop();
}





Searching::~Searching()
{
}
