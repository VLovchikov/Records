#include "stdafx.h"
#include "Hash.h"



Hash::Hash()
{
	size = 10;
	a = new List[size];
	ch = 0;
	eq = 0;
}

Hash::Hash(int _N)
{
	size = _N;
	a = new List[size];
	ch = 0;
	eq = 0;
}

bool Hash::contain(int k)
{
	int g = hash(k);
	return a[g].search(k);
}

void Hash::add(int k, string str)
{
	int g = hash(k);
	if (contain(k)) throw - 3;
	a[g].add(str, k);
	ch++;
}

void Hash::del(int k)
{
	if (!contain(k)) throw - 4;
	int g = hash(k);
	a[g].del(k);
}

string Hash::get(int k)
{
	int g = hash(k); eq++;
	return a[g].get(k);
}

int Hash::reteq(int k)
{
	int g = hash(k);
	return a[g].reteq()+eq;
}

List Hash::getList(int k)
{
	return a[k];
}

int Hash::getch()
{
	return ch;
}

int Hash::getsize()
{
	return size;
}

Hash::~Hash()
{
}
