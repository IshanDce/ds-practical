#include <stdio.h>
int sqt(int n){ // using binary search
    int ans;
    int mid;
    int high=n;
    int low=1;
    while(low<=high){
        mid=(high+low)/2;
        if(mid*mid<=n){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
            }
        }
        return ans;
}
void main(){
    int n;
    printf("enter the value for square root number :");
    scanf("%d",&n);
    int a=sqt(n);
    printf("%d",a);
}