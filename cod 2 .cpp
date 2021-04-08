#include <stdio.h>
#include <conio.h>

#define l 3
#define c 5

int main()
{
//Defini��o de variaveis   
int i, j ;    

float matrizA[l][c],matrizB[l][c],matrizC[l][c];

        for(i=0; i<l; i++)
        {
                for(j=0; j<c; j++)
                { 
                        printf("Digite os valores: ");  
                        scanf("%f", &matrizA[i][j]);
                }
        }
          
printf("------------ Matriz Gerada -----------\n");
        for(i=0; i<l; i++)
        {
                for(j=0; j<c; j++)
                {
                        printf("%6.f", matrizA[i][j]);                    
                }
                        printf("\n");
        }

}



