#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,t;
    scanf("%d",&tc);
    for(int t=1;t<=tc;t++){
        int n,q,a,b,ar[100000];
        scanf("%d %d",&n,&q);
        for(int i=0;i<n;i++) scanf("%d",&ar[i]);
        printf("Case %d:\n",t);
        for(int j=0;j<q;j++){
                int sum=0;
            scanf("%d %d",&a,&b);
            int max=-1, min=500001;
            for(int i=a-1;i<=b-1;i++){
                sum+=ar[i];
                if(max<ar[i])max=ar[i];
                if(min>ar[i])min=ar[i];
 
            }
            printf("%d %d %d\n",max,min,sum);
        }
    }
    return 0;
}
