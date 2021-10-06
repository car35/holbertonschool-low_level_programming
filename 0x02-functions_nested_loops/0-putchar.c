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
                                                                                                                                                                                                
    _putchar(Tx[i]); 
    _putchar("\n");
    _putchar("\n");
                                                                                                                                                                                                
  }                                                                                                                                                                                             
                                                                                                                                                                                                
  return 0;                                                                                                                                                                                     
                                                                                                                                                                                                
}
