#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
double ort(int A[]){
	int i;
	double top=0;
	for(i=0;i<5;i++){
		top+=A[i];
	}
	return top/5;
}
int main(){
	setlocale(LC_ALL,"Turkish");
    int i,A[5];
    for(i=0;i<5;i++){
		printf("%d.sayýyý girniz :",i+1);
		scanf("%d",&A[i]);
    }
    printf("Girilen sayýlarýn toplamý = %.3lf",ort(A));
	system("pause");
    return 0;
}
