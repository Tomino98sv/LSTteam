#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 9
int main(){
	
	srand(time(NULL));
	int x,y;
	for(int i=1; i<N; i++){
		y=rand()%3;
		if(y==1){
			x=rand()%26+65;
			printf("\t %c",x);	
		}else if(y==0){
			x=rand()%26+97;
			printf("\t %c",x);
		}else{
			x=rand()%10;
			printf("\t %d",x);
		}
		
	}
	
	
	
}
