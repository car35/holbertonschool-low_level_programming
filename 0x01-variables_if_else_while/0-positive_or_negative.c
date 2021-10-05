#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**

 * main - Imprime nmumero positivos, zero y negativos

 *

 * Return: siempre retorna 

 */

int main(void)
  
{
  
  int n;

  
  srand(time(0));
  
  n = rand() - RAND_MAX / 2;
  

  if (n > 0)
    
    {
      
      printf(n,"%d es positivo\n");
      
    }
  
  else if (n == 0)
    
    {
      
      printf(n,"%d Cero\n");
      
    }
  
  else
    
    {
      
      printf(n,"%d es negativo\n");
      
    }
   
  return (0);
  
}
