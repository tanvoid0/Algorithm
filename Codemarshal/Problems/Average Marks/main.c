#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[100], avg, t, sum, n, i, j;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &n);
        for(j = 0, sum = 0; j < n; j++)
        {
            scanf("%d", &m[j]);
            sum = sum + m[j];
        }
        avg = sum / n;
        printf("Case %d: %d\n", i+1, avg);

    }
    return 0;
}



