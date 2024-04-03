#include <stdio.h>
#include "c_array_main.h"
void einmaleins() {
    int array[11] [11];
    int i;
    int j;
    for(i=0; i<11; i++){
        for(j=0; j<11; j++) {
            array[j] [i] = i * j;
        }
    }
    for(i=1; i < 11; i++) {
        for(j=1; j <11; j++) {
            printf("\t");
            printf ("%d", array[j] [i]);
        }
        printf("\n");
    }
}