#include <stdio.h>
#include <stdlib.h>

int main(){
	int a,b,c=0,d;
	printf("Bir sayiyi giriniz : ");
	scanf("%d",&a);
	d=a;
	while (a>0){
	b=a%10;
	c=(c*10)+b;
	a=(a-b)/10;
}
if(c==d)
printf("girdiginiz sayi pollidrom\n");
	else {
	printf("girdiginiz sayi pollidrom degil\n");
}
	system("pause");
    return 0;
}
