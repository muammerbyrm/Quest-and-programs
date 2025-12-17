#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// 
//her yazýlým için gerekli
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
int main(){
	int a,b,c,d=0;
    printf("sayi giriniz : ");
	scanf("%d",&a);
	while (a>0){
		b=a%2;
		if (b==1)
		c=c+pow(10,d)*b;
		d=d+1;
		a=a/2;
	}
	printf("%d\n",c);
	system("pause");
    return 0;
}
