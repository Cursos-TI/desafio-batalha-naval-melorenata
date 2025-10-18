#include <stdio.h>

int main()
{
    int i,j;
    char linha[10]={'A','B','C','D','E','F','G','H','I','J'};
    int coluna[10]= {1,2,3,4,5,6,7,8,9,10};
    // declara o tabuleiro 0s são água
    int tabuleiro[10][10] = {{0,0,0,0,0,0,0,0,0,0},
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
    
    // navio 1
    tabuleiro[0][6] = 3;
    tabuleiro[0][7] = 3;
    tabuleiro[0][8] = 3;
    
    //navio 2
    tabuleiro[3][2] = 3;
    tabuleiro[4][2] = 3;
    tabuleiro[5][2] = 3;

    // loop para navio na diagonal primaria
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(i==j){
                if(i>2 && i<6){
                tabuleiro[i][i]=3;
                tabuleiro[i][i]=3;
                tabuleiro[i][i]=3;
                }
            }
        }
    }

    //loop para navio na diagonal secundária
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(i==j){
                if(i>0 && i<4){
                tabuleiro[i][9-j]=3;
                }
            }
            
        }
    }


    // imprimir o tabuleiro com os navios
    printf("Tabuleiro Batalha Naval\n\n");
    printf("  ");
    for(j=0;j<10;j++)
            printf("%c ", linha[j]);
    printf("\n");
    for(i=0;i<10;i++){
        printf("%d ", coluna[i]);
        
        for(j=0;j<10;j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    

    return 0;
}
