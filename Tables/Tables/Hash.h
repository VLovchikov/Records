#pragma once
#include <string>
using namespace std;

struct Node
{
	int key;
	string str;
	Node *next;
};

class List
{
	Node *h;
public:
	List()
	{
		h = NULL;
	}
	bool isEmpty()
	{
		return h == NULL;
	}
	void add(string str, int k)
	{
		Node *t = new Node;
		t->key = k;
		t->str = str;
		t->next = NULL;
		if (isEmpty()) h = t; return;
		t->next = h;
		h = t;
	}
	string get(int k)
	{
		Node *t = h;
		while (t)
		{
			if (t->key == k)
			{
				return t->str;
			}
			t = t->next;
		}
		throw - 1;
	}
	void del(int k)
	{
		if (h->key == k)
		{
			Node *hh = h;
			h = h->next;
			delete hh;
			return;
		}
		Node *t = h;
		while (t->next!=NULL)
		{
			if (t->next->key == k)
			{
				Node *tt = t->next;
				t->next = t->next->next;
				delete tt;
			}
			t = t->next;
		}
		throw - 2;;
	}
	bool search(int k)
	{
		Node *t = h;
		while (t)
		{
			if (t->key = k) return true;
			t = t->next;
		}
		return false;
	}
};

class Hash
{
	int size;
	List *a;
	int hash(int k)
	{
		return k%size;
	}
public:
	Hash();
	Hash(int _N);
	bool contain(int k);
	void add(int k, string str);
	void del(int k);
	~Hash();
};

