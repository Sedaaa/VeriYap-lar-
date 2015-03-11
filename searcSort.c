#include<stdio.h>
#include<conio.h>
int main(){
	int N,i,min,A[50],yer,j;
	printf("Dizi eleman sayisini giriniz:");
	scanf("%d",&N);
	for(i=0;i<N;i++)
	scanf("%d",&A[i]);
	
	for(i=0;i<N-1;i++){
		min=A[i];
		yer=i;
		for(j=i+1;j<N;j++){
			if(min>A[j]){
				min=A[j];
				yer=j;
			}
		}
		A[yer]=A[i];
		A[i]=min;
	}
	printf("Dizinin kucukten buyuge dogru siralanisi:");
	for(i=0;i<N;i++)
	printf("%d",A[i]);
	
	return 0;
}
