#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//stlib kütüphanesi ve system("pause"); komutu cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
int main(){
	setlocale(LC_ALL,"Turkish");
	
	int a,sayi,top=0,b;
    printf("sayý giriniz : ");
    scanf("%d",&sayi);
    b=sayi;
    while(sayi>0){
		a=sayi%10;
		sayi=(sayi-a)/10;
		top=top+a*a*a;
    }
    if(top==b)
    printf("armstrong sayýdýr \n");
    else
    printf("armstrong sayý deðildir \n");
	
	
	
	system("pause");
    return 0;
}
