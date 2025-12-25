//32 boþlukun ascýý kodu
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int kelsay(char A[]){
	int i,a=1,b;
	for(b=0;A[b]!='\0';b++);
	if(A[b-1]==32)
	a=0;
	for(i=0;A[i]!='\0';i++){
		if(A[i]==32&&A[i]!=A[i-1])
		a++;
	}
	return a;
}
int main(){
	setlocale(LC_ALL,"Turkish");
	char A[1000];
	printf("Cümle giriniz :");
	gets(A);
    printf("girilen kelime sayýsý :%d\n",kelsay(A));
	system("pause");
    return 0;
}
