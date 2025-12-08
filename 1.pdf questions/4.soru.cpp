#include <stdio.h>
#include <stdlib.h>
//girilen sýcaklýðýn donma noktasýnýn altýnda üstüjnde veya donma noktasýnda olduðunu belirten kod

int main(){
	int a;
	printf("sicakligi giriniz :");
	scanf("%d",&a);
	if (a>0)
	printf("donma sicakliginin ustunde\n");
	else if (a==0)
	printf("donma sicaklikinda\n");
	else
	printf("donma sicakiginin altinda\n");
	
	system("pause");
    return 0;
}
