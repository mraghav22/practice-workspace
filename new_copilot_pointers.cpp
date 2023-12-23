#include <iostream>
#include <memory>

class MyClass {
public:
	MyClass() {
		std::cout << "MyClass constructor called" << std::endl;
	}

	~MyClass() {
		std::cout << "MyClass destructor called" << std::endl;
	}

	void doSomething() {
		std::cout << "Doing something..." << std::endl;
	}
};



int main() {
	std::cout << "Creating a smart pointer to MyClass..." << std::endl;
	std::unique_ptr<MyClass> myClassPtr = std::make_unique<MyClass>();

	std::cout << "Calling a member function using the smart pointer..." << std::endl;
	myClassPtr->doSomething();

	std::cout << "Exiting the program..." << std::endl;
	return 0;
}
