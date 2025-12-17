#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//stlib kütüphanesi ve system("pause"); komutu cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
int main(){
	setlocale(LC_ALL,"Turkish");
	
	int sayi,a,i,top=0;
	printf("N sayýsýný girin : ");
	scanf("%d",&sayi);
	
	printf("Asal sayilar: \n");  
    for(a=2;a<=sayi;a++)
	{
		int kont=0;
		
		for(i=1;i<=a;i++){
            if(a%i==0){
                kont++;
            }
        }
		
		 if(kont==2){
		
			printf("%d\n",a);
			top++;
	    }
	 
	}
printf("%d tane asal sayý var \n",top);
		
	
	system("pause");
    return 0;
}
