#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,s,c;
     while(scanf("%d%d",&a,&b) != EOF){
    s = a + b;
    c = abs(s);
    if(c < 1000) printf("%d",s);
    if(c >= 1000 && c < 1000000) printf("%d%,%03d",s/1000,c%1000);
    if(c >= 1000000) printf("%d,%03d,%03d",s/1000000,(c/1000)%1000,c%1000);
     }
    return 0;
}
