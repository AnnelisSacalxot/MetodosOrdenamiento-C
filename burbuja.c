#define CLASS_SIZE 62
#include <stdio.h>

//funciones
void bubbleSort(const char a[], char * b[]);

int main(void){
    int i, j;

    // inicializo el array de char
    char * s_caracteres[CLASS_SIZE];
    char arrayC[CLASS_SIZE] = {'a','s','d','f','g','h','j','k','l','p','o','i','u','y','t','r','e','w','q','L','K','J','H','G','F','D','S','A','z','x','c','v','b','n','m','M','N','B','V','C','X','Z','1','Q','2','W','3','E','4','R','5','T','6','Y','7','U','8','I','9','O','0','P'};
    // llamo a mi metodo
    bubbleSort(arrayC,s_caracteres);

    // imprimipendo el orden del principio
    printf("Lista desordenada: \n");
    for (i=0;i<CLASS_SIZE;i++){
         printf("%c\n", arrayC[i]);
    }

    // imprimipendo el orden final
    printf("Lista ordenada: \n");
    for (i=0;i<CLASS_SIZE;j++){
        printf("%c\n", *s_caracteres[j]);
    }

    return 0;
}

void bubbleSort(const char a[], char * b[]){
    char * temporal;
    int i,j;

    for (i=0;i<CLASS_SIZE;i++){
        b[i] = (char *)(a) + i;
    }

    // ordenando
    for(i=0;i<CLASS_SIZE;i++){
        for(j=i+1;j<CLASS_SIZE-1;j++){
            if(*b[j-1]>*b[j]){
                temporal = b[j];
                b[j] = b[j-1];
                b[j-1] = temporal;
            }
        }   
    }
}