#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
int main(){
	setlocale(LC_ALL,"Turkish");
	int a[10];
	int i=0,b;
	for(i=0;i<10;i++){
	printf("Sayý giiniz : ");
	scanf("%d",&a[i]);
	if (a[i]==-1)
	break;
	}
	for(b=0;b<i;b++){
		printf("%d.sayýnýn karesi : %d\n",b+1,a[b]*a[b]);
	}
	system("pause");
    return 0;
}
