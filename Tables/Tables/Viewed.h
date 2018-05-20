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
public:
	Viewed();
	Viewed(int _size);
	int getcount();
	string& getdata(int m);
	int getkey(int m);
	void add(int k, string s);
	string& search(int k);
	void delRec(int k);
	~Viewed();
};

