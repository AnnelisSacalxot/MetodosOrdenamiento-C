#include <stdio.h>
#include <stdlib.h>

/*
gcc metodos.c -o metodosFuncional
./metodosFuncional
*/


//declarando funcion
void menu();
void bubbleSort();
void selectionSort();
void insertionSort();
void quickSort();
void salir();

int main(){

menu();
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
        bubbleSort();
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

void bubbleSort(){

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