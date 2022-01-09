// Emirhan  Sesigur
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void tanitim();
void oyun();

int main()
{
    tanitim();
    oyun();
}

void tanitim()
{// tanittim.
    printf("******************* TAS KAGIT MAKAS OYUNU *******************\n");
    printf("****************HOS GELDINIZ****************\n");
    printf("KURALLAR:\n");
    printf("TAS KAGIT MAKAS oyununu oynamak icin 1, 2 veya 3 yazarak hamlenizi yapmaniz gerekir\nTas icin --> 1\nKagit icin --> 2\nMakas icin --> 3 yazarak hamle yapabilirsiniz\n");
    printf(" Tas Yener Makasi\n Kagit Yener Tasi\n Makas Yener Kagiti\n");
    printf("Eger ayni karakter oynanirsa kimse PUAN almaz\Ilk once 5 e ulasan kazanir\n");
    printf("--UYARI!!!\n--Lutfen 1 2 veya 3 haricinde sayi girmeyiniz!!!\n\n");
}

void oyun() // oyunun oynandigi fonksyon
{

    int klavyeden;
    int bilgisayarin_puani=0, kullanicinin_puani=0;
    int sayac=0;
    int kullanicidan_alinan[100],bilgisayarin_urettigi[100];


// Klavyeden sayi girme.
    while((kullanicinin_puani!=5)&&(bilgisayarin_puani!=5)){ // || or demek.

        printf("Hangi hamleyi yapmak istiyorsunuz (1,2,3) :  "); //1=T, 2=K, 3=M
        scanf("%d",&kullanicidan_alinan[sayac]);

        // bilgisayarin resgele urettigi sayilarin  3 e gore modunu alip 1 ekleyerek 1 2 veya 3 sayisini elde ederiz.

        srand(time(NULL));  // rasgele sayi uretmek icin.
        bilgisayarin_urettigi[sayac]=(rand()%3)+1;

//T>M, K>T, M>K, == ise sayi arttirilir.

            //bilgisayarin kazandigi durumlar.
        if(((bilgisayarin_urettigi[sayac]==1)&&(kullanicidan_alinan[sayac]==3))||((bilgisayarin_urettigi[sayac]==2)&&(kullanicidan_alinan[sayac]==1))||((bilgisayarin_urettigi[sayac]==3)&&(kullanicidan_alinan[sayac]==2)))
            bilgisayarin_puani++;

            //kullanicinin kazandigi durumlar
        else if(((kullanicidan_alinan[sayac]==1)&&(bilgisayarin_urettigi[sayac]==3))||((kullanicidan_alinan[sayac]==2)&&(bilgisayarin_urettigi[sayac]==1))||((kullanicidan_alinan[sayac]==3)&&(bilgisayarin_urettigi[sayac]==2)))
            kullanicinin_puani++;

            //berabere bitme durumu:
        else if(bilgisayarin_urettigi[sayac]==kullanicidan_alinan[sayac])
            ; // herhangi bir islem yapilmaz.
        sayac++;

                    }
        //Kimin kazandigi ve Skor
        if(kullanicinin_puani==5){
            printf("\n\n\nKULLANICI Kazandi 5-%d\n",bilgisayarin_puani);
        }
        else if(bilgisayarin_puani==5){
            printf("\n\n\nBILGISAYAR Kazandi 5-%d\n",kullanicinin_puani);
        }

        printf("---***HAMLELER***---\n");




        for(int i=0;i<sayac;i++){
        printf("%d] bilgisayarin Hamlesi: %d Kullanicinin Hamlesi: %d\n",i+1,bilgisayarin_urettigi[i],kullanicidan_alinan[i]);
        }

}
