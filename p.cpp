#include <iostream>
using namespace std;

struct Mystring
{
	string s;
	Mystring(string s1): s(s1){}

	Mystring(const Mystring &s2){
		cout<<"copy constructing\n";
		s = s2.s;}
};

Mystring rv(){
	Mystring ms("Hi");
	return ms;
}

Mystring no_rv(int c){
	Mystring ms1("Hello");
	Mystring ms2("Bye");
	if(c == 1)
		return ms1;
	else
		return ms2;
}


int main()
{
	Mystring s1 = rv();
	cout<<s1.s<<endl;
	Mystring s2 = no_rv(1);
	cout<<s2.s;
	return 0;
}