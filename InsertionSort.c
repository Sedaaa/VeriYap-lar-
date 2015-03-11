#include<stdio.h>
#include<conio.h>
int main(){
	int N,X,A[20],i,j;
	printf("Dizi eleman sayisini giriniz:");
	scanf("%d",&N);
	printf("dizi elemanlarini giriniz:");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	for	(i=1;i<N;i++){
		X=A[i];
		j=i-1;
			while(j>=0 && A[j]>X){
				A[j+1]=A[j];
				j--;
			}	
	A[j+1]=X;
	}
	printf("Dizinin siralanmis hali:");
	for(i=1;i<N;i++){
		printf("%d",A[i]);
	}

	return 0;
	
}
