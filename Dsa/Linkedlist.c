# include <stdio.h>
# include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *top;

int main(){
    int x,size;
    printf("enter size");
    scanf("%d",&size);

    for(int i=0;i<size;i++){
    printf("enter a value : ");
    scanf("%d",&x);

    struct node* newrec = (struct node *)malloc(sizeof(struct node));
    newrec->data =x;
    newrec->next = top;
    top=newrec;
    }
    for(int i=0;i<size;i++){
    printf("the value is : %d\n",top->data);
    }
    return 0;
}