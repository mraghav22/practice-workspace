#include <stdio.h>
#include <string.h>

int i = 100;
void fun()
{
	i++;
	printf("%d\n", i);
}

int main()
{
	static int i = 10;
	i++;
	fun();
	printf("%d\n", i);
}