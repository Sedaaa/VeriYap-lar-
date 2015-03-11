#include<stdio.h>
#include<conio.h>
int main(){
	int N,A[20],i,j,C[20];
	printf("dizi eleman sayisini giriniz:");
	scanf("%d",&N);
	printf("Dizi elemanlarini giriniz:");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
		C[i]=0;
	}
	for(i=0;i<N-1;i++){
		for(j=i+1;j<N;j++){
			if(A[i]>A[j]){
				C[i]=C[i]+1;
			}else{
				C[j]=C[j]+1;
			}
			
		}
	}
	
	for(i=0;i<N;i++){
		printf("%d nci eleman %d \n",i,C[i]);
	}
	for(i=0;i<N;i++){
		if(C[i]==N/2){
			printf("medyan : %d",A[i]);
		}
	}
	return 0;
}
