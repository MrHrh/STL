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

	//���鷽ʽ����
	for(int i = 0; i < deq.size(); i++){
		cout << deq[i] << " ";
	}
	cout << endl;

	//����������
	deque<int>::iterator it;
	for (it = deq.begin(); it != deq.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	//�������������
	deque<int>::reverse_iterator r_it;
	for (r_it = deq.rbegin(); r_it != deq.rend(); r_it++) {
		cout << *r_it << " ";
	}
	cout << endl;

	return 0;
}