#include<stdio.h>

int main(){
	int arr[6];
	int x;
	int sum=0;
	int avg;
	
	for(int i=0;i<6;i++){
		printf("enter a number:");
		scanf("%d",&x);
	    arr[i]=x;
	    sum+=arr[i];
		
	}
	avg=sum/6;
	printf("sum=%d",sum);
	printf("avg=%d",avg);
	return 0;
}
