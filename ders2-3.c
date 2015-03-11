#include<stdio.h>
#include<conio.h>
int main(){
	int N,yer,X,Dizi[20],IB,IS,IM,i;
	IB=0;
	
	IM=(IB+IS)/2;
	printf("dizi eleman sayisini giriniz:");
	scanf("%d",&N);
	IS=N-1;
	printf("aradiginiz sayiyi giriniz:");
	scanf("%d",&X);
	printf("diziyi giriniz:");
	for( i=0;i<N;i++){
		scanf("%d\n",&Dizi[i]);
	}
	
	while(IB<IS && Dizi[IM]!=X){
		if(X>Dizi[IM]){
		IB=IM+1;
		}
		else{
		IS=IM-1;
		}
		IM=(IS+IB)/2;
	}
	yer=IM;
	printf("aranan eleman %d nci gozdedir!",IM+1);
	return 0;	
}

