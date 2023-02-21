#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

struct node *top;

int push(){
    struct node * new ;
    new = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data");
    scanf("%d",&new->data);
    new->link=top;
    top = new; 
    return 0;
}

int pop(){
    struct node * temp ;
    if(top == NULL){printf("empty");}
    else{
        temp =top ;
        printf("data deletecl :%d",(temp->data));
        top=top->link;
        free(temp);}
        return 0;}

int display(){
    struct node * temp;
    temp = top;
    if(top == NULL){printf("Empty");}
    else{
        while(temp!=NULL){
            printf("%d->",temp->data);
            temp =temp->link;
            if(temp==NULL){
                printf("NULL");
            }
        }
    }
    return 0;
}
int main(){
    printf("Option\n1:push\n2:pop\n3:display\n4:exit\n");
    printf("Enter the option :");
    int op=0;
    
    while(op!=4){
        scanf("%d",&op);
        if(op == 1){
            push();
        }
        else if(op == 2){
            pop();
        }
        else if(op == 3){
            display();
        }
        else{
            printf("Invalid");
        }


    }
}