#include <stdio.h>

int main(void){
    int i;
    printf("整数値を入力してください:");
    scanf("%d", &i);
    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }
}