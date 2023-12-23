#include <iostream>
#include <vector>
#include <mutex>
#include <thread>
#include <string>
#include <mutex>

std::mutex m;
class Fctor
{
public:
	void operator()()
	{
		for (int i = 0; i < 100; i++)
		{
			std::lock_guard<std::mutex> guard(m);
			std::cout << "From t1:" << i << std::endl;
			m.unlock();
		}
	}
};
int main()
{
	std::vector<std::jthread> my_threads;
	for (int i = 0; i < 1; i++)
	{
		my_threads.emplace_back(Fctor());
	}
	for (int i = 100; i < 200; i++)
		std::cout << "From main:" << i << std::endl;
	return 0;
}