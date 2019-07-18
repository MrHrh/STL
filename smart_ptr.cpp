#include<iostream>
#include<memory>
#include<string>
using namespace std;

shared_ptr<string> ret_sps()
{
	return make_shared<string>("abcdefgh");
}

unique_ptr<string> ret_ups()
{
	return unique_ptr<string>(new string("abcdefg"));
}

int main()
{
	cout << "-------------------shared_ptr_demo-----------------------------" << endl;
	shared_ptr<string> sps = make_shared<string>("abcdef");
	cout << *sps<<" use_count: "<<sps.use_count()<< endl;
	(*sps) += "ghijkl";

	shared_ptr<string> sps1(sps);
	cout << *sps1 <<" use_count: "<<sps1.use_count()<< endl;
	
	shared_ptr<string> sps2;
	sps2 = sps1;
	cout << *sps2 << " use_count: " << sps2.use_count() << endl;
	
	sps = ret_sps();
	cout << "sps = ret_sps() sps: " << *sps << endl;
	cout << *sps << " use_count: " << sps.use_count() << endl;
	cout << "-------------------unique_ptr_demo-----------------------------" << endl;
	unique_ptr<string> ups(new string("abcdefg"));
	*ups += "higklm";
	cout <<"ups: "<< *ups << endl;

	unique_ptr<string> ups1(new string("nopqrst"));
	cout << "ups1: " << *ups1 << endl;

	ups1.reset(ups.release());
	cout << "ups1.reset(ups.release()) ups1: " << *ups1 << endl;

	ups = ret_ups();
	cout << "ups = ret_ups() ups: " << *ups << endl;

	cout << "-------------------weak_ptr_demo-----------------------------" << endl;
	weak_ptr<string> wps(sps);
	cout << "weak_ptr<string> wps(sps): use_count: " <<wps.use_count()<< endl;
	if (shared_ptr<string> tmp = wps.lock())
	{
		cout <<"use_count: "<<tmp.use_count() << endl;
		cout << "wps: " << *tmp << endl;

	}
	return 0;
}