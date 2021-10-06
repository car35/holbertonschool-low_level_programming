 #include <stdio.h>

/**main -funtion main imprimi la palabra putchar 

 *
 * return: devuelve el valor cero siempre

 */


int main(){
   
  char Tx[8]="_putchar\n";
  
  int i=0;
 
  for(i=0;i<8;i++){
    
    putchar(Tx[i]);
      
  }
  
  return 0;
   
}
