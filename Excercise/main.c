#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <ctype.h>
#include <time.h>


    void Array(){
    /*
     *Sorting an Array using a bubblesort algoritme.
     */

    int numb;
    puts("How many elements do you want to your Array to contain?");
    scanf("%d", &numb);

    int number[numb];

    for (int i = 0; i < numb ; i++) {
        printf("Write a number %d: ", i+1) ;
        scanf("%d", &number[i]);
    }


    puts("Your Array before sorting the numbers:\n");

    for (int j = 0; j < numb ; j++) {
        printf(" %d", number[j]);
    }

    bubblesort(numb, number);

}


    void bubblesort(int numb, int number[])
{
    int temp;

    for(int i = 0; i < numb; i++){

        for(int j = 1; j < numb; j++){

            if(number[j-1] > number[j]){
                temp = number[j-1];
                number[j-1] = number[j];
                number[j] = temp;
            }
        }
    }



    puts("Here's your sorted list");

    for(int k = 0; k < numb; k++){
        printf("%d ", number[k]);
    }
}

    void AscAndDesc() {
    /*
     * Sorting Array ascending and descending.
     */

    int array[5];

    puts("Please write your numbers.");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    puts("The array numbers descending");
    int temp;
    for (int i = 0; i < 5; i++) {
        temp = 0;

        for (int j = 1; j < 5; j++) {

            if (array[j - 1] < array[j]) {
                temp = array[j];
                array[j] = array[j - 1];
                array[j - 1] = temp;
            }
        }

    }

    for (int i = 0; i < 5; i++) {
        printf("%d  ", array[i]);
    }


    puts("\nThe array numbers ascending");

    for (int i = 0; i < 5; i++) {
        temp = 0;

        for (int j = 1; j < 5; j++) {

            if (array[j - 1] > array[j]) {
                temp = array[j - 1];
                array[j - 1] = array[j];
                array[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%d  ", array[i]);
    }

}


    void pointers(){
        /*
         *Calculating simple math using pointers.
         */

        int num1;
        int num2;
        int sum;

        puts("Write first number");
        scanf("%d", &num1);
        puts("Write second number");
        scanf("%d", &num2);

        int * pNum1 = &num1;
        int * pNUm2 = &num2;
        sum = *pNum1 + *pNUm2;

        printf("%d", sum);

        if(*pNum1 > *pNUm2){
            printf("\n %d,  --- %p", *pNum1, pNum1);
        }

    }

    void pointerarray(){
    /*
     * Printing out elements using pointers.
     */

    int elements[5];

    int * pointers[5];

    for(int i = 0; i < 5; i++){
        printf("Element - %d ", i+1);
        scanf("%d",  &elements[i]);
        pointers[i] = &elements[i];
    }

    printf("Sorted from index 1 - 5 \n");
    for(int i = 0; i < 5; i++){
        printf("Element - %d: %d \n", i, *pointers[i]);
    }

    printf("\nSorted reverse from index 5 - 1 \n");

        for(int i = 4; i >= 0; i--){
            printf("Element - %d: - %d \n", i, *pointers[i]);
        }

}


    void StringLength(){

    /*
     * Calculating the length of a String using pointers.
     */

    char string[25];

    printf("Input a String: ");
    fgets(string, 25, stdin);
    char * pString = &string;


    int counter = 0;
    for(int i = 0; i < 25; i++)
    {

        if(isalpha(pString[i])){
            counter++;
        }
    }

    printf("\nThe length of the string %s is %d ", string ,counter);
}

void stringMethods(){
    /*
     * Printing out the String reversed and counting if there's any numbers or other signs in the String.
     */
    char string[25];
    puts("Please input your String: ");
    fgets(string, sizeof string, stdin);


    printf("The characters of the String are: \n");

    for(int i = 0; i < 25; i++){
        if(isalpha(string[i])) {
            printf("%c ", string[i]);

        }
    }

    printf("\n\nReversed way of the String: \n");

    for(int i = 25; i >=0; i--){

        if(isalpha(string[i])){
            printf("%c ", string[i]);
        }
    }

    int alphcount = 0;
    int digitcount = 0;
    int specialcount = 0;
    int index = 0;

    while(string[index] != 0){
        if(isalpha(string[index])) alphcount++;
        else if (isdigit(string[index])) digitcount++;
        else specialcount++;

        index++;
    }


    printf("\n\nNumber of Alphabets in the String is %d", alphcount);
    printf("\nNumber of Digits in the String is: %d", digitcount);
    printf("\nNumber of Special character in the String is: %d", specialcount-1);

}

    void stringCompare(){
        /*
         * Comparing to Strings to eachother.
         */
        char string1[25];
        char string2[25];
        int count1;
        int count2;

        puts("Write a String");
        fgets(string1, 25, stdin);
        puts("Write a String");
        fgets(string2, 25, stdin);

        if(strcmp(string1, string2) == 0){
           count1 = 0;
            count2 = 0;
            for(int i = 0; i < 25; i++){

                if(isalpha(string1[i])) count1++;

                if(isalpha(string2[i])) count2++;

            }

        }

        if(count1 == count2) printf("The length of both strings are equal and \n also both strings are equal.");
        else if(count1 < count2) printf("The second string is greater than the first one");
        else if(count1 > count2) printf("The first string is greater than the first one");



    }

    void copyString(){

        char string[25];
        char string2[25];
        int count = 0;
        puts("Write your String");
        fgets(string, 25, stdin);

        for(int i = 0; i < 25; i++){

            if(isalpha(string[i])) count++;

        }
        strncpy(string2, string, count);


        printf("The first string is: %s", string);
        printf("\nThe second string is: %s", string2);
        printf("\nNumbers of characters copied: %d", count);


    }

    void sortString(){
        /*
         * Sorting the string in right order alphabetically
         */
        char string[25];

        puts("Please write a string: ");
        fgets(string, 25, stdin);
        int temp = 0;

        for(int i = 0; i < 25; i++){

            for(int j = 1; j < 25; j++){

                if(isalpha(string[i]) && isalpha(string[j])){

                    if(string[j-1] > string[j]){
                        temp = string[j];
                        string[j] = string[j-1];
                        string[j-1] = temp;

                    }

                }

            }


        }
        printf("After sorting the string appears like: %s", string);



    }


    void printOutString(){
    /*
    * Printing out the String from the index of your decision
    */
        char string[25];
        char string2[25];
        int index;
        int length;

        puts("Write a string:");
        fgets(string, 25, stdin);

        puts("Write a index to start from");
        scanf("%d", &index);

        puts("Input the length of substring: ");

        scanf("%d", &length);



        for(int i = 0; i < length; i++){
            string2[i] = string[index+i-1];
        }
        printf("\n Here's the String... %s", string2);







    }

void reverseCase() {
    /*
     * Changing every lowercase in the String to a uppercase letter and vice versa.
     */
    char string[25];

    char lowercase;
    char uppercase;
    puts("Write your String input: ");
    fgets(string, 25, stdin);

    for (int i = 0; i < 25; i++) {
        lowercase = tolower(string[i]);
        uppercase = toupper(string[i]);

        if(isalpha(string[i])) {
            if (string[i] == lowercase) {
                putchar(toupper(string[i]));
            } else if (string[i] == toupper(string[i])) {
                putchar(tolower(string[i]));
            }
        }


    }
}

    void newLineSpace(){
        /*
         * In every Space in the string you print out a new line in the terminal.
         */
        char string[25];
        int index = 0;

        printf("Input your String: ");
        fgets(string, sizeof string, stdin);


        while(string[index]){

            if(isspace(string[index])){
                printf("\n");

            }
            putchar(string[index]);
            index++;

        }

    }











int main() {
    delete();
    // Eg e på oppgave 13. (String)

    return 0;
}