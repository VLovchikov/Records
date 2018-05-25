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
class Searching
{
	Tree *h;
public:
	Searching();
	void insert(int key, string str);
	bool contain(int key);
	void del(int key);
	~Searching();
};

