#include <stdio.h>
#include <stdlib.h>

struct poly
{
    int c;
    int e;
}p1[10],p2[10],p3[10];

void read(struct poly p[],int n){
    for(int i =0;i<n;i++){
        printf("%d",i);
        scanf("%d",&p[i].c);
        scanf("%d",&p[i].e);
    }
}
void print(struct poly p[],int n){
    for(int i =0;i<n;i++){
        printf("%d x ^ %d +",p[i].c,p[i].e);
    }printf("\n");
}
int add(struct poly p1[],struct poly p2[],int n,int m,struct poly p3[]){
    int i=0,j=0,k=0;
    while (i<n && j<m){
        if(p1[i].e==p2[j].e){
            p3[k].e =p2[j].e;
            p3[k++].c =p1[i++].c+p2[j++].c;
        }
        else if(p1[i].e<p2[j].e){
            p3[k].e =p2[j].e;
            p3[k++].c =p2[j++].c;
        }
        else if(p1[i].e>p2[j].e){
            p3[k].e =p1[i].e;
            p3[k++].c =p1[i++].c;
        }

    }
    while(i<n){
        p3[k].e =p1[i].e;
        p3[k++].c =p1[i++].c;
    }
    while (j<m)
    {
        p3[k].e =p2[j].e;
        p3[k++].c =p2[j++].c;
    }
    return k;
    
}

int main(){
    int n;
    printf("Enter the no of terms :");
    scanf("%d",&n);
    read(p1,n);
    print(p1,n);
    int m;
    printf("Enter the no of terms :");
    scanf("%d",&m);
    read(p2,m);
    print(p2,m);
    int k;

    k=add(p1,p2,n,m,p3);
    print(p3,k);

}