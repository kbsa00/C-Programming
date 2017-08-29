#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <memory.h>
#include <string.h>
#include <stdio.h>
/**
 * strtok() fungerer litt som line.split i java. Den gjør hvert string til et eget token.
 */

void tokenFunction(){

    char string[] = "- This, is, a, string";

    char * ph = strtok(string, "- ,");

    while(ph != NULL){
        printf("%s\n", ph);
        ph = strtok(NULL, "- ,");

    }
}
/**
 * Strcpn(string, string2) sjekker hele veien om bokstavene i String finnes i
 * String 2, og stopper opp helt til den kommer til et bokstav som ikke finnes i
 * string2. metoden returnerer en int/size_t.
 */
void strspnFunction(){
    const char string[] = "alloHopg";
    const char string2[] = "allHo";
    int number;
   number = strspn(string, string2);
    printf("%d", number);


}
/**
 * Fungerer på samme måte som Strcpn() Bare at den ikke teller hvor mange ganger
 * bokstavene forekommer, men hvor mange ganger den IKKE forekommer.
 *
 */

void strscpnFunction(){
    const char string1[] = "abcdefg";
    const char string2[] = "ghijklm";

    printf("Antall ikke like tegn: %d", strcspn(string1, string2));


}
/**
 * Denne funksjonen finner akkurat det du er ute etter i en string.
 * "Needle in the haystack" funskjon.
 */
void StrstrString(){
    const char Haystack[50] = "One Two Three Four Five Six Khalid Ten Eighty";
    const char needle[25] = "Khalid";
    char * rett;

    rett = strstr(Haystack,needle);

    printf("The string you are looking for is found %s", rett);



}
/**
 * Strbrk tar i mot to char i parameteren og returnerer en pointer.
 * Poenget er at den skal finne et bestemt bokstav
 * og returnere dette. I min metode bruker jeg strbrk for å finne konsenanter og
 * returnerer minneadresset til bokstaven.
 */
void strbrkFunction(){
    char * sentence = "Bob is really cool";
    //Denne metoden her finner i dette tilfellet konsananter i stringen
    // og lagrer dette i en pointer som holder minne adresset av konsanten i stringen.
    char * memadr = strpbrk(sentence, "aeiouAEIOU");

    /*
     * I dette tilfellet printer jeg ut alle konsonanter som finnes i stringen "Bob is really cool"
     * og printer ut bokstaven og minneadressene til disse respektive bokstaver.
     */
    while(memadr != NULL){
        printf("%c - %p\n", *memadr, memadr);

        memadr = strpbrk(memadr+1, "aeiouAEIOU");
    }
}



int main() {
    

}

