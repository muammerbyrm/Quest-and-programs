#include <stdio.h>
#include <stdlib.h>
//faktoriyel hesaplama n!

int main(){
	int a=1,n,toplam=1;
	printf("N sayisini giriniz");
	scanf("%d",&n);
	while (n<0){
	printf("0dan büyük bir sayý giriniz");
	printf("N sayisini giriniz");
	scanf("%d",&n);
    }
    for(a;a<=n;a++){
		toplam=toplam*a;
    }

    /*
    //while ile faktoriyel hesabý
	while(a<=n){
		toplam=toplam*a;
	a=a+1;
	}*/
	printf("faktoriyel :%d\n",toplam);
	
	system("pause");
    return 0;
}
	
	
	
