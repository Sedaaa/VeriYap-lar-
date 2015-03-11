#include<stdio.h>
#include<conio.h>
int main(){
	int ENB,YER,A[100],i,j,N;
	printf("Dzi eleman sayisini giriniz:");
	scanf("%d",&N);
	for(i=0;i<N;i++)
	scanf("%d",&A[i]);
	for(i=0;i<N-1;i++){
		ENB=A[i];
		YER=i;
		for(j=i+1;j<N;j++){
			if(A[j]>ENB){
				ENB=A[j];
				YER=j;
			}
		}
	}
	printf("En büyük:%d ,yeri %d",ENB,YER);
	return 0;
}
