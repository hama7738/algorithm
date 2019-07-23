#include <stdio.h>

int main(void){
    int n[4];
    int i;

    printf("数字を入力してください: ");
    scanf("%d", &n[0]);
    printf("数字を入力してください: ");
    scanf("%d", &n[1]);
    printf("数字を入力してください: ");
    scanf("%d", &n[2]);
    printf("数字を入力してください: ");
    scanf("%d", &n[3]);

    printf("n[0] value:%d\n", n[0]);
    printf("sizeof n: %lu\n", sizeof(n));
    printf("sizeof n[0]: %lu\n", sizeof(n[0]));
    printf("n[0][0]: %d\n", n[0]);

    for ( i = 0 ; i <= sizeof(n) / sizeof(n[0]) - 1; i++) {
        printf("n[%d]: %d\n",i, n[i]);
    }
}