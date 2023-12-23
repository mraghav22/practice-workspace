#include <iostream>
#include <vector>
using namespace std;

struct S
{
	S()
	{
		cout << "Constructor\n";
	}
	S(const S &s)
	{
		cout << "Copy Constructor\n";
	}
	S(S &&s)
	{
		cout << "Move Constructor\n";
	}
	void display(){
		cout << "Displaying...!\n";
	}
};

int main(void)
{
	S *s = new S();
	s->display();
	vector<S> v;
	v.push_back(move(*s));
	s->display();
	return 0;
}