#include<stdio.h>
#include<conio.h>
int main(){
	int k,kmax,l=0,u=0;
	printf("sayiyi giriniz:");
	scanf("%d",&k);
	kmax=k;
	while(k!=1){
		l++;
		if(k%2==0){
			u++;
			k=k/2;
		}else{
			u=0;
	    	k=3*k+1;
	    	if(kmax<k)
	    	kmax=k;
		}
	
	}
	printf("k nýn max degeri %d dir",kmax);
	printf("\n 2 ye bolen sayisi %d dir",u);
	printf("\ntoplam asama %d dir",l);
	return 0;
}
