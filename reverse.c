#include <stdio.h>
#include <string.h>

void reverse(char *str)
{
	int length = strlen(str);
	for (int i = 0; i < length / 2; i++)
	{
		char temp = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = temp;
	}
}

void recurse_reverse(char *str, int length)
{
	if(length <= 1)return;

	char temp = str[0];
	str[0] = str[length - 1];
	str[length-1] = temp;
	recurse_reverse(str+1,length-2);
}

int main()
{
	char str[] = "hello\0";
	printf("Original String: %s\n", str);
	reverse(str);
	printf("Normal Solution: %s\n", str);
	recurse_reverse(str, strlen(str));
	printf("Recurse Solution: %s", str);
}