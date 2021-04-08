#include <stdio.h>
#include <stdlib.h>

#include <iostream>
using namespace std;

#define MAX 2

int main(){
    int matriz[MAX][MAX], maior, soma = 0, aluno_destaque;

   for(int i = 0; i < MAX; i++){
        cout <<"informe a matricula: ";
        scanf("%d",&matriz[i][0]);

        cout <<"informe a AV1: "<< endl;
        scanf("%d",&matriz[i][1]);

        cout <<"informe a AV2: "<< endl;
        scanf("%d",&matriz[i][2]);

        cout <<"Informe a media dos trabalhos: "<< endl;
        scanf("%d",&matriz[i][3]);
    }
    
    system("cls");
    for(int i = 0; i < MAX; i++)
    {

            printf("%d\n",matriz[i][0]);
            printf("%d\n",matriz[i][1]);
            printf("%d\n",matriz[i][2]);
            printf("%d\n",matriz[i][3]);

    }
    for(int i = 0; i < MAX; i++)
    {

        matriz[i][4] = (matriz[i][1] + matriz[i][2]) / 2 + matriz[i][3];
        if(i == 0)
        
            maior = matriz[i][4];
            
        if(matriz[i][4] >= maior)
        {
            aluno_destaque = matriz[i][0];
        }
        soma += matriz[i][4];
    }

    cout <<"matricula di Aluno com maior media: " << aluno_destaque << endl;
    cout <<"Media aritmedica das notas finais: " << soma/5 << endl;

    return 0;
    system("pause");
}
