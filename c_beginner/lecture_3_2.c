#include <stdio.h>

int main(void){
    int i;
    printf("数値を入力してください: ");
    scanf("%d", &i);
    switch (i) {
        case (2):
            printf("two \n");
            break;
        default :
            printf("2ではない値です\n");

    }
}