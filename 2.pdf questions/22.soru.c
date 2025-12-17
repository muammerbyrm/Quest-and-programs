#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
int main(){
	setlocale(LC_ALL,"Turkish");
	int a,top=0;
	printf("9 a bölünebilen sayýlar : \n");
	for(a=100;a<200;a++)
	{
		if(a%9==0){
			printf("%d\n",a);
			top=top+a;
		}
	}
	printf("100le 200 arasýndaki Bütün 9 a bölünebilen tam sayýlarýn toplamý = %d\n",top);
	
	system("pause");
    return 0;
}
