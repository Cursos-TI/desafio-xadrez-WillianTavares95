#include <stdio.h>

int main () {
    // bispo frente direta ou esquerda
    //rainha qualquer lado
    //torre vertical ou horizontal


    int i = 1;
    int j = 1;

   do
   {

    printf("Bispo frente direita \n");
    i++;

   } while (i <= 5);
   

   for (int i = 0; i <= 7; i++)
   printf("Rainha frente \n");


   while (j <= 5)
   
   {
    printf("Torre esquerda \n");
    j ++;
   }
   


  for (int i = 0; i < 1; i++) 
    {
        for (int j = 0; j <= 1; j++)
            printf("Cima \n");
        
    printf(" Esquerda \n");        
       
    }
    
    

    return 0;
}

