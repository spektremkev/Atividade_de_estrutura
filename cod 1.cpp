#include <stdio.h>
#define MAX 50

typedef struct{
    char name[30];
    int code, clas;
    float avOne, avTwo, rate;
}Student;

int main(){
    Student student[MAX];
    int v, clas;
    float rateMax;

    for(v=0; v<=MAX; v++){
        printf("Codigo: ");
        scanf("%d", &student[v].code);
        printf("Nome: ");
        scanf("%s", &student[v].name[30]);
        printf("Turma: ");
        scanf("%d", &student[v].clas);
        printf("Nota 1: ");
        scanf("%f", &student[v].avOne);
        printf("Nota 2: ");
        scanf("%f", &student[v].avTwo);

        student[v].rate = student[v].avOne + student[v].avTwo / 2;

        if(student[v].rate > rateMax){
            rateMax = student[v].rate;
            clas = student[v].clas;
        }
        printf("\n");
    }
    //system();

    for(v=0; v<=MAX; v++){
        printf("Codigo: %d\n", student[v].code);
        printf("Nome: %s\n", student[v].name);
        printf("Turma: %d\n", student[v].clas);
        printf("Media: %2.f\n", student[v].rate);
    }
    printf("A maior media eh da Turma %d com a media %2.f\n", clas, rateMax);
}
