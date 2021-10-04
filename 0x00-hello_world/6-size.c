#include <stdio.h>
/**
  * main - Prints the sizeof many var types
  *
  * Return: Always 0 (Success)
  */
int main(void) 
{
  int h;
  char o;
  float f;
  double l;
   
  printf("Size of int is: %ld\n",sizeof(h));
  printf("Size of char is: %ld\n",sizeof(o));
  printf("Size of float is: %ld\n",sizeof(f));
  printf("Size of double is: %ld\n",sizeof(l));
  
  return 0;
}
