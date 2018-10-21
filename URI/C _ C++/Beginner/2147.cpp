#include <iostream>
#include <stdio.h>
using namespace std;

int main(void)
{
    int C,c,j;
    char s[10000];

    cin >> C;
    for(int i=0; i<C; i++) {
        c=0;
        j=0;
        cin >> s;
        while(s[j] != '\0') {
            c++;
            j++;
        }
        printf("%.2f\n",c*.01);
    }

    return 0;
}
