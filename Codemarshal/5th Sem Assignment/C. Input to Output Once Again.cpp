#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main(void){
    int a, b;
    double c;
    char ch,ch2;

    scanf("%d %d %lf",&a, &b, &c);

    scanf("%c %c",&ch2,&ch);


    printf("%d %d\n%.2lf\n%c\n",a,b,c,ch);
    return 0;
}

