#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
    long n; if(scanf("%ld",&n)!=1) return 0;
    if(n<2){ printf("0\n"); return 0; }
    long half=(n>>1)+1;
    unsigned char *comp=calloc(half,1);
    if(!comp) return 1;
    for(long p=3;p*p<=n;p+=2) if(!comp[p>>1]){
        long step=p<<1;
        for(long m=p*p;m<=n;m+=step) comp[m>>1]=1;
    }
    long cnt=1;
    for(long i=3;i<=n;i+=2) if(!comp[i>>1]) cnt++;
    printf("%ld\n",cnt);
    free(comp);
    return 0;
}
