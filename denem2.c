#include<stdio.h>
#include<conio.h>
int main(){
	int N,A[20],C[20],i,j,enb,tmp;
	printf("Eleman sayýsýný giriniz:");
	scanf("%d",&N);
	printf("dizi elemanlarýný giriniz:");
	for(i=1;i<=N;i++){
		C[i]=0;
		scanf("%d",&A[i]);
	}
	printf("\n");
	for (i=1;i<N;i++){
		for(j=i+1;j<=N;j++){
			if(A[i]>A[j]){
				C[i]++;
			}else
			C[j]++;
		}
	}
for(i=1;i<N+1;i++)
printf("%d\n",C[i]);	
printf("\n\n\n");n
enb=C[1];
for(i=1;i<N;i++){
	for(j=i+1;j<N+1;j++){
	if(C[i]>enb){
		tmp=C[i];
		C[i]=C[j];
		C[j]=tmp;
	}	
  }
}
for(i=1;i<N+1;i++)
printf("%d\n",C[i]);
return 0;
getch();
}
