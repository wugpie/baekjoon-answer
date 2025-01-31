#include <stdio.h>

int main(){
    double a, b; // 10^-9의 상대 오차 -> double 필요
    scanf("%lf %lf", &a, &b);
    printf("%.10lf", a/b); //10^-9를 보이기 위해 10자리
    return 0;
}