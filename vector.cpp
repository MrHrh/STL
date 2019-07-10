#include<iostream>
#include<vector>
using namespace std;

int vector_show()
{
	cout << "vector_show" << endl;
	vector<int> vec;
	for (int i = 0; i < 10; i++) {
		vec.push_back(i);
	}

	//数组方式遍历
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
	cout << endl;

	//正向迭代器遍历
	vector<int>::iterator it;
	for (it = vec.begin(); it != vec.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	//反向迭代器遍历
	vector<int>::reverse_iterator r_it;
	for (r_it = vec.rbegin(); r_it != vec.rend(); r_it++) {
		cout << *r_it << " ";
	}
	cout << endl;
	return 0;
}