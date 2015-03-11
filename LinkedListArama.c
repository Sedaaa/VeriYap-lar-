#include<stdio.h>
#include<conio.h>
int main(){
	int N=6,A[20],Po[20],i,j,X;
	printf("Dizi eleman sayisini giriniz:");
	scanf("%d",&N);
	printf("Dizi elemanlarini giriniz:");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}	
	printf("dizi elemanlarinin ID lerini giriniz:");
	for(i=0;i<N+1;i++){
		scanf("%d",&Po[i]);
	}
	printf("Aradiginiz sayiyi giriniz:");
	scanf("%d",&X);
	j=Po[0];
	while(j>0 && A[j]!=X){
		j=Po[j];
	}
	if(j>0){
		printf("%d",j+1);
	}else{
		printf("yok!");
	}
	
	
	return 0;
	
}
