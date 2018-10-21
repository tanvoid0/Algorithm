#include <stdio.h>
#include <stdlib.h>
int compare(int a, int b, int c);
int main()
{
    int a, b, c, max, i, t;
    scanf("%d", &t);
    for(i = 0; i < t; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        printf("Case %d: %d\n", i+1, compare(a, b, c));
    }
    return 0;
}

int compare(int a, int b, int c)
{
    if((a > b) && (a > c))
        return a;
    else if((b > c) && (b > a))
        return b;
    else
        return c;
}
