#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 /**
 * main - Positive anything is better than negative nothing
 * Description: This program will assign a random number to the variable n each time it is executed
 * Return: 0
 */


 intmain(void) 
 { 
         int n; 
  
         srand(time(0)); 
         n = rand() - RAND_MAX / 2; 
         /* your code goes there */ 
         if (n>0)
          printf ("%d is positive\n", n)
         else if (n==0)
          printf ("%d is zero\n", n)
         else
          printf ("%d is negative\n", n)
         return (0); 
 }
