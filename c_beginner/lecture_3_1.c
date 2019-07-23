#include <stdio.h>

int main(void){
    int i =  6;
    printf("1~6の値を入力してください: " );
    scanf("%d", &i);
    if ( i>=1 && i<=6){
        if ( i % 2 == 0 ){
            printf("丁です\n");
        }
        else{
            printf("半です\n");
        }
    }
    else{
        printf("範囲外の数値です"); 
    }


}