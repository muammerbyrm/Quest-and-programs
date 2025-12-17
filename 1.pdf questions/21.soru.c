#include <stdio.h>
#include <stdlib.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
//locale kütüphanesi türkçe karakter için
int main(){
	int sayi,ilk,son;
	printf("sayiyi giriniz : ");
	scanf("%d",&sayi);
	ilk=sayi%10;
	sayi=(sayi-ilk)/10;
	if(sayi==0)
	son=ilk;
	else{
		while(sayi>0){
			son=sayi%10;
			sayi=(sayi-ilk)/10;
		}
	}
	printf("ilk basamak : %d\n",ilk);
	printf("son basamak : %d\n",son);	

	
	system("pause");
    return 0;
}
