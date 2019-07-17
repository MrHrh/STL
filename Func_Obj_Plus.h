#pragma once
#include<iostream>
using namespace std;

class Func_Obj_Plus
{
private:
	int b;
	int a;
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};
