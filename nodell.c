#include <stdio.h>
#include <stdlib.h>

struct node
{
    int d;
    struct node * link;
};

struct node * head = NULL;

void add(int x){
    struct node * new,*temp;
    new =(struct node *)malloc(sizeof(struct node ));
    new->d = x;
    new->link=head;
    head = new;
    
}

void count(){
    struct node *temp;
    int c=0;
    temp =(struct node *)malloc(sizeof(struct node ));
    temp = head;
    while(temp!=NULL){
        temp=temp->link;
        c+=1;
    }
    printf("no of nodes = %d",c);
}

int main(){
    int op;

    printf("Options \n1:add\n2count\n3exit");
    do{
        scanf("%d",&op);
        if(op==1){
            int e;
            printf("Enter the element :");
            scanf("%d",&e);
            add(e);
            }
        else if(op==2){
            count();
        }
        else if(op == 4 ){
            break;
        }
        else{
            printf("Invalid");
        }
        }while(op!=3);
}