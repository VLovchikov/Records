// Tables.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Hash.h"
#include "Searching.h"
#include "Viewed.h"
#include <iostream>

int main()
{
	Searching s;
	s.insert(12, "sadfasdf");
	s.insert(14, "sadfasdf");
	s.insert(2, "sadfasdf");
	s.insert(22, "sadfasdf");
	s.insert(17, "sadfasdf");
	s.insert(13, "sadfasdf");
	s.insert(5, "sadfasdf");
	s.insert(3, "sadfasdf");
	s.insert(6, "sadfasdf");
	s.insert(4, "sadfasdf");
	s.insert(1, "sadfasdf");
	s.del(14);
	s.del(2);
	Tree *j = s.geth();
	s.print(j);
    return 0;
}

