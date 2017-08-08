#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void ResizeArray(){

    //Resizing the Array using Malloc and Realloc..

    int size;
    int * array;

    array = (int * ) malloc(size * sizeof(int));
    printf("Input the size of array ");
    scanf("%d", &size);


    for(int i = 0; i < size; i++){
        printf("Elements - %d \n", i);
        scanf("%d", &array[i]);
    }

    printf("Printed out the Array...\n");

    for(int i = 0; i < size; i++){
        printf("%d \t", array[i]);
    }


    array = (int * )  realloc(array, size+1 * sizeof (int));

    printf("\nInsert a new Value to the Array: \n");
    scanf("%d", &array[size]);


    printf("Printing out the resized Array ...\n");

    for(int i = 0; i < size+1; i++){
        printf("%d \t", array[i]);
    }

}




int main() {

    ResizeArray();

    return 0;
}