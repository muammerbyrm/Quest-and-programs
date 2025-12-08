#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
int main(){
	setlocale(LC_ALL,"Turkish");
	int i,a,terims;
	printf("Terim sayýsýný giriniz : ");
	scanf("%d",&terims);
		for(i=1;i<=terims;i++){
			a=i;
			while(a>0){
			
		if(a%2==1)
			printf("1");
		else
		printf("0");
			a--;
		}
		printf("\n");
	    }	
	
	
	
	
	system("pause");
    return 0;
}
