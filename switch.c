#include<stdio.h>

int main()
{
	int i = 1, j = 2;
	
	switch(i)
	{
		case 1: printf("Good programmming practice\n");
			break;

		//case j: printf("Bad programming practice\n"); 
		/* case value can't be variable and it has to be constant */

		case 2:	printf("Bad programming practice\n");
			break;
	}

	return 0;
}
