#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int asal(int x){
	int i,kont=0,tf;
	for(i=1;i<=x;i++){
		if(x%i==0)
		kont++;
	}
	if (kont==2)
	tf=1;
	else
	tf=0;
	return tf;
}
int armstrong(int x){
	int a,tf,top=0;
	while(x>0){
		a=x%10;
		x=(x-a)/10;
		top=top+a*a*a;
	}
	if(top==x)
	tf=1;
	else
	tf=0;
	return tf;
}
int main(){
	setlocale(LC_ALL,"Turkish");
	int x,ar,as;
	printf("sayý giriniz :");
	scanf("%d",&x);
	ar=armstrong(x);
	as=asal(x);
	if(ar==1&&as==1)
	printf("Girilen sayý hem asal hem armstrong\n");
	else if (ar==1&&as==0)
	printf("Girilen sayý yanlýzca armstrong sayý\n");
	else if(ar==0&&as==1)
	printf("Girilen sayý yanlýzca asal sayý\n");
	else
	printf("Girilen sayý asal veya armstrong sayý deðildir\n");
	system("pause");
    return 0;
}
