#include <stdio.h>
int expt(float num, int pow){
int i;
float result = 1;
for(i = 0; i<=pow; i++){
    result *= num;
}
printf("%d\n", result);
}

int main(void){
expt(2, 3);
expt(0.5, 2);
expt(0.25, -2);
expt(10.0, 0);
}
