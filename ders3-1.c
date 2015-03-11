#include<stdio.h>
int main(){
int N,i,j,dizi[20],tmp;
printf("dizi eleman sayisini giriniz:");
scanf("%d",&N);
printf("Dizi elemanlarini giriniz:");	
	for(i=0;i<N;i++){
	  scanf("%d",&dizi[i]);
	}
	i=0;j=N-1;
	while(i<j){
		while(dizi[i]%2==1 && i<N){
			i++;
		}while(dizi[j]%2==0 && j>0){
			j--;
		}
		while(i<j){
			dizi[i]=tmp;
			dizi[i]=dizi[j];
			dizi[j]=tmp;
		}
		i++;
		j--;
	}
	for (i=0;i<N;i++){
		printf("%d ",dizi[i]);
	}
return 0;
}
