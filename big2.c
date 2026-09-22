#include <stdio.h>
biggest()
{
     int num1, num2;
     printf("Please enter two different values \n");
     scanf("%d %d", &num1, &num2);
     if(num1 > num2)
     {
	     printf("%d is largst\n", num1);
     }
     else if(num2 > num1)
     {
	     printf("%d is largest\n", num2);
     }	     
     else
     {
	     printf("Both are equal\n");
     }
}     
