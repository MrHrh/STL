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

	//���鷽ʽ����
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << " ";
	}
	cout << endl;

	//�������������
	vector<int>::iterator it;
	for (it = vec.begin(); it != vec.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	//�������������
	vector<int>::reverse_iterator r_it;
	for (r_it = vec.rbegin(); r_it != vec.rend(); r_it++) {
		cout << *r_it << " ";
	}
	cout << endl;
	return 0;
}