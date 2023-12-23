#include <iostream>
using namespace std;

struct Node{
	Node(){
		cout << "Node cs" << endl;
	}
	~Node(){
	cout << "Node cs" << endl;
	}
};

Node *createNode(){

	Node *newNode = new Node();
	return newNode;
}

struct WidgetPrivate
{
	WidgetPrivate(){
		cout << "WidgetPrivate cs" << endl;
	}
	~WidgetPrivate(){
		cout << "WidgetPrivate cs" << endl;
	}
};

struct Hash{

	Hash(){
		cout << "hash cs" << endl;
	}
	~Hash(){
		cout << "hash ds" << endl;
	}

	void operator[](){
		return createNode();
	}

};


int main(){
	return 0;
}