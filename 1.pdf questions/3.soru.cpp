#include <stdio.h>
#include <stdlib.h>
//girilen sayýnýn tekmi çiftmi olduðu

int main(){
	int n,a;
	printf("N sayisini giriniz :");
	scanf("%d",&n);
	a=n%2;
	if (a==0)
	printf("sayi cifttir\n");
	else
	printf("sayi tektir\n");
	system("pause");
    return 0;
}
