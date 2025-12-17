#include<stdio.h>
#include <stdlib.h>
#include <locale.h>
int main( void ) {
setlocale(LC_ALL,"Turkish");
int A[3][3];
int i,j;
for(i=0;i<3;i++) {
	printf( "%d no lu ogrencinin : \n",i+1);
    for(j=0;j<3;j++) {
      printf( "%d no lu sýnavý =  ",j+1);
      scanf( "%d",&A[i][j]);
    }
}
printf("\n");
for( i = 0; i < 3; i++ ) {
	printf( "%d no lu ogrencinin : ",i+1);
    for( j = 0; j < 3; j++ ) {
      printf( "%d no lu sýnavý = %d\t ",j+1,A[i][j]);
    }
    printf("\n");
 }
system("pause");
return 0;
}
