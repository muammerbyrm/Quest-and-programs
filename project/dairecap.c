#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,c,d;
    float p;
    p=3.14;
    printf("Dairenin yari cabini giriniz: ");
    scanf("%d",&a);
    printf("yapmak istediniz islemi seciniz.\n 1- alan hesaplama\n 2- cevre hesaplama\n");
    scanf("%d",&b);
    if(b==1){
        c=p*a*a;
        printf("dairenin alanı: %d\n",c);
    }
    else if(b==2){
        d=2*p*a;
        printf("dairenin çevresi: %d\n",d);
    }
    else{
        printf("geçersiz işlem seçtiniz.\n");
    }
    system("pause");
    return 0;

}
