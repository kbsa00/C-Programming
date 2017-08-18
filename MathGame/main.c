#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {


   int count = 0;
   int try = 0;
   int youranswer;
   char name[15];

   puts("What is your name?");
    scanf("%s", name);
   printf("Are you ready to play a math game %s? \n", name);

   char answer[1] = {'y'};
	srand(time(NULL)); 
    while(answer[0] == 'y'){
        try++;
        int first = (rand() % 10) + 1;
        int second = (rand() % 10) + 1 ;

        printf("What is %d + %d ?\n", first, second);
        int sum = first + second;
        scanf("%d", &youranswer);

        if(youranswer == sum){
            puts("YOU WERE RIGHT :D");
            count++;
        }
        else{
            puts("You where WRONG.");
        }

        puts("Do you still want to play another round? press y for yes or n for No");
        scanf("%s", answer);

        if(answer[0] == 'n'){
            printf("You have chosen to end the game. Thanks for playing :D\n");
        }

    }

    printf("\nFINISHED RESULT: YOU HAD %d RIGHT OUT OF %d", count, try);


    return 0;
}
