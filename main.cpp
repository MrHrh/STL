#include<iostream>
#include<vector>
#include"Func_Obj_Plus.h"
using namespace std;


int vector_show();
int deque_show();
int list_show();
int set_show();
int multiset_show();
int map_show();
int multimap_show();
int stl_sort();
int stl_reverse();
int stl_max_min();

int main()
{
	vector_show();
	cout << "-----------------------------------" << endl;
	deque_show();
	cout << "-----------------------------------" << endl;
	list_show();
	cout << "-----------------------------------" << endl;
	set_show();
	cout << "-----------------------------------" << endl;
	multiset_show();
	cout << "-----------------------------------" << endl;
	map_show();
	cout << "-----------------------------------" << endl;
	multimap_show();
	cout << "-----------------------------------" << endl;
	stl_sort();
	cout << "-----------------------------------" << endl;
	stl_reverse();
	cout << "-----------------------------------" << endl;
	stl_max_min();
	cout << "-----------------------------------" << endl;
	Func_Obj_Plus sum;
	cout << "Func_Obj_Plus sum: " << sum(10, 20) << endl;
	return 0;
}

