#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//stlib kütüphanesi cmd nin direkt kapanmamasý için 
// locale kütüphanesi ve  setlocale(LC_ALL,"Turkish"); ifadesi türkçe harfler için
int kare(int x){
	return x*x;
}
int main(){
	setlocale(LC_ALL,"Turkish");
	int x;
    printf("Karenin 1 kenarýný giriniz :");
    scanf("%d",&x);
    printf("%d\n",kare(x));
	system("pause");
    return 0;
}
