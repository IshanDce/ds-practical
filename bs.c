#include<stdio.h>
int bst(int arr[],int target,int n){
    int mid;
    int low=0;
    int high=n-1;
    while(low<=high){
         mid=low+(high-low)/2;
        if(arr[mid]== target){
            return mid;
        }
        if(arr[mid]<target){
            low=mid+1;
           } else{
                high=mid-1;
           }
            
        }
    
    
    return 0;
}
void main(){
     int arr[]={2,4,5,7,9};
    int n= sizeof (arr)/sizeof (int);
    int target;
    printf("enter the value u want to search ");
    scanf("%d",&target);
    
  //  printf("enter the value for array");
  //  scanf("%d",&n);
    //int arr[n];
    //printf("Enter the element for arr ");
    //for(int i=0; i<n; i++){
      //  scanf("%d",&arr[i]);
//    } 
   int b=bst( arr,target,n);
   printf("%d",b);
}