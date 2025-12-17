#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
//locale kütüphanesi türkçe karakter için
int main(){
	setlocale(LC_ALL,"Turkish");
	int a,b,ebob,ekok,ksay,i;
	printf("ilk sayýyý giriniz : ");
	scanf("%d",&a);
	printf("ikinci sayýyý giriniz : ");
	scanf("%d",&b);
	if (a<b)
	ksay=a;
	else
	ksay=b;
	for(i=1;i<=ksay;i++){
		if(a%i==0 && b%i==0)
		ebob=i;
	}
	ekok=(a/ebob)*(b/ebob)*ebob;
	printf("%d sayýsý ve %d sayýsýnýn ebobu %d dýr\n",a,b,ekok);
	
	
	system("pause");
    return 0;
}
