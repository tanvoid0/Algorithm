#include <bits/stdc++.h>
using namespace std;

int n,cnt=0;
char ans[100];

bool used[100];
vector < string > ans2;

void bt(int pos){
    if(pos==n){
            cnt++;

            	for(int i=0; i<n; i++){
                   printf("%d ",ans[i]);
           }
           printf("\n");


        return;
    }
    for(int i=1; i<=n; i++){
        if(!used[i]){
            ans[pos]=i;
            used[i]=1;
            bt(pos+1);
            used[i]=0;
        }
    }
}

int main(){
   while( scanf("%d",&n) && n ){
      bt(0);
   }
    return 0;
}
