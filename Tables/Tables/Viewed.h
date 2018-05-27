#pragma once
#include <string>
using namespace std;

struct Record
{
	int key;
	string str;
};

class Viewed
{
	int size;
	int cnt;
	Record **mem;
	int eq;
public:
	Viewed();
	Viewed(int _size);
	int getcount();
	void add(int k, string s);
	string& get(int k);
	void delRec(int k);
	int geteq();
	~Viewed();
};

