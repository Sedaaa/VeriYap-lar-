#include<stdio.h>
#include<conio.h>
int main(){
	int A[20],Po[20],N,Y,i,j,k;
	printf("eleman sayisini giriniz:");	
	scanf("%d",&N);
	printf("dizi elemanlarini giriniz:");
	for(i=1;i<N+1;i++){
		scanf("%d",&A[i]);
	}
	printf("elemanlarin ID nolarini giriniz:");
	for(i=0;i<N+1;i++){
		scanf("%d",&Po[i]);
	}
	printf("silinecek elemani giriniz:");
	scanf("%d",&Y);
	j=Po[0];
	k=0;
	while(j>0 && Y!=A[j]){
		k=j;
		j=Po[j];
	}
	Po[k]=Po[j];
	Po[j]=-9;
	for(i=1;i<N+1;i++){
		printf("%d\n",Po[i]);
	}
	return 0;
}
