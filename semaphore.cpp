#include <iostream>
#include <thread>
#include <vector>

int count_me{0};
void counter()
{
	count_me++;
	std::cout << count_me << std::endl;
}
int main(void)
{
	std::vector<std::jthread> my_threads;
	for (int i = 0; i < 2; i++)
		my_threads.emplace_back(counter);
	std::cout << "main exit" << std::endl;
	return 0;
}