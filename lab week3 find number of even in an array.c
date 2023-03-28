#include<stdio.h>


int oddnum(int array[],int n){
	
	if(n==0){
		return 0;
	}
	
	else if(array[n-1] %2 == 1){
		
		return 1 + oddnum(array, n-1);
	}
	
	else{
		
		return oddnum(array, n-1);
	}
	
}

int main(){
	
	int n;
	printf("how many element is the array?");
	scanf("%d",&n);
	
	int array[n],i;
	printf("enter the array elements:");
	for(i=0; i<n; i++){
		scanf("%d",&array[i]);
	}
	printf("the number of odd elemnts in the array is:%d",oddnum(array,n));	
}
