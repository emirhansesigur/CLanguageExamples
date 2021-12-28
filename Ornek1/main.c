#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// metin olarak girilen karakterlerin oncesinde gelen adet sayisinca yazdirilmasi.
void main()
{
    char a[20];
    int b[20];
    int i,j,y;
    printf("metni gir: ");
    gets(a);

    y=strlen(a);
    for(i=0;i<y;i++){
        b[i]=1;
    }


    for(i=y-1;i>0;i--){
        for(j=0;j<i-1;j++){
            if(a[i]==a[j]){
                b[i]=b[i]+1;
            }
        }
    }

    for(i=0;i<y;i++){
        for(j=0;j<b[i];j++){
            printf("%c",a[i]);
        }
    }

}
