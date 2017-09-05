#include <stdio.h>
#include <malloc.h>
#include <memory.h>
#include <stdlib.h>


void readFile(char * tekstfil);
void sortAlphabeticaly(char * listofnames[], int length);
void nameLength(char * listofnames[], int length);


int main(){
    char * filnavn = "test.txt";

    readFile(filnavn);


    return 0;
}

void readFile(char * tekstfil){
    int countnames = 0;
    int index = 0;
    FILE * fpointer;

    fpointer = fopen(tekstfil, "r");
    char  singeline [50];
    char * listofnames[50];

    while(fgets(singeline, sizeof(singeline), fpointer) != NULL){

        listofnames[index] = malloc(sizeof(singeline));
        strcpy(listofnames[index],singeline);

        index++;
        countnames++;
    }

    fclose(fpointer);
    sortAlphabeticaly(listofnames, countnames);

}

void sortAlphabeticaly(char * listofnames[], int length){

    char * temp;


    for(int i = 0; i < length; i++){

        for(int j = 1; j < length; j++){

            if(strcmp(listofnames[j-1], listofnames[j]) > 0){
                temp = listofnames[j];
                listofnames[j] = listofnames[j-1];
                listofnames[j-1] = temp;
            }
        }
    }

    nameLength(listofnames, length);

}

void nameLength(char * listofnames[], int length){
    int index = 0;

    while(listofnames[index] != NULL){
        printf("%s", listofnames[index]);
        index++;
    }

    // printf("%d\t", strlen(listofnames[i])-1);


}