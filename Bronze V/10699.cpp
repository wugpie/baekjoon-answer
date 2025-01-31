#include <iostream>
#include <cstdio>
#include <ctime>
 
int main() {
    time_t timer;
    struct tm* t;
    timer = time(NULL);  //유닉스 시간
    t = localtime(&timer);  //시간 구조체
    
    printf("%d-%02d-%d",t->tm_year + 1900, t->tm_mon + 1, t->tm_mday);
    //년도는 +1900, 달은 0부터 시작해서 +1, 0n붙이면 자릿수 강제
    return 0;
}