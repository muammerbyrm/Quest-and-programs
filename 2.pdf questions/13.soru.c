#include <stdio.h>
#include <stdlib.h>
//stlib kütüphanesi ve system("pause"); komutu cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
long factoriel(int x){
	long fact=1;
	int i;
	for(i=1;i<=x;i++){
		fact=fact*i;
	}
	return fact;
}
int main(){
	int a,b,d=0;
	printf("sayi giriniz : ");
	scanf("%d",&a);
	int c=a;
	while(a>0){
		b=a%10;
		a=(a-b)/10;
		d=d+factoriel(b);
	}
	if(d==c)
	printf("strong sayidir\n");
	else
	printf("strong sayi degildir\n");
	
	
	
	system("pause");
    return 0;
}
