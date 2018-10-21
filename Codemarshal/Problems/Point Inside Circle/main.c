#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int t, cx, cy, px, py, r, d, i;
    scanf("%d", &t);
    for(i=0; i < t; i++)
    {
        scanf("%d %d %d %d %d", &cx, &cy, &r, &px, &py);
        d = sqrt((pow((cx-px),2))+(pow((cy-py),2)));
        if(d < r)
            printf("Case %d: yes\n", i+1);
        else
            printf("Case %d: no\n", i+1);
    }
    return 0;
}
