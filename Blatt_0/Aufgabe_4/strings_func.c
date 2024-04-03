#include "Strings_main.h"
#include <stdio.h>

void stringverarbeitung(){
    char s[1000];
    int i=0;

    printf("Bitte geben sie einen String ein: ");
    fgets(s, 1000,stdin );

    for(i = 0; i < 1000; i++) {
        if(s[i] != ' ') {
            printf("%c", s[i]);

        }

        if (s[i] == ' ') {
            printf("\n");

        }



        if (s[i] == '\0'){
            break;
        }
    }

}