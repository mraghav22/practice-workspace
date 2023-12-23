#include <iostream>
using namespace std;

class mystring
{
	char *buf{nullptr};
	unsigned int size{0};
public:
	mystring() : buf(nullptr), size(0) {}
};
mystring::mystring(const char *str)
{
	size = strlen(str);
	buf = new char[size + 1];
	stncpy(buf, size + 1, str);
}

mystring::mystring(const mystring &obj)
{
	this.size = obj.size;
	buf = new char[size + 1];
	stncpy(buf, size + 1, obj);
}
mystring::operator=(const mystring &obj)
{
	this.size = obj.size;
	buf = new char[size + 1];
	stncpy(buf, size + 1, obj);
	return *this;
}

int main()
{
	mystring m("hi");
	cout << m;
	return 0;
}