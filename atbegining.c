#include<stdio.h>
int main(){
    int i,n,m,temp;
    printf("enter size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter element of array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter new element for insert at begining\n");
    scanf("%d",&m);
    for(i=n;i>=0;i--){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    arr[0]=m;
    printf("updated element are:\n");
    for(i=0;i<=n;i++){
        printf("%d",arr[i]);
    }}
