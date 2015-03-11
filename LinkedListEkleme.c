#include<stdio.h>
#include<conio.h>
int main(){
	int N,A[20],Po[20],i,k,j,Z;
	printf("N sayisini girinz:");
	scanf("%d",&N);
	printf("Dizi elemanlarini giriniz:");
	for(i=1;i<N+1;i++){
		scanf("%d",&A[i]);
	}
	printf("ID lerini giriniz:");
	for(i=0;i<N+1;i++){
		scanf("%d",&Po[i]);
	}   	
	printf("Eklemek istediginiz sayiyi giriniz:");
	scanf("%d",&Z);
   j=Po[0];
   k=0;
   while(j>0 && Z>A[j]){
   	k=j;
   	j=Po[j];
   }
 N=N+1;
 A[N]=Z;
 Po[k]=N;
 Po[N]=j;
 
 for(i=1;i<N+1;i++){
 	printf("%d\n",A[i]);
 }
}
