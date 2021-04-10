#include <stdio.h>
#include <stdlib.h>
#define MAX 3000
int main(){ 
	static int n,i,j=1,input[MAX],diff[MAX];
	while(scanf("%d",&n) == 1){
		for(i=0;i<n;i++){
			scanf("%d",&input[i]);
			diff[i] = 0;        
		}
		for(i=0;i<n-1;i++)		diff[abs(input[i]-input[i+1])] = 1;
		for(i=1;i<n;i++){
			if(diff[i]==0){
				j=0;
				break;
			}
		}
		if(j)	printf("Jolly\n");
		else 	printf("Not jolly\n");
	}
	return 0;
}	