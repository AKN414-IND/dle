#include <stdio.h>
#include <stdlib.h>


void bs(int a[],int i,int item){
    int ch,val;
    a[i]=item;
    printf("leftchild:");
    scanf("%d",&ch);
    if(ch==1){
        printf("lc=");
        scanf("%d",&val);
        bs(a,2*i,val);
    }
    printf("rightchild:");
    scanf("%d",&ch);
    if(ch==1){
        printf("rc=");
        scanf("%d",&val);
        bs(a,2*i+1,val);
    }

    
}


int main(){
    int i,a[100],item;
	for(i=0;i<100;i++)
		a[i]=-1;
	printf("\nEnter the root node:");
	scanf("%d",&item);
	bs(a,1,item);
	printf("\nTREE: ");
	for(i=1;i<=16;i++)
	{
		if(a[i]==-1)
			printf("- ");
		else
			printf("%d ",a[i]);
	}
}