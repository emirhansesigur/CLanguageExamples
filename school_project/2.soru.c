//Emirhan ahmet sesigür
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[5] = {1,2,3,4,5}; //dizi olusturuldu.
    int sayi,i,kontrol=-1; // kontrol degiskeni en sonda -1 cýktýsý verilip verilmeyecegini kontrol edecek.
    printf("Dizide bulmak istediginiz sayiyi giriniz: ");
    scanf("%d",&sayi); // sayi kullanicidan alindi

    for(i=0;i<5;i++){ // 5 kere tekrarlanacak bir dongu kuruldu.
        if(arr[i]==sayi){ // dizideki elemanlarin sayi ile esit olup olmadigi kontrol edildi.
            printf("%d",i);
            kontrol=0; // esitse ve donguye girdiyse kontol degiskeni degistirilerek -1 yazmasý engellendi.
            break; // Tekrarlanan eleman olmadigi ve verimi arttirmak icin break koyularak dongu kirildi.
        }
    }

    if(kontrol==-1){ // kontrol ustteki for dongusune girmeyip degismesiyse -1 olmaya devam edecek ve ekrana -1 yazdirilacak.
        printf("-1");
    }

    return 0;
}
