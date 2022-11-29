#include <stdio.h>


main() 
{
	int a=0;
		for (int j=5;j<6;j++) 
	{
		for(int i=1; i<11; i++)
		{
			printf("%i*%i=%i\n", j, i, j*i);
		}
		printf("\n\n");
	}
	while(a!=7)
	{
		scanf("%i", &a);
		if(a>7)
		{
			printf("More than 7\n");
		}
		else
		{
			if(a<7)
			{
			printf("Less than 7\n");
			}
		}
		if(a>10)
			{
				printf("More than 10\n");
			}
		else
		{
			if(a<10)
			{
				printf("Less than 10\n");
			}
			if(a==10)
			{
				printf("A = 10\n");
			}
		}
			if(a%2==0)
			{
				printf("Delitsya na 2\n");
			}
			else
			{
				printf("Ne Delitsya na 2\n");
			}
			if(a%3==0)
			{
				printf("Delitsya na 3\n");
			}
			else
			{
				printf("Ne Delitsya na 3\n");
			}
	}
printf("You are correct");

}
























//main() 
//{
//	for (int j=5;j<6;j=j+5) 
//	{
//		for(int i=1; i<11; i++)
//		{
//			printf("%i*%i=%i\n", j, i, j*i);
//		}
//		printf("\n\n");
//	}
//}
