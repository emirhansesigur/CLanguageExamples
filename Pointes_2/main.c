#include <stdlib.h>
#include <stdio.h>

int *buyukbul(double *sayi1, double*sayi2)
{
    if(*sayi1>*sayi2)
        return &*sayi1;
    else return &*sayi2;
}

void main()
{
    double x=1.1122,y=2.1345;
    printf("%p\n",&x);
    printf("%p\n\n",&y);

    printf("%p",buyukbul(&x,&y));
}
