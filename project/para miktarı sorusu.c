#include <stdio.h>
#include <stdlib.h>
int main(){
int para,a,b,c,d,e,f;
a=0,b=0,c=0,d=0;
printf("para miktarını giriniz :");
scanf("%d",&para);
para=para/10;
e=para%10;
f=e;
if(e>=5){
	c=c+1;
	e=e-5;
}
else;
if (e>=2){

	b=b+1;
	e=e-2;
}
else;
if (e>=2){
	b=b+1;
	e=e-2;
}
else;
if (e==1){
	a=a+1;
	e=e-1;
}
else;
d=(para-f)/10;
printf("10 luk para sayısı:\n %d\n",a);
printf("20 lik para sayısı:\n %d\n",b);
printf("50 lik para sayısı:\n %d\n",c);
printf("100 lük para sayısı:\n %d\n",d);
system("pause");
return 0;

}
