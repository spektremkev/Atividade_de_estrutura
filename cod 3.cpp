#include <stdio.h>
#include <iostream>

//altere o pre-prossesador para facilitar os testes do codigo 
//altere para o valor desejado depois 
#define MAX  3
#define MAX1 30 

typedef struct
{
    char name[MAX1];
    int code, clas;// variaveis estava com nome de palavra reservadas alteradas 
    float avOne, avTwo, rate;
    
}Student;

int main()
{

    Student student[MAX];
    int v, clas;
    float rateMax;

    for(v=0; v < MAX; v++){
        std::cout <<"Codigo: ";
            scanf("%d", &student[v].code);

        std::cout <<"Nome: ";
            scanf("%s", &student[v].name[MAX1]);

        std::cout <<"Turma: ";
            scanf("%d", &student[v].clas);

        std::cout <<"Nota 1: ";
            scanf("%f", &student[v].avOne);

        std::cout <<"Nota 2: ";
            scanf("%f", &student[v].avTwo);

        student[v].rate = student[v].avOne + student[v].avTwo / 2;

        if(student[v].rate > rateMax){
            rateMax = student[v].rate;
            clas = student[v].clas;
        }
        printf("\n");
    }
    //system('claer'); sem função

    for(v=0; v < MAX; v++)
    {
        printf("Codigo: %d\n", student[v].code);

        printf("Nome: %s\n", student[v].name);

        printf("Turma: %d\n", student[v].clas);

        printf("Media: %2.f\n", student[v].rate);
    }

    printf("A maior media eh da Turma %d com a media %2.f\n", clas, rateMax);

}
