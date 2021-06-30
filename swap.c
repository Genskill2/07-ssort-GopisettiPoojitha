#include<stdio.h>
#include<cs50.h>
void swap_max(int arr[], int l, int n){
	int max=arr[n];
	int pos=n;
	for(int i=n;i<l;i++){
	  if(arr[i]>max){
		max=arr[i];
		pos=i;
		}
	}
	arr[pos]=arr[n];
	arr[n]=max;
}	

void ssort(int arr[], int l){
	for(int i=0; i<l;i++){
	swap_max(arr, l, i);
	}
	printf("the sorted array is \n|");
	for(int i=0; i< l;i++)
	printf(" %i |",arr[i]);
	printf("\n");
}	
