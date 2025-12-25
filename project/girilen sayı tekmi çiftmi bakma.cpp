#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void tekc(int a){
	if(a%2==0)
	printf("Sayý çift\n");
	else
	printf("sayý tek\n");
}
int main(){
	setlocale(LC_ALL,"Turkish");
	int x;
	printf("Bir sayý giriniz :");
	scanf("%d",&x);
	tekc(x);
	system("pause");
    return 0;
}
