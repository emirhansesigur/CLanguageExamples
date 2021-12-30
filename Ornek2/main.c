#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Pozitif sayilarin basamak sayisini hesaplayan cod.

int basamak_bulma(int x)
{
    int sayac=0;
    while(x!=0)
    {
        x/=10;
        sayac++;
    }
    return sayac;
}

void ana_fonksyon(){
    int sayi,sonuc=0;
    while(1){

    printf("Sayiyi giriniz: ");
    scanf("%d",&sayi);
    if(sayi<0){
        printf("Negatif sayi!!!");
        ana_fonksyon();
        break;
    }

    sonuc=basamak_bulma(sayi);


    printf("----- %d : %d basamaklidir.\n",sayi,sonuc);
}

}

int main()
{


    ana_fonksyon();


}
