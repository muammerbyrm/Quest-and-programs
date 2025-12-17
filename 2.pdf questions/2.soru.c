#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//ax^2+bx+c þeklindeki ifadelenin köklerini bulan program
int main(){
	int a,b,c,d;
	double e,f;
	printf("a yi giriniz : ");
	scanf("%d",&a);
	printf("b yi giriniz : ");
	scanf("%d",&b);
	printf("c yi giriniz : ");
	scanf("%d",&c);
	d=(b*b)-4*a*c;
	if(d<0)
	printf("Reel koku yoktur\n");
	else if(d==0){
		e=(-b)/(2*a);
		printf("kokler ayni ve %.4lf dir \n",e);
	}
	else{
		e=(-b+sqrt(d))/(2*a);
		f=(-b-sqrt(d))/(2*a);	
		printf("kokler %.4lf ve %.4lf dir\n",e,f);
		
	}		
	system("pause");
	return 0;
}
