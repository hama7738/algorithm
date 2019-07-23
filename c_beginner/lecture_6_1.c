#include <stdio.h>

int main(void){
    int n[] = {15,4,3, 2,1};
    int i;
    for (i=0; i<= (sizeof(n) / sizeof(n[0]) - 1) ; i++){
        if (sizeof(n[i]) == sizeof(1)){
            printf("%d", (int)n[i]);
        }
        else{
            printf("there are some problems");
            break;
        }

    }
}