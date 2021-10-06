#include "main.h"                                                                                                                                                                               
                                                                                                                                                                                                
                                                                                                                                                                                                
/**                                                                                                                                                                                             
                                                                                                                                                                                                
                                                                                                                                                                                                
 * main -funtion main imprimi la palabra putchar                                                                                                                                                
 *                                                                                                                                                                                              
 * return: devuelve el valor cero siempre                                                                                                                                                       
                                                                                                                                                                                                
 */                                                                                                                                                                                             
                                                                                                                                                                                                
int main(){                                                                                                                                                                                     
                                                                                                                                                                                                
  char Tx[11]="_putchar";                                                                                                                                                                      
                                                                                                                                                                                                
  int i=0;                                                                                                                                                                                      
                                                                                                                                                                                                
  for(i=0;i<11;i++){                                                                                                                                                                             
                                                                                                                                                                                                
    putchar(Tx[i]); 
    putchar("\n");
    putchar("\n");
                                                                                                                                                                                                
  }                                                                                                                                                                                             
                                                                                                                                                                                                
  return 0;                                                                                                                                                                                     
                                                                                                                                                                                                
}
