#include "stdafx.h"
#include "Hash.h"



Hash::Hash(int _N=10)
{
	size = _N;
	a = new List[size];
}

Hash::~Hash()
{
}
