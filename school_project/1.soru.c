//Emirhan Ahmet Sesig�r
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k; //degiskenler tanimlandi.
    int arr[6] = {1,2,4,4,4,4}; //arr dizisi olusturuldu.

    for(i=0;i<6;i++){ // arr dizisinin eleman say�s� 6 oldugu icin 6 defa tekrarlanacak bir dizi yaz�l�d�.
        for(j=i+1;j<6;j++){ // arr dizisindeki elemanlarla kars�last�rmak icin bir dizi daha. j=i+1 cunku o degerden sonraki degerlerle karsilastirma yapabilmek icin.
            if(arr[i]==arr[j]){
                arr[j]="*"; // ayni degerden bulunduysa o degeri * karakteri ile degistirip sayi olarak gorulmesi engellendi.
            }
        }
    }

    for(k=0;k<6;k++){
        if(arr[k]!="*"){ // ustteki dongulerde bir degeri '*' ile degistirdiysek onun ekrana yazdirilmemesi icin
            printf("%d,",arr[k]); // diger ifadeler yazdirilir.
        }
    }
    return 0;
}
