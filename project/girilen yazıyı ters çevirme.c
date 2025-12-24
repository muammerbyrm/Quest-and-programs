#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Turkish");
	char A[81],temp;
	int i,k;
	printf("Yazý giriniz (en fazla 80):");
	gets(A);
	//girilen yazýnýn uzunluðunu bulma
	for(i=0;A[i]!='\0';i++);
	//girilen yazýyý ters çevirme
	for(k=0;k<i/2;k++){
		temp=A[i-1-k];
		A[i-1-k]=A[k];
		A[k]=temp;
	}
	printf("%s\n",A);
	system("pause");
	return 0;
}
