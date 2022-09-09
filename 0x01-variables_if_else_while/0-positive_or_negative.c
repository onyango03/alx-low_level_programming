#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/* more headers goes there */

/*

 *this program will print is positive if number is greater than o

 *it will print is negative if n is less than 0

 *it will print zero if n is equal to 0\

 *it will return 0

 */



/* betty style doc for function main goes there */

int main(void)
  
{
  
  int n;
  

  
  srand(time(0));
  
  n = rand() - RAND_MAX / 2;
  
  /* your code goes there */
  
  if (n > 0)
    
    {
      
      printf("i% is positive\n", n);
      
    }
  
  else if (n == 0)
    
    {
      
      printf("i% zero", n);
      
    }
  
  else if (n < 0)
    
    {
      
      printf("i% is negative\n", n);
      
    }
  
  return (0)
    
    }
