#include<stdio.h>
void merge(int,int);
void merging();
int arr[] = {56,23,10,6,17,2};
int main(){

	int i,j,pivot,temp;
	int n = 6;
	for(i = 0; i<n; i++){
		printf(" %d ",arr[i]);
	}
	merge(0,n);
	/* insertion sort
	for(i = 1; i< n;i++){
		temp = arr[i];
		for(j=i;j>0;j--){
			if(arr[j-1]>temp){
				arr[j] = arr[j-1];
			}
		}
		arr[j]=temp;
	}
	while loop
	for(i = 1 ; i< n;i++){
		temp = arr[i];
		 j = i;
		 while(j>0 && arr[j-1]>temp){
		 	arr[j] = arr[j-1];
		 	j--;
		 }
		 arr[j]=temp;
	}*/
	printf("\n");
	printf("\n");
	for(i = 0; i<n; i++){
		printf(" %d ",arr[i]);
	}
	return 0;
}
void merge(int low,int high){
	int mid;
	if(low<high){
		mid = (low + high )/2;
		sort(low,mid);
		sort(mid+1,high);
		merging(low,mid,high);
	}else{
		return;
	}
}
void merging(int low,int mid,int high){
	int l1,l2,i;
	for(l1=low, l2=mid+1 ,i=low ; l1<=mid && l2<=high ;i++){
		if(a[l1]<=a[l2])
			b[i] = a[l1++];
		else
			b[i] = a[l2++];
	}
}
