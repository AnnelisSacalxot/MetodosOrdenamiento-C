#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CLASS_SIZE 62


//funciones
void insertion_sort(char arrayC[]);


int main()
{
  //Tiempo de ejecucion
  for (int a = 0; a < 0x7FFFFFFF; a++);

    int ticks = clock();
    printf("Tiempo de ejecución en segundos es: %f\n", (float)ticks / CLOCKS_PER_SEC);
  
// inicializando mi arreglo de char
 char * s_caracteres[CLASS_SIZE];
 char arrayC[CLASS_SIZE] = {'a','s','d','f','g','h','j','k','l','p','o','i','u','y','t','r','e','w','q','L','K','J','H','G','F','D','S','A','z','x','c','v','b','n','m','M','N','B','V','C','X','Z','1','Q','2','W','3','E','4','R','5','T','6','Y','7','U','8','I','9','O','0','P'};
  insertion_sort(arrayC);
  for (int i = 0; i < CLASS_SIZE; i++){
        printf("%c = %c\n", i, arrayC[i]);
  }

  return 0;
}

void insertion_sort(char arrayC[])
{

    //evalua toda la matriz
  for (int i = 1; i < CLASS_SIZE; i++)
  {
  //ordenar
    int key = arrayC[i];
    int j = i - 1;
    while (j >= 0 && arrayC[j] > key)
    {
      arrayC[j + 1] = arrayC[j];
      j = j - 1;
    }
    arrayC[j + 1] = key;
  }
}
