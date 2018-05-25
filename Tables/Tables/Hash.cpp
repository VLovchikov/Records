#include "stdafx.h"
#include "Hash.h"



Hash::Hash()
{
	size = 20;
	a = new List[size];
}

Hash::Hash(int _N)
{
	size = _N;
	a = new List[size];
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
}

void Hash::del(int k)
{
	if (!contain(k)) throw - 4;
	int g = hash(k);
	a[g].del(k);
}

string Hash::get(int k)
{
	int g = hash(k);
	return a[g].get(k);
}

int Hash::reteq(int k)
{
	int g = hash(k);
	return a[g].reteq();
}

Hash::~Hash()
{
}
