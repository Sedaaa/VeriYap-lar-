#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main(){
     int N,i,aranan,j,*A,*link;

	printf("Dizi eleman sayisini giriniz:");
	scanf("%d",&N);
	
	A=(int*)malloc (N*sizeof(int));
	link=(int*)malloc((N+1)*sizeof(int));
	printf("Dizi elemanlarini giriniz:");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	printf("Dizi indislerini giriniz:");
	for(i=0;i<N;i++){
		scanf("%d",&link[i]);
	}
	printf("Aranan degeri giriniz:");
	scanf("%d",&aranan);
	j=link[0];
	while(j>0 && A[i]!=aranan){
		j=link[j];
	}
	if(j>0){
		printf("%d nci indistedir",j);
	}else{
		printf("Aranan eleman yoktur");
		
	}
		
return 0;
	
}
