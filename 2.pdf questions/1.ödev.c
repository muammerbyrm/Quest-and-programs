#include <stdio.h>
#include <stdlib.h>
//dikdörtgenin 2 kerenarýný kullanýcýdan alýp alaný ve çevresinin okuyan formül
int main(){
	int a,b,alan,cevre;
	printf("ilk kenari giriniz : ");
	scanf("%d",&a);
	printf("ikinci kenari giriniz : ");
	scanf("%d",&b);
	alan=a*b;
	cevre=2*(a+b);
	printf("giridiginiz dikdortgenin alani %d dir\n",alan);
	printf("girdiginiz dikdortgenin cevresi %d dir\n",cevre);
	system("pause");
	return 0;
}
