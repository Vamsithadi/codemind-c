#include<stdio.h>
int main()
{
    int L,B,W,C,a,b,c,d,e;
    scanf("%d",&L);
    scanf("%d",&B);
    scanf("%d",&W);
    scanf("%d",&C);
    a=L*B;
    b=2*W+L;
    c=2*W+B;
    d=b*c;
    e=(d-a)*C;
    printf("%d", e);
    return 0;
}