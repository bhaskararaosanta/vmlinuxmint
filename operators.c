#include<stdio.h>

int main()
{
	int i = 5;
	//printf("%d\n", i+++++i); it will not work as lvalue required error
	printf("%d\n", i++ + ++i);
	return 0;
}
