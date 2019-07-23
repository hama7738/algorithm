#include <stdio.h>

double max(double, double);
void show(double);
void line();


int main(void){
    double a,b;
    printf("aの値を入力してください: ");
    scanf("%lf", &a);
    printf("bの値を入力してください: ");
    scanf("%lf", &b);
    line();
    show(a);
    show(b);
    printf("aとbのうち大きい値は、%lfです\n", max(a, b));
    line();
}

double max(double l, double m){
    if ( l > m){
        return l;
    }
    return m;
}

void show(double n){
    printf("数値 : %lf\n", n);
}

void line(){
    printf("***********\n");
}
