#include<stdio.h>
#include<conio.h>
int main(){
	int N,A[100],tmp,i,j;
	printf("Dizi eleman sayisini giriniz:");
	scanf("%d",&N);
	printf("Dizi elemanlarini giriniz:");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	i=0;
	j=N-1;
	while(i<j){
		if(A[i]%2==0){
			if(A[j]%2==0){
				
			}else{
				tmp=A[i];
				A[i]=A[j];
				A[j]=tmp;
				i++;
			}
 		    j--;
 		}else
		i++;
    }
    printf("Duzenlenmis hali:");
    for(i=0;i<N;i++){
    	printf("%d\n",A[i]);
    }
}

