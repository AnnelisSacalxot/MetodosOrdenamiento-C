#include <stdio.h>
#include <stdlib.h>
#define CLASS_SIZE 28

/*
gcc metodos.c -o metodosFuncional
./metodosFuncional
*/


//declarando funcion
void menu();
void bubbleSort(const char a[], char * b[]);
void selectionSort();
void insertionSort();
void quickSort();
void salir();

int main(void){

menu();

//burbuja
int i, j;

    // inicializo el array de char
    char * s_caracteres[CLASS_SIZE];
    char arrayC[CLASS_SIZE] = {'a','s','d','f','g','h','j','k','l','p','o','i','u','y','t','r','e','w','q','L','K','J','H','G','F','D','S','A'};
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

void menu(){
    int operacion;
    
        /* code */
       while (operacion != 5)
       {
        /* code */
        printf("\n Elija una de las siguientes ordenamientos \n");
        printf("1. Bubble-sort\n");
        printf("2. Selection-sort \n");
        printf("3. Insertion-sort \n");
        printf("4. Quicksort \n");
        printf("5. Salir \n");
        scanf("%i", &operacion);

//condicional donde llamare mis funciones
    switch (operacion)
    {
    case 1:
        bubbleSort(char a[], char *b[]);
        break;
    case 2:
        selectionSort();
        break;
    case 3:
        insertionSort();
        break;
    case 4:
        quickSort();
        break;    
    case 5:
        salir();
    break;                                
    default:
        printf("No existe la opcion");
        break;
            }
       }
}

//codigo 

//bubbleSort

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
//selectionSort

void selectionSort(){

}

//insertionSort

void insertionSort(){

} 

//quicksort

void quickSort(){

}

//salir

void salir(){
     exit;
}