#include<iostream>
#include<deque>
using namespace std;

int deque_show()
{
	cout << "deque_show" << endl;
	deque<int> deq;
	for (int i = 0; i < 10; i++) {
		deq.push_front(i);
	}

	//数组方式遍历
	for(int i = 0; i < deq.size(); i++){
		cout << deq[i] << " ";
	}
	cout << endl;

	//迭代器遍历
	deque<int>::iterator it;
	for (it = deq.begin(); it != deq.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	//反向迭代器遍历
	deque<int>::reverse_iterator r_it;
	for (r_it = deq.rbegin(); r_it != deq.rend(); r_it++) {
		cout << *r_it << " ";
	}
	cout << endl;

	return 0;
}