#include<stdio.h>
#include<conio.h>
int main(){
	int A[20],B[20],C[40];
	int N,M,k,i,j,l,t;
	printf("dizilerin eleman sayilarini giriniz");
	scanf("%d %d",&N,&M);
	printf("A dizisinin elemanlarini giriniz:");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	printf("B dizisinin elemanlarini giriniz:");
	for(j=0;j<M;j++){
		scanf("%d",&B[j]);
	}
	i=0;
	j=0;
	k=0;
	while(i<=N && j<=M){
		if(A[i]<B[j]){
			C[k]=A[i];
			i++;
		}else{	
		 C[k]=B[j];
		 j++;
		}
		 k++;
	}
	
	if(i>N){
		for(t=j;t<M;t++){
		
			C[k]=B[t];
				k++;
		}
	}else if(j>M){

		for(l=i;l<N;l++){
	    	C[k]=B[l];
			k++;
		}
	}
	for(i=0;i<N+M;i++)
	printf("%d\n",C[i]);
	
	
	return 0;
	
}
