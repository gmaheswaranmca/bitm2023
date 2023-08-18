#include<stdio.h>
void solve(){
	int A, B; // candies on hand
	scanf("%d%d",&A,&B);
	int Limak=0,Bob=0;
	int I = 1;
	while(Limak <= A && Bob <= B){
		if(I % 2 == 1){
			Limak += I;
		}
		else{
			Bob += I;
		}
		I++;
	}
	
	
	
	
	
	if(Limak <= A){
		printf("Limak\n");
	}
	else if(Bob <= B){
		printf("Bob\n");
	}
}
int main(){
	int T;
	scanf("%d",&T);
	while(T--){
		solve();
	}
	
}



