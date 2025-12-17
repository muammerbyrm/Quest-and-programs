#include <stdio.h>
#include <stdlib.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
//locale kütüphanesi türkçe karakter için
int main(){
	int a,b,ebob,ksay,i=1;
	printf("ilk sayiyi giriniz : ");
	scanf("%d",&a);
	printf("ikinci sayiyi giriniz : ");
	scanf("%d",&b);
	if (a<b)
	ksay=a;
	else
	ksay=b;
	while(i<=ksay){
		if(a%i==0 && b%i==0)
		ebob=i;
		i=i+1;
	}
	printf("%d sayisi ve %d sayisinin ebobu %d dir\n",a,b,ebob);
	
	
	system("pause");
    return 0;
}
