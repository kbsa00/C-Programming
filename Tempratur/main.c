#include <stdio.h>
#include <memory.h>


void  Tempratur() {

    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    puts("FHAR \t CELSIUS");
    while(fahr <= upper){
        celsius = 5 * (fahr-32) / 9;
        printf("%d \t %d \n", fahr, celsius);
        fahr = fahr + step;

    }

}

void test(){
    int navn;


    int nc = 0;

    while(getchar() != EOF)
    {
        ++nc;
        printf("1%d \n", nc);


    }




}

int main(){

    test();


    return  0;

};