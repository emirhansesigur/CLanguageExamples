#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// bir sayinin girilien 2 sayiyla bolunup bolunmedigini yazdiran fonksyon.

int kontrol_fonksyonu(int x, int a)
{
    int num = x/a;
    if(num*a==x)
        return 1;
    return 0;

}

void ikili_k(int ilk, int iki)
{
    if(ilk==1){
        if(iki==1)
            printf("her ikisi");
        else if(iki==0)
            printf("sadece ilk");
    }
    else if(ilk==0){
        if(iki==1)
            printf("sadece iki");
        else if(iki==0)
            printf("NONE");
    }
}

void main()
{
    int sayi,bol,bol2;
    int a, b;
    printf("gir: ");
    scanf("%d",&sayi);


    printf("\nKacla bolunuyor mu bakmak icin: ");
    scanf("%d",&bol);

    printf("\nKacla bolunuyor mu bakmak icin 2 ): ");
    scanf("%d",&bol2);

    a=kontrol_fonksyonu(sayi, bol);
    b=kontrol_fonksyonu(sayi, bol2);

    ikili_k(a,b);
}
