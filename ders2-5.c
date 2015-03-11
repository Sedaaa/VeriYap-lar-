#include<stdio.h>
#include<conio.h>
int main(){
	int dizi[20],i,N,enb,yer;
	printf("dizi eleman sayisini giriniz:");
	scanf("%d",&N);
	printf("dizi elemanlarini giriniz:");
	for(i=0;i<N;i++){
		scanf("%d\n",&dizi[i]);
	}
	enb=dizi[0];
	for(i=1;i<N;i++){
		if(dizi[i]>enb){
		  enb=dizi[i];
		  yer=i;
		}
	}
	printf("dizinin en büyük elemani %d dir yeri ise %d dir",enb,yer+1);
	return 0;
}
