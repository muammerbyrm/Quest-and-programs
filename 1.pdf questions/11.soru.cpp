#include <stdio.h>
#include <stdlib.h>
//girilen 10 sayýnýn toplamýný ve çarpýmýný bulan diyafram
int main(){
	int toplam=0,carp=1,s,a=1;
	while(a<=10){
		printf("sayi giriniz : ");
		scanf("%d",&s);
		toplam=toplam+s;
		carp=carp*s;
		a=a+1;
	}
	printf("girilen sayilarin toplami: %d ,girilen sayilarin carpimi %d\n",toplam,carp);	
	system("pause");
    return 0;
}
