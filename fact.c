#include <stdio.h>
     factorial()
     {
	 int n, i;
         unsigned long long fact = 1;
         print("Enter an integer: ");
	scanf("%d", &n);
       if(n < 0)
          printf("Error! Fctorial of a negative number doesn't exist.");
       else
       {
	   for(i = 1; i<=n; ++i)
	   {
		   fact *= i;
	   }	   
	   printf("Factorial of %d = %11u", n, fact);

       }   
   // return 0;    
     }	     
