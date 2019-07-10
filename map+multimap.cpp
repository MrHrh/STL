#include<iostream>
#include<map>
#include<string>
using namespace std;

int map_show()
{
	cout << "map_show" << endl;
	map<int, string> mymap;

	mymap.insert(make_pair(5, "example "));
	mymap.insert(make_pair(1, "this "));
	mymap.insert(make_pair(3, "a "));
	mymap.insert(make_pair(4, "map "));
	mymap.insert(make_pair(2, "is "));

	for (int i = 0; i < mymap.size(); i++) {
		cout << mymap[i];
	}
	cout << endl;

	map<int, string>::iterator it;
	for (it = mymap.begin(); it != mymap.end(); it++) {
		cout << it->second;
	}
	cout << endl;

	map<int, string>::reverse_iterator r_it;
	for (r_it = mymap.rbegin(); r_it != mymap.rend(); r_it++) {
		cout << r_it->second;
	}
	cout << endl;
	return 0;
}

int multimap_show()
{
	cout << "multimap_show" << endl;
	multimap<int, string> mymap;

	mymap.insert(make_pair(5, "example "));
	mymap.insert(make_pair(1, "this "));
	mymap.insert(make_pair(3, "a "));
	mymap.insert(make_pair(4, "map "));
	mymap.insert(make_pair(1, "is "));

	map<int, string>::iterator it;
	for (it = mymap.begin(); it != mymap.end(); it++) {
		cout << it->second;
	}
	cout << endl;

	map<int, string>::reverse_iterator r_it;
	for (r_it = mymap.rbegin(); r_it != mymap.rend(); r_it++) {
		cout << r_it->second;
	}
	cout << endl;
	return 0;
}