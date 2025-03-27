#include <stdio.h>


void movimento_torre(int movimentos_da_torre){

    //Estrutura de repetição while responsável pelos movimentos da Torre
    while(movimentos_da_torre >= 1){

            printf("movimento feito pela Torre: direita\n", movimentos_da_torre);
            movimentos_da_torre--;
        
    }

}

void movimento_bispo(int movimentos_do_bispo){

    //Estrutura aninhada com do-while e for responsáveis pelos movimentos do Bispo
    do{
        printf("movimento feito pelo Bispo: cima ");

        for(int i = 5; i >= 1; i--){
            if(movimentos_do_bispo == i){
                printf("direita\n");
                break;
            }
        }

        movimentos_do_bispo--;
    }while(movimentos_do_bispo >= 1);

}

void movimento_rainha(int movimentos_da_rainha){

    //Estrutura de repetição for responsável pelos movimentos da Rainha 
    for( movimentos_da_rainha; movimentos_da_rainha >= 1; movimentos_da_rainha--)
    {
        
            printf("movimento feito pela Rainha: esquerda\n");
        
    }

}

void movimento_cavalo(int movimentos_vertical_cavalo, int movimento_horizontal_cavalo){

    //Estruturas de repetição aninhadas for e while responsáveis pelos movimentos do Cavalo
    for(movimentos_vertical_cavalo; movimentos_vertical_cavalo >= 1; movimentos_vertical_cavalo--){

            printf("movimento feito pelo cavalo: cima\n");
       
        if(movimentos_vertical_cavalo == 1){
            while (movimento_horizontal_cavalo < 2)
            {
                printf("movimento feito pelo cavalo: direita\n"); 
                movimento_horizontal_cavalo++;
            }
        }
    }

}

int main() {
    
    movimento_torre(5);//recursividade da Torre

    printf("\n");

    movimento_bispo(5);//recursividade do Bispo

    printf("\n");

    movimento_rainha(8);//recursividade da Rainha
    
    printf("\n");

    movimento_cavalo(2, 1);//recursividade do Cavalo

    printf("\n");

    return 0;
}
