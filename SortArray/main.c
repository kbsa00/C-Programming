#include <stdio.h>

void sortArray(){
    int numb;
    puts("How many elements do you want to your Array to contain?");
    scanf("%d", &numb);

    int number[numb];

    for (int i = 0; i < numb ; i++) {
       printf("Write a number %d: ", i+1) ;
       scanf("%d", &number[i]);
    }



    puts("Your Array before sorting the numbers:");

    for (int j = 0; j < numb ; j++) {
        printf(" %d", number[j]);
    }

    bubbleSort(number, numb);



}

void bubbleSort(int number[], int num){

    int temp;

  for (int k = 0; k < num; k++){
      for (int i = 1; i < num; i++) {
          if(number[i - 1] > number[i]){
              temp = number[i - 1];
              number[i - 1] = number[i];
              number[i] = temp;
          }
      }
  }


    puts("\nYou array after the numbers being sorted ascending");

    for (int k = 0; k < num; k++){
        printf(" %d", number[k]);
    }
}

int main(){

    sortArray();

    return 0;
}