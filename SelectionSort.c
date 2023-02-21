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

void ssort(int a[],int n){
    for (int j=0;j<n;j++){
        int m =j;
        for(int i=j+1;i<n;i++){
            if (a[i]<a[m]){
                m=i;
            }

        }
        if (m!=j){
            swap(a,m,j);
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


    ssort(a,n);


    printf("Sorted");
    print(a,n);
}