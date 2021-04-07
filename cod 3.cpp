#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 

#include <time.h>

#define imp 5
#define ar 50
#define ate 25

main() {
            char equipe();

  int randomico[ar]; 

  srand(time(NULL)); 

  int cont1, cont2, testeVF, nume;
  
            
  for (cont1 = 0; cont1 < ate; cont1++) {

    do {
      testeVF = 0; 
      nume = rand() % 99 +1;

      for (cont2 = 0; cont2 < ate ; cont2++)
        if (nume == randomico[cont2])
          testeVF = 1; 

    } while (testeVF);

    randomico[cont1] = nume;

  }
  
  printf("[---Sua cartela----]\n");  
  
for (cont1 = 0; cont1 < imp ; cont1++){
  for (cont2 = 0; cont2 < imp ; cont2++){
         
        printf("[%d]",randomico[cont2]);
      }
       printf("\n");
	}
	 printf("\n");
	 
        return 0;
}
