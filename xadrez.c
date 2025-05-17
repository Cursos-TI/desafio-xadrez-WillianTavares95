# include <stdio.h>

void movimento () {

    int opcao, opcao1;
    int torre = 5;
    int bispo = 8;
    int rainha = 10;
    int cavalo = 1;

    printf("BEM VINDO(A) JOGO DE XADREZ: \n");
    printf("ESCOLHA A PEÇAS A SER MOVIMENTADA \n");

    printf("PARA TORRE  APERTE [1] \n");
    printf("PARA BISPO  APERTE [2] \n");
    printf("PARA RAINHA APERTE [3] \n");
    printf("PARA CAVALO APERTE [4] \n");

    scanf("%d", &opcao);


switch (opcao)
{
case 1:
    //interação com usuarios
    printf("ESCOLHA A DIREÇÃO :  \n");

    printf("PARA  CIMA     [1]:  \n");
    printf("PARA  BAIXO    [2]:  \n");
    printf("PARA  ESQUERDA [3]:  \n");
    printf("PARA  DIREITA  [4]:  \n");
    
    scanf("%d", &opcao1);
    //Loops

    for (int i = 0; i < torre; i++){

        if (opcao1 == 1){
            printf("TORRE MOVE-SE PARA CIMA: \n");

        }else if(opcao1 == 2){
            printf("TORRE MOVE-SE PARA BAIXO: \n");

        }else if (opcao1 == 3){
            printf("TORRE MOVE-SE PARA ESQUERDA: \n");

        }else if (opcao1 == 4){
            printf("TORRE MOVE-SE PARA DIREITA: \n");

        }else {
            printf("OPÇÃO ERRADA!\n");
        }
                
    }
    break;

case 2:
    printf("ESCOLHA A DIREÇÃO :  \n");

    printf("PARA  DIAGONAL DIREITA FRENTE:  [1] \n");
    printf("PARA  DIAGONAL ESQUERDA FRENTE: [2] \n");
    printf("PARA  DIAGONAL DIREITA BAIXO:   [3] \n");
    printf("PARA  DIAGONAL ESQUERDA BAIXO:  [4] \n");
    
    scanf("%d", &opcao1);
    //Loops

    for (int i = 0; i < bispo; i++){

        if (opcao1 == 1){
            printf("DIAGONAL DIREITA FRENTE: \n");

        }else if(opcao1 == 2){
            printf("DIAGONAL ESQUERDA FRENTE: \n");

        }else if (opcao1 == 3){
            printf("DIAGONAL DIREITA BAIXO: \n");

        }else if (opcao1 == 4){
            printf("DIAGONAL ESQUERDA BAIXO: \n");

        }else {
            printf("OPÇÃO ERRADA!\n");
        }
                
    }
    break;

case 3:
    //interação com usuarios
    printf("ESCOLHA A DIREÇÃO :  \n");

    printf("PARA  CIMA     [1]:  \n");
    printf("PARA  BAIXO    [2]:  \n");
    printf("PARA  ESQUERDA [3]:  \n");
    printf("PARA  DIREITA  [4]:  \n");
    
    scanf("%d", &opcao1);
    //Loops

    for (int i = 0; i < rainha; i++){

        if (opcao1 == 1){
            printf("RAINHA MOVE-SE PARA CIMA: \n");

        }else if(opcao1 == 2){
            printf("RAINHA MOVE-SE PARA BAIXO: \n");

        }else if (opcao1 == 3){
            printf("RAINHA MOVE-SE PARA ESQUERDA: \n");

        }else if (opcao1 == 4){
            printf("RAINHA MOVE-SE PARA DIREITA: \n");

        }else {
            printf("OPÇÃO ERRADA!\n");
        }
                
    }
    break;
case 4:
    //interação com usuarios
    printf("ESCOLHA A DIREÇÃO :  \n");

    printf("PARA  CIMA DIREITA     [1]:  \n");
    printf("PARA  CIMA ESQUERDA    [2]:  \n");
    printf("PARA  BAIXO DIREITA    [3]:  \n");
    printf("PARA  BAIXO ESQUERDA   [4]:  \n");
    
    scanf("%d", &opcao1);
    //Loops

    for (int i = 0; i < cavalo; i++){

        if (opcao1 == 1){
            printf("CAVALO MOVE-SE PARA CIMA:     \n"); 
            printf("CAVALO MOVE-SE PARA CIMA:      \n"); 
            printf("CAVALO MOVE-SE PARA DIREITA:   \n");

        }else if(opcao1 == 2){
            printf("CAVALO MOVE-SE PARA CIMA:     \n"); 
            printf("CAVALO MOVE-SE PARA CIMA:      \n"); 
            printf("CAVALO MOVE-SE PARA ESQUERDA:   \n");

        }else if (opcao1 == 3){
            printf("CAVALO MOVE-SE PARA BAIXO:    \n"); 
            printf("CAVALO MOVE-SE PARA CIMA:     \n"); 
            printf("CAVALO MOVE-SE PARA DIREITA: \n");

        }else if (opcao1 == 4){
            printf("CAVALO MOVE-SE PARA BAIXO:     \n"); 
            printf("CAVALO MOVE-SE PARA BAIXO:      \n"); 
            printf("CAVALO MOVE-SE PARA ESQUERDA:   \n");

        }else {
            printf("OPÇÃO ERRADA!\n");
        }
                
    }
    break;




}   

   
}

int main () {
        movimento();


return 0;
}