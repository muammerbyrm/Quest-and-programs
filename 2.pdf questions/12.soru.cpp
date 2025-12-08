#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Turkish");
	
	int a,sayi,top=0,b,c,d,e,f;
    printf("sayý giriniz : ");
    scanf("%d",&sayi);
    e=sayi;
    for(f=1;f<=e;f++){
    d=0;
    for(a=1;a<f;a++){
		c=f%a;
		if(c==0)
        d=d+a;		
    }
    if(d==f)
    printf("%d\n",f);

    }
	system("pause");
    return 0;
}
