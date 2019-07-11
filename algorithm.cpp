#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;

int stl_sort()
{
	cout << "stl_sort" << endl;
	vector<int> vec;
	srand((int)time(0));
	for (int i = 0; i < 10; i++) {
		vec.push_back(rand() % 100);
	}

	vector<int>::iterator it;
	for (it = vec.begin(); it != vec.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	sort(vec.begin(), vec.end());
	for (it = vec.begin(); it != vec.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	
	return 0;
}

int stl_reverse()
{
	cout << "stl_reverse" << endl;
	vector<int> vec;
	for (int i = 0; i < 10; i++) {
		vec.push_back(i);
	}
	vector<int>::iterator it;
	for (it = vec.begin(); it != vec.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	reverse(vec.begin(), vec.end());

	for (it = vec.begin(); it != vec.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
	return 0;
}

int stl_max_min()
{
	cout << "stl_max_min" << endl;
	vector<int> vec;
	for (int i = 0; i < 10; i++) {
		vec.push_back(i);
	}

	vector<int>::iterator it;
	for (it = vec.begin(); it != vec.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	it = min_element(vec.begin(), vec.end());
	cout << "min: " << *it << endl;

	it = max_element(vec.begin(), vec.end());
	cout << "max: " << *it << endl;

	return 0;
}