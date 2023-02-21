#include <stdio.h>
int a[100];

void read(int a[],int n){
    for(int i =0 ;i<n;i++){
        scanf("%d",&a[i]);
    }
}
int print(int a[],int n){
    printf("Array is :");
    for(int i = 0;i<n;i++){
        printf("%d",a[i]);
    }
}


int bs(int a[],int n,int e){
    int l=0,h=n-1,m,c=0;
    while(l<h){
        m=(h+l)/2;
        if(a[m]==e){
            printf("Element found at index %d",m);
            return 1;
        }
        else if(a[m]>e){
            h = m-1;
        }
        else{
            h =m+1;
        }
    }
    return c;
}
int main(){
    int n ,e,c;
    printf("Enter the limit of array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    read(a,n);
    printf("Enter element to be found;");
    scanf("%d",&e);
    c = bs(a,n,e);
    if (c==0){
        printf("Element not found");
    }

}