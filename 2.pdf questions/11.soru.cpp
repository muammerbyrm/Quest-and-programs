#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Turkish");
	
	int a,sayi,top=0,b,c,d=0;
    printf("sayý giriniz : ");
    scanf("%d",&sayi);
    b=sayi;
    for(a=1;a<b;a++){
		c=b%a;
		if(c==0)
        d=d+a;		
    }
    if(d==sayi)
    printf("mükemmel sayý \n");
    else
    printf("mükemmel sayý deðil\n");
	system("pause");
    return 0;
}
