
//Lower Bound-STL
// Time limit

#include <iostream>
#include <cstdio>
using namespace std;
void search(int n, int y, int x[]){
    for(int i=0; i<n; i++){
        if(x[i] == y){
            printf("Yes %d\n", i+1);
            return;
        }
        else if(x[i] > y){
            printf("No %d\n", i+1);
            break;
        }
    }
}
int main() {
    int n,q,y;
    scanf("%d", &n);
    int x[n];
    for(int i=0; i<n; i++){
        scanf("%d", &x[i]);
    }
    scanf("%d", &q);
    for(int i=0; i<q; i++){
        scanf("%d", &y);
        search(n,y,x);
    }
    return 0;
}