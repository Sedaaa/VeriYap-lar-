#include<stdio.h>
#include<conio.h>
int main(){
	int N,X,IB,IM,IS,i,A[100];
	printf("Dizi eleman sayisini giriniZ:");
	scanf("%d",&N);
	printf("Aranacak elemani giriniz:");
	scanf("%d",&X);
	printf("Arama yapilacak listeyi giriniz:");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	IB=0;
	IS=N-1;
	while(IB<IS && X!=A[IM]){
			if(X> A[IM]){
				IB=IM+1;
			}else
				IS=IM-1;
				IM=(IS+IB)/2;
	}	
	printf("Aranan girdi :%d nci indistedir",IM);
	return 0;
	
}
