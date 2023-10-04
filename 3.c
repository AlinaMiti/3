#include <stdio.h>

int main (void){
    int v, u, t1, t2, s;
    scanf_s("%d %d %d %d", &v, &u, &t1, &t2);
    s = (v*t1) + ((v-u)*t2);
    if (u < v){
        printf("%d", s);
    }
    else{
        printf("Error");
    }
}