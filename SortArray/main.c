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

  for (int i = 0; i < num; i++){
      for (int k = 1; k < num; k++) {
          if(number[k - 1] > number[k]){
              temp = number[k - 1];
              number[k - 1] = number[k];
              number[k] = temp;
          }
      }
  }


    puts("\nYou array after the numbers being sorted ascending");

    for (int i = 0; i < num; i++){
        printf(" %d", number[i]);
    }
}

int main(){

    sortArray();

    return 0;
}
