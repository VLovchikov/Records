#include "stdafx.h"
#include "Viewed.h"


Viewed::Viewed()
{
	size = 20;
	mem = new Record*[size];
	for (int i = 0; i < size; i++) mem[i] = NULL;
}


Viewed::Viewed(int _size)
{
	size = _size;
	mem = new Record*[size];
	for (int i = 0; i < size; i++) mem[i] = NULL;
}

int Viewed::getcount()
{
	return cnt;
}



void Viewed::add(int k, string s)
{
	if (cnt >= size ) throw - 1;
	mem[cnt] = new Record;
	mem[cnt]->key = k;
	mem[cnt]->str = s;
	cnt++;
}

string & Viewed::get(int k)
{
	for (int i = 0; i < cnt; i++)
	{
		if (mem[i]->key == k)
		{
			return mem[i]->str;
		}
	}
	throw - 1;
}

void Viewed::delRec(int k)
{
	for (int i = 0; i < cnt; i++)
	{
		if (mem[i]->key == k)
		{
			Record *t = mem[cnt-1];
			mem[cnt - 1] = mem[i];
			mem[i] = t;
			cnt--;
			delete mem[cnt - 1]; return;
		}
	}
	throw - 2;
}

int Viewed::geteq()
{
	return eq;
}

Viewed::~Viewed()
{
}
