#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
	int N,i,j,k=1,l;
	
	printf("Dizi eleman sayisini giriniz:");
	scanf("%d",&N);
	int *YER=(int*)malloc(N*sizeof(int));
	int *UZN=(int*)malloc(N*sizeof(int));
	int *A=(int*)malloc(N*sizeof(int));
	for(i=1;i<N+1;i++){
		scanf("%d",&A[i]);
	}
	i=1;
	j=0;
	while(i<=N){
		l=i;
		while(A[i]==A[i+1] && i<=N){
			i++;
		}
		if(l!=i){
			j++;
			YER[j]=l;
			UZN[j]=i+1-l;
		
	
		}
		i++;
	
	}
	while(k<=j){
		
		printf("\nPlatonun baslangic noktasi:%d dir",YER[k]);
		printf("\nPlatonun uzunlugu :%d dir ",UZN[k]);
		k++;
	}
	
	return 0;
}
