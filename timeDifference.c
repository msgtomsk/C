#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int sh,sm,ss,eh,em,es,nh,nm,ns,stotal,etotal,total;
    scanf("%d:%d:%d %d:%d:%d",&sh,&sm,&ss,&eh,&em,&es);
    sh = sh*3600;
    sm = sm * 60;
    eh = eh * 3600;
    em = em * 60;
    stotal = sh + sm + ss;
    etotal = eh + em + es;
    total = abs(stotal - etotal);
    nh = total / 3600;
    total = total % 3600;
    nm = total/60;
    ns = total % 60;
    
    printf("%02d:%02d:%02d",nh,nm,ns);
    return 0;
}
