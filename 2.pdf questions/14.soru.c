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
	int a,b,d;
	printf("sayi giriniz : ");
	scanf("%d",&a);
	int i=1,c;
	for(i;i<=a;i++){
	d=0;
	c=i;
	while(c>0){
		b=c%10;
		c=(c-b)/10;
		d=d+factoriel(b);
	}
	if(d==i)
	printf("%d\n",d);
	
    }
	
	
	system("pause");
    return 0;
}
