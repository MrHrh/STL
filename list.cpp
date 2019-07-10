#include<iostream>
#include<list>
using namespace std;

int list_show()
{
	cout << "list_show" << endl;
	list<char> c_list;
	for (char a = 'a'; a <= 'z'; a++) {
		c_list.push_back(a);
	}

	while(!c_list.empty()) {
		cout << c_list.front() << " ";
		c_list.pop_front();
	}
	cout << endl;

	for (char a = 'a'; a <= 'z'; a++) {
		c_list.push_back(a);
	}

	list<char>::iterator it;
	for (it = c_list.begin(); it != c_list.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	list<char>::reverse_iterator r_it;
	for (r_it = c_list.rbegin(); r_it != c_list.rend(); r_it++) {
		cout << *r_it << " ";
	}
	cout << endl;
	return 0;
}
