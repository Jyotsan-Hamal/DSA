#include <stdio.h>
#include <stdlib.h>

int Binary_Search(int A[], int n,int value){
	int low,mid,high;
	low=0;
	high = n-1;
	
	while(low<=high){
		mid = (low+high)/2;
		if(A[mid]==value){
			return mid;
		}
		else if(A[mid]<value){
			low = mid+1;
		}else{
			high= mid-1;
		}
	}
	return -1;
}

int main(){
	int A[] = {10,13,45,58,78,89,90,123,145,150};
	int n = 10;
	int value = 90;
	int index = Binary_Search(A,n,value);
	
	printf("Value %d is found at index %d\n",value,index );

}