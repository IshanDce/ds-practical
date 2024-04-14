#include<stdio.h>
int occ(int arr[],int n,int x){
    int ans=-1;
    int mid;
    int low=0;
    int high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]>=x){
            ans=mid;
            high=mid-1;
        }
        if(arr[mid]<x){
            low=mid+1;
        }
    }
    return ans;
}
void main(){
    int arr[]={2,4,4,5,6,6,9,9};
   int n= sizeof (arr)/sizeof (int);
    int target;
    printf("Enter the number ");
    scanf("%d",&target);
   int b= occ(arr,n,target);
    printf("%d",b); 
}