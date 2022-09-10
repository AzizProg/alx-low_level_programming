#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
	    int n;
	        srand(time());
		    n = rand() - RAND_MAX / 2;
		        if (n > 0)
			{					           
			       	printf("%d is positive\n", n);
		       	}
		       	else
			{
				if (n == 0)
				{
					printf("%d is zero\n", n);
				}
				else
				{
					if (n < 0)
					{
						printf("%d negative\n", n);
					}
				}
			}
			return (0);
}
