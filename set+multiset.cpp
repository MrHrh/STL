#include<iostream>
#include<set>
using namespace std;

int set_show()
{
	cout << "set_show" << endl;
	set<int> i_set;
	i_set.insert(9);
	i_set.insert(0);
	i_set.insert(6);
	i_set.insert(8);
	i_set.insert(2);
	i_set.insert(7);
	i_set.insert(3);
	i_set.insert(1);
	i_set.insert(5);
	i_set.insert(4);

	set<int>::iterator it;
	for (it = i_set.begin(); it != i_set.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	set<int>::reverse_iterator r_it;
	for (r_it = i_set.rbegin(); r_it != i_set.rend(); r_it++) {
		cout << *r_it << " ";
	}
	cout << endl;
	return 0;
}

int multiset_show()
{
	cout << "multiset_show" << endl;
	multiset<int> m_set;
	m_set.insert(9);
	m_set.insert(6);
	m_set.insert(1);
	m_set.insert(4);
	m_set.insert(4);
	m_set.insert(9);
	m_set.insert(5);
	m_set.insert(3);
	m_set.insert(1);
	m_set.insert(0);

	multiset<int>::iterator it;
	for (it = m_set.begin(); it != m_set.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	multiset<int>::reverse_iterator r_it;
	for (r_it = m_set.rbegin(); r_it != m_set.rend(); r_it++) {
		cout << *r_it << " ";
	}
	cout << endl;

	return 0;
}