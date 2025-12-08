#include <stdio.h>
#include <stdlib.h>
//girilen sýcaklýðý Fahrenheit biriminden Celsius birimine çeviren kod

int main(){
	float c,f;
	printf("sicakligi giriniz(F): ");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("sicaklik %f celsius derecedir\n ",c);
	system("pause");
    return 0;
}
