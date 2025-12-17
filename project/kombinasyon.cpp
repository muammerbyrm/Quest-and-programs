#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
long long fac(int x){
	int b;
	long long top=1;
	for(b=1;b<=x;b++){
		top*=b;
	}
	return top;
}
long long comb(int x,int y){
	return fac(x)/(fac(y)*fac(x-y));
}
int main(){
	setlocale(LC_ALL,"Turkish");
	int a,b;
	do{
	printf("Ýkinci sayý Birinci sayýdan büyük olamaz !!!\nBirinci sayýyý Giriniz : ");
	scanf("%d",&a);
	printf("ikinci sayýyý Giriniz : ");
	scanf("%d",&b);
    }while(a<b);
    //printf("%d  %d\n",fac(a),fac(b));
	// factoriyellerini doðru hesapladýðýný görmek için
    printf("%d\n",comb(a,b));
	system("pause");
    return 0;
}
