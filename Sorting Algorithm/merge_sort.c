#include <stdio.h>

void merge(int A[],int low,int mid,int high){
	int B[100];
	int i,j,k;
	i = low;
	j = mid+1;
	k = low;
	while (i<=mid && j<=high){
		if(A[i]<A[j]){
			B[k] = A[i];
			k++;
			i++;
		}
		else{
			B[k] = A[j];
			j++;
			k++;
		}
	}

	while(i<=mid){
		B[k] = A[i];
		k++;
		i++;
	}
	while(j<=high){
		B[k] = A[j];
		k++;
		j++;
	}
	for(int i=low;i<=high;i++){
		A[i] = B[i];
	}
}
void MergeSort(int A[],int low,int high){
	if(low<high){
		int mid = (low+high)/2;
		MergeSort(A,low,mid);
		MergeSort(A,mid+1,high);
		merge(A,low,mid,high);
	}
	

}

void print_Array(int A[],int n){
	for(int i=0;i<=n;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
}
int main(){
	int size;

	do{
		printf("Enter the size of array you want to sort : \n");
		scanf("%d",&size);
	}while(size<=0);

	int A[size];
	printf("Enter numbers to be sorted \n" );
	for(int i=0;i<size;i++){
		scanf("%d",&A[i]);
	}
	
	int n = size;
	print_Array(A,n-1);
	MergeSort(A,0,n-1);
	print_Array(A,n-1);
	return 0;
}