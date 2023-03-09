#include <stdio.h>
#define CLASS_SIZE 62

int main()
{
  // inicializando mi arreglo de char
 char * s_caracteres[CLASS_SIZE];
 char arrayC[CLASS_SIZE] = {'a','s','d','f','g','h','j','k','l','p','o','i','u','y','t','r','e','w','q','L','K','J','H','G','F','D','S','A','z','x','c','v','b','n','m','M','N','B','V','C','X','Z','1','Q','2','W','3','E','4','R','5','T','6','Y','7','U','8','I','9','O','0','P'};

  for (int i = 0; i < CLASS_SIZE - 1; i++)
  {
    // haciendo la comparacion de ordenar del elemento minimo 
    int min_pos = i;
    for (int j = i + 1; j < CLASS_SIZE; j++)
      if (arrayC[j] > arrayC[min_pos]) min_pos = j;
    
    //compara el elemento y si no es, entonces siguiente
    if (min_pos != i)
    {
      int temp = arrayC[i];
      arrayC[i] = arrayC[min_pos];
      arrayC[min_pos] = temp;
    }
  }
  
//imprimir en orden
  for (int i = 0; i < CLASS_SIZE; i++){
    printf("%c\n", arrayC[i]);
  }
  
  return 0;
}