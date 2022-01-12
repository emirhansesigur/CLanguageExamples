#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
// Girilen calisan sayisina gore dizinin boyutunu belirleme ve ekrana rasgele kisiler yazdirma.
struct calisanlar
{
    char isim[20];
    char soyad[20];
    double maas;

};


int main(){

    srand(time(0));
    int sayi;
    printf("Kac tane calisan girmek istersin: ");
    scanf("%d",&sayi);
    char isimler[3][10]={"emir","ali","veli"};
    char soyadlar[3][10]={"yilmaz","demir","sadik"};
    struct calisanlar* tum_calisan_dizisi;

    tum_calisan_dizisi=(struct calisanlar*)malloc((sizeof(struct calisanlar))*sayi);

    for(int i=0;i<sayi;i++){
        strcpy(tum_calisan_dizisi[i].isim,isimler[rand()%3]);
        strcpy(tum_calisan_dizisi[i].soyad,soyadlar[rand()%3]);
        tum_calisan_dizisi[i].maas=rand()%10000;
        printf("Isim: %s ",tum_calisan_dizisi[i].isim);
        printf("Soyisim: %s   ",tum_calisan_dizisi[i].soyad);
        printf("Maasi: %lf\n",tum_calisan_dizisi[i].maas);
    }
}
