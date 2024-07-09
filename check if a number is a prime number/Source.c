#include<stdio.h>
#include<math.h>
int x, var,flag;
void main(void)
{	
		printf("enter the number\n ");
		scanf_s("%d", &x);
		var = ceil(sqrt(x));
		int i = 2;
		do
		{
			if (x == 1)
			{
				printf("%d is a not prime number\n ",x);
				flag++;
				break;
			}
			if ((x == 2)||(x==3))
			{
				printf("%d is a prime number\n ", x);
				flag++;
				break;
			}
			else
			{
				if (x % i == 0)
				{
					printf("%d is not a prime number since it is divisable by %d\n", x, i);
					flag++;
					break;
				}
				else
				{
					i++;
				}
			}

		} while (i <= var);
		if (flag == 0)
		{
			printf("%d is a prime number\n ", x);
		}
	
}