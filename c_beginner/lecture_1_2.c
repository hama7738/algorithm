#include <stdio.h>
#include <math.h>

int main(void){
    int i = 1, k;
    double j = 1.0;
    k = i + (int)j;
    float l;
    printf("正の整数の値を入力してください: ");
    scanf("%f", &l);
    printf("%sの年齢は%dです\n", "太郎", 234);
    printf("%f + %f = %4f\n", 1.2, 2.3, 3.5);
    printf("%d\n", k);
    // ceilは小数点以下をきり上げ
    // floorは小数点以下を切り捨て
    printf("ceil: %f\n", ceil(l));
    printf("floor: %f\n", floor(l));
    if (l > 0 && (ceil(l) == floor(l) )){
        printf("%fは正の整数です", l);
        printf("this is not an integer\n");
        printf("l: %f", l);
    }
    else{
        printf("this is not a positive integer\n");
        printf("l: %f", l);
    }
}