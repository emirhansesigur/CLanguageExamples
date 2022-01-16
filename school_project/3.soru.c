//emirhan ahmet sesigur
#include <stdio.h>
#include <stdlib.h>

int main()
{

    char arr[]={"emirhanahmet"},arr2[100]; // arr ve arr2 adli karakter dizileri tanimlandi.
    int i,j; // dongude kullanilacak i ve j tanimlandi

    for(i=11;i>=0;i--){ // arr daki karakterleri arr2 ye tersten atamak icin for dongusu olusturuldu.
        arr2[11-i]=arr[i]; // arr2 ye arr daki karakterler tersten olacak sekilde arr dizisine atandi
    }

    for(j=0;j<12;j++){
        printf("%c",arr2[j]); // for dongusu ile arr2 karakter dizisi ekrana cikti olarak verildi.
    }

    return 0;
}
