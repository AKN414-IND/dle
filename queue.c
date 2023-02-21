#include <stdio.h>
#include <stdlib.h>

struct node
{
    int d;
    struct node * link;
};

struct node * rear = NULL,*front = NULL;

void enqueue(int x){
    struct node * new;
    new =(struct node * )malloc(sizeof(struct node));
    new->d = x;
    new->link=NULL;
    if(front == NULL){
        front = rear = new;
    }
    else {
        rear->link=new;
        rear=new;
    }
    
}

void DEGUEUE(){
    struct node *temp;
    temp =(struct node *)malloc(sizeof(struct node));
    temp = front;
    if(front == NULL){
        printf("Empty");
    }
    else if (front == rear){
        free(temp);
        front=NULL;
        rear=NULL;
    }
    else{
        front=front->link;
        free(temp);
    }
}
void display()
{
    struct node *ptr;
    if(front==NULL)
        printf("\nQueue is empty...");
    else
    {
        ptr=front;
        printf("\nQueue elements are: ");
        while(ptr!=NULL)
        {
            printf("%d-->",ptr->d);
			ptr=ptr->link;
			if (ptr==NULL)
				printf("NULL");
        }
    }
}
int main()
{
    int opt,x;
    do
    {
        printf("\nEnter the option\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1: printf("Enter the new data: ");
                    scanf("%d",&x);
                    enqueue(x);
                    break;
            case 2: DEGUEUE();
                    break;
            case 3: display();
        }
    }while(opt!=4);
}