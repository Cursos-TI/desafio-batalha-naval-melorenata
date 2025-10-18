#include <stdio.h>

#define N 10 // como a matriz é quadratica basta um valor de N

int main()
{
    int i,j;
    char linha[10]={'A','B','C','D','E','F','G','H','I','J'};
    int coluna[10]= {1,2,3,4,5,6,7,8,9,10};
    int valor = 5; //valor para figuras
    int centro = 7; // coluna central do cone
    int altura = 3; // número de linhas do cone
    
    // declara o tabuleiro 0s são água
    int tabuleiro[N][N] = {{0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };
    
    // loop para habilidade de cone
    for (i = 0; i < altura; i++) {
        for (j = centro - i; j <= centro + i; j++) {
            tabuleiro[2 + i][j] = valor; // começa na linha 2 e vai aumentando
        }
    }
   
    // loop para habilidade de cruz
    for(i=0;i<3;i++){
        for(j=1;j<6;j++){
            if(j==3 || i==1){
            tabuleiro[i][j]=valor;
            }
        }
    }
    
     // loop para habilidade em octaedro
    for(i=4;i<7;i++){
        for(j=2;j<5;j++){
            if(j==3 || i==5){
            tabuleiro[i][j]=valor;
            }
        }
    }
    
    //exibe o tabuleiro com as ações
    printf("Tabuleiro Batalha Naval\n\n");
    printf("  ");
    for(j=0;j<N;j++)
            printf("%c ", linha[j]);
    printf("\n");
    for(i=0;i<N;i++){
        printf("%d ", coluna[i]);
        
        for(j=0;j<N;j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    

    return 0;
}
