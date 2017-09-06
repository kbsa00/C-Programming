#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

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

void ResizeAndChangeIndex(){
    int size = 0;
    int num = 0;
    int index = 0;
    int temp = 0;
    int * array;
    array = (int *) malloc(size * sizeof(int));


    printf("Write the size of the Array: ");
    scanf("%d", &size);

    for(int i = 0; i < size; i++){
        printf("Element %d: ", i);
        scanf("%d", &array[i]);

    }

    printf("\nWrite the number you want to add: ");
    scanf("%d", &num);

    printf("\nWrite the index you want to add it in: ");
    scanf("%d", &index);


    printf("\nThe current list of array: ");

    for(int i = 0; i < size; i++){
        printf("%d", array[i]);

    }

    array = (int *) realloc(array, size+1 * sizeof (int));

    temp = array[index];

    for(int j = size+1; j > index; j--){
            array[j] = array[j-1];
    }
     array[index+1] = temp;
    array[index] = num;
    printf("\n");

    printf("\nArray looks like this after adding: %d in index: %d\n", num, index);

    for(int i = 0; i < size+1; i++){
        printf("%d", array[i]);
    }
}

void mergeAndSortDesc(){
    int size = 0;
    int sum = 0;
    int * array1;
    int array2[size];

    printf("Input the size of the array: ");
    scanf("%d", &size);

    array1 = (int *) malloc(size * sizeof(int));

    printf("\nPlease input %d numbers in the array\n", size);

    for(int i = 0; i < size; i++){
        printf("Element - %d", i);
        scanf("%d", &array1[i]);
    }


    printf("\n Please input %d numbers in the second array", size);

    for(int i = 0; i < size; i++){
        printf("Element - %d", i);
        scanf("%d", &array2[i]);
    }
    sum = size + size;

    array1 = (int *) realloc(array1, sum * sizeof(int));

    int count = 0;

    for(int i = size; i < sum; i++){

        if(count != size){
            array1[i] = array2[count];
            count++;
        }

    }


    int temp;
    for(int i  = 0; i < sum; i++){
        temp = 0;
        for(int j = 1; j < sum; j++){

            if(array1[j-1] < array1[j]){
                temp = array1[j];
                array1[j] = array1[j-1];
                array1[j-1] = temp;
            }
        }

    }

    puts("Printing out the Array in descending order after merging them together");
    for(int i = 0; i < sum; i++){
        printf("%d", array1[i]);

    }

}

void test(){
    int size = 0;
    int index = 0;
    int array[size];

    printf("Input the size of array: ");
    scanf("%d", &size);


    puts("Input the values in the Array");
    for(int i = 0; i < size; i++){
        printf("Element - %d: ", i);
        scanf("%d", &array[i]);
    }

    printf("Please write what position you want to delete: ");
    scanf("%d", &index);

    for(int i  = 0; i < size; i++){

        if(array[i+1] != array[index]){
            printf("%d ", array[i]);

        }

    }


}

void sortinOnPointers(){
    int size;
    int * array;
    printf("Input the size of the array: ");
    scanf("%d", &size);
    array = (int *) calloc(size, sizeof (int));

    printf("Input the elements in the array.\n");
    for(int i = 0; i < size; i++){
        printf("Element %d - ", i);
        scanf("%d", &array[i]);
    }

    int temp;
    for(int i = 0; i < size; i++){
       temp = 0;
        for(int j = 1; j < size; j++){

            if(*(array+j-1) > *(array+j)){
                temp = *(array+j);
                *(array+j) = *(array+j-1);
                *(array+j-1) = temp;
            }
        }
    }


    for(int i = 0; i < size; i++){
        printf("%d ", *(array+i));
    }

}

void sumArray(){
    int size;
    int sum = 0;
    int * array;

    printf("How many elements? ");
    scanf("%d", &size);

    array = (int *) calloc(size, sizeof(int));

    printf("Write the elements in \n");
    for(int i = 0; i < size; i++){
        printf("Element %d - ", i);
        scanf("%d", &array[i]);
        sum += *(array+i);
    }

    printf("\nThe sum of the array is %d", sum);
}

void reverseOrderPointers(){
    int size;
    int * array;

    printf("How many elements? ");
    scanf("%d", &size);

    array = (int * ) calloc(size, sizeof(int));
    for(int i = 0; i < size; i++){
        printf("Element %d - ", i);
        scanf("%d", *(&array+i));
    }


    for(int i = size; i > 0; i--){
        printf("%d ", *(array+i));
    }

}


void test2(){
   int * array = (int *) malloc(5 * sizeof(int));

    memset(array, 0, 5 * sizeof(int));

    for(int i = 0; i < 6; i++){
        printf("%d ", array[i]);
    }

}


int main() {

    test2();

    return 0;
}
