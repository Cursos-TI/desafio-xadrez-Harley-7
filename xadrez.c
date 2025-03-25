#include <stdio.h>

int main() {
    //variáveis que serão usadas como condição para as estruturas de repetição
    int movimentos_da_torre = 1; //Torre 
    int movimentos_do_bispo = 1; //Bispo
    int movimentos_da_rainha =1; //Rainha

    //Estrutura de repetição while reposável pelos movimentos da Torre
    while(movimentos_da_torre <= 5){

        //Estrutura condicional para caso seja apenas um movimento a ação fique no singular caso seja mais de um será no plural
        if(movimentos_da_torre == 1){
            printf("movimento feito pela Torre: %d casa para a direita\n", movimentos_da_torre);
            movimentos_da_torre++;
        }else{
            printf("movimento feito pela Torre: %d casas para a direita\n", movimentos_da_torre);
            movimentos_da_torre++;
        }
        
    }

    printf("\n");

    //Estrutura de repetição do-while resposável pelos movimetos do Bispo
    do{

       //Estrutura condicional para caso seja apenas um movimento a ação fique no singular caso seja mais de um será no plural
       if(movimentos_do_bispo == 1){
            printf("movimento feito pelo Bispo: %d casa para cima direita\n", movimentos_do_bispo);
            movimentos_do_bispo++;
       }else{
            printf("movimento feito pelo Bispo: %d casas para cima direita\n", movimentos_do_bispo);
            movimentos_do_bispo++;
       } 

    }while (movimentos_do_bispo <= 5);

    printf("\n");

    //
    for ( movimentos_da_rainha; movimentos_da_rainha <= 8; movimentos_da_rainha++)
    {
        //Estrutura condicional para caso seja apenas um movimento a ação fique no singular caso seja mais de um será no plural
        if(movimentos_da_rainha == 1){
            printf("movimento feito pela Rainha: %d casa para esquerda\n", movimentos_da_rainha);
        }else{
            printf("movimento feito pela Rainha: %d casas para esquerda\n", movimentos_da_rainha);
        }    
    }
    
    printf("\n");

    return 0;
}
