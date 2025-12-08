#include <stdio.h>
#include <stdlib.h>
//1 den 10 a kadar olan sayýlarýn karelerini bulan program

int main(){
	int a,b;
	//for ile yapýlýþý
	/*
	for (a=1;a<11;++a){
		b=a*a;
		printf("%d\n",b);
	}
	*/
	//while ile yapýþýlý
	a=1;
	while (a<11){
	    b=a*a;
		printf("%d\n",b);
		a=a++;
	}
	system("pause");
    return 0;
}
