#include<stdio.h>
#include<conio.h>
int main(){
	int k,t,u,kmax;
	printf("K sayisini giriniz:");
	scanf("%d",&k);
	kmax=k;
	u=0;
	t=0;
	while(k!=1){
		if(k%2==0){
			k=k/2;
			u++;
		}else {
			k=3*k+1;
			if(kmax<k){
				kmax=k;
			}
		}
		t++;
	}
	printf("\n2 ye :%d tane boleni vardir\n",u);
	printf("toplam bolen sayisi :%d dir\n",t);
	printf("kmax degeri :%d dir",kmax);
}
