#include <stdio.h>
int a[100];

void read(int a[],int n){
    for(int i =0 ;i<n;i++){
        scanf("%d",&a[i]);
    }
}
void print(int a[],int n){
    printf("Array is :");
    for(int i = 0;i<n;i++){
        printf("%d ,",a[i]);
    }
    printf("\n");
}

void swap (int a[],int i,int j){
    int temp = a[i];
    a[i]=a[j];
    a[j]=temp;
}

void bsort(int a[],int n){
    for (int i=0 ;i<n;i++){
        for(int j =i+1;j<n;j++){
            if(a[i]>a[j]){
                swap(a,i,j);
            }
        }
    }

}

int main(){
    int n ,e,c;
    printf("Enter the limit of array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    read(a,n);
    print(a,n);
    bsort(a,n);
    printf("Sorted");
    print(a,n);
}