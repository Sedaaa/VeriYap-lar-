#include<stdio.h>
#include<conio.h>
int main(){
	int N,M,k,i,t,j,A[50],B[50],C[100];
	printf("1.dizinin eleman sayisinin giriniz:");
	scanf("%d",&N);
	printf("2.dizinin eleman sayisini giriniz:");
	scanf("%d",&M);
	printf("\n1.dizinin elemanlarini giriniz:\n");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	printf("2.dizinin elemanlarini giriniz:\n");
	for(j=0;j<M;j++){
		scanf("%d",&B[j]);
	}
	i=0;
	j=0;
	k=0;
	while(i<N && j<M){
		if(A[i]<B[j]){
			C[k]=A[i];
			i++;
		}else{
			C[k]=B[j];
			j++;
		}
		k++;
	}
	if(i>=N){
		for(j=k-i;j<M;j++){
			C[k]=B[j];
			k++;
		}
     }	else{
		
			for(i=k-j;i<N;i++){
				C[k]=A[i];
				k++;
			}
		}
	
	printf("\nSiralanmis dizi:\n");
	
	for(t=0;t<k;t++){
		printf("%d \n",C[t]);
	}
	return 0;
}
