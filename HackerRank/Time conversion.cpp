#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    char time;
    char f;
    int h,m,s;
    scanf("%d:%d:%d%c%c",&h,&m,&s,&f,&time);
    if(f == 'P') {
        h=h+12;
        printf("%02d:%02d:%02d\n",h,m,s);
    }
    else
        if(h==12)
            h=0;
        printf("%02d:%02d:%02d\n",h,m,s);
    return 0;
}
