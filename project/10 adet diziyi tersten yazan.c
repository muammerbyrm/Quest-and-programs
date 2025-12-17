#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
int main(){
	setlocale(LC_ALL,"Turkish");
	int A[10],i;
	for(i=9;i>=0;i--){
		printf("sayýyý giriniz : ");
		scanf("%d",&A[i]);
	}
	for(i=0;i<10;i++){
		printf("%d\t",A[i]);
		
	}
	system("pause");
    return 0;
}
