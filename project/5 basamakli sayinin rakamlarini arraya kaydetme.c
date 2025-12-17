#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
int main(){
	setlocale(LC_ALL,"Turkish");
	int bas[5];
	int i,a,b;
	printf("Sasyýyý giriniz : ");
	scanf("%d",&a);
	while(0>a>99999){
		printf("5 basamaktan büyük bir sayý girdiniz geçerlibir deðer giriniz : ");
		scanf("%d",a);
	}
	for(b=0;a>0;b++){
		bas[b]=a%10;
		a=(a-bas[b])/10;
		printf("%d. basamak : %d\n",b+1,bas[b]);		
		}
	system("pause");
    return 0;
}
