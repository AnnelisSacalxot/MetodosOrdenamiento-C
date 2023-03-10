#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void cambioPuntero(char const **entrada1, char const **entrada2)
{
    const char *tmp = *entrada1;
    *entrada1 = *entrada2;
    *entrada2 = tmp;
}

void quicksort(char const *args[], unsigned int length)
{
    unsigned int i, pivote=0;

    if (length <= 1)
        return;

    // swap a randomly selected value to the last node
    cambioPuntero(args+((unsigned int)rand() % length), args+length-1);

    // reset the pivot index to zero, then scan
    for (i=0;i<length-1;++i)
    {
        if (strcmp(args[i], args[length-1]) < 0)
            cambioPuntero(args+i, args+pivote++);
    }

    // move the pivot value into its place
    cambioPuntero(args+pivote, args+length-1);

    // and invoke on the subsequences. does NOT include the pivot-slot
    quicksort(args, pivote++);
    quicksort(args+pivote, length - pivote);
}

void imprimirLista(char const *args[], unsigned length)
{
    unsigned i=0;
    for (;i<length;++i)
        puts(args[i]);
}

int main()
{

  //Tiempo de ejecucion
  for (int a = 0; a < 0x7FFFFFFF; a++);

    int ticks = clock();
    printf("Tiempo de ejecución en segundos es: %f\n", (float)ticks / CLOCKS_PER_SEC);
  
  //arreglo de mi cadena
    char const *args[] =
    {
       "a","s","d","f", "g","h","j","k","l","p","o","i","u","y","t","r","e","w","q","L","K","J","H","G","F","D","S","A","z","x","c","v","b","n","m","M","N","B","V","C","X","Z","1","Q","2","W","3","E","4","R","5","T","6","Y","7","U","8","I","9","O","0","P"

    };

    srand((unsigned)time(NULL));
    quicksort(args, sizeof(args)/sizeof(*args));
    imprimirLista(args, sizeof(args)/sizeof(*args));
    return 0;
}