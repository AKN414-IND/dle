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

void insort(int a[],int n){
    for (int i =0;i<n;i++){
        int key = a[i];
        int j=i-1;
        while(j >= 0 && a[j]>key){
            a[j+1]=a[j];
            j=j-1 ;
        }
        a[j+1]=key;
    }
}

int main(){
    int n ,e,c;
    printf("Enter the limit of array:");
    scanf("%d",&n);
    printf("Enter the elements:");
    read(a,n);
    print(a,n);


    insort(a,n);


    printf("Sorted");
    print(a,n);
}