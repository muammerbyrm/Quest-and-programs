#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//her yazýlým için gerekli
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
//locale kütüphanesi türkçe karakter için
int main(){
	int n,i,top;
	printf("bir sayi giriniz : ");
	scanf("%d",&n);
	for (i=1;i<=10;i++){
		printf("%d x %d = %d\n",i,n,i*n);
	}
	system("pause");
    return 0;
}
