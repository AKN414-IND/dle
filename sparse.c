#include <stdio.h>
#include <stdlib.h>


int main(){
    int n=3,m=3,k=0,i,j;
    int a[n][m];
    printf("enter the elements");
    for(int i =0 ;i<n;i++){
        for (int j = 0; j < m; j++)
        { 
            printf("A[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
            if (a[i][j] == 0){
                k++;
            }
        }
    }
    printf("matrix \n");
    for(int i =0 ;i<n;i++){
        for (int j = 0; j < m; j++)
        { 
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    printf("sparse matrix \n");
    i=0,j=0;
    
    int c = (n*m)-k+1;
    int s[c][3];
    s[0][0]=n;
    s[0][1]=m;
    s[0][2]=c-1;
    k=1;
    for(int i =0 ;i<n;i++){
        for (int j = 0; j < m; j++)
        { 
            if (a[i][j] != 0){
                s[k][0]=i;
                s[k][1]=j;
                s[k][2]=a[i][j];
                k++;
            }
        }
    }
    for(int i= 0;i<c;i++){
        for(int j =0;j<3;j++)
        { 
            printf("%d  ",s[i][j]);
        }
        printf("\n");

    }
    


}