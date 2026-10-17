#include <stdio.h>

struct circularQueue{
    int front,rear;
    int a[5];
}q;

    void insert(){
    int p,x;
    p=(q.rear+1)%5;
    if(p==q.front)
        printf("circular queue is overflow\n");
    else{
        printf("enter value: ");
        scanf("%d",&x);
        q.rear=p;
        q.a[q.rear]=x;
        if(q.front==-1)
            q.front=0;
    }
}



void del(){
    if(q.front==-1){
        printf("circular queue is underflow\n");
    }
    else{
        printf("element deleted is %d\n",q.a[q.front]);
        if(q.front==q.rear)
            {
			q.front=q.rear=-1;
		}
        else
            {
			q.front=(q.front+1)%5;}
    }
}

void display(){
    if(q.front==-1)
        printf("queue is underflow\n");
    else{
        printf("the circular queue is \n");
        int i = q.front;
        for(i=q.front;i!=q.rear;  ){
        	printf("%d ",q.a[i]);
            i=(i+1)%5;
		}
        printf("%d ",q.a[q.rear]);
        printf("\n");
    }
}

void destroy(){
    printf("queue is destroyed\n");
    q.front=q.rear=-1;
}

int main(){
    int ch;
    q.front=-1;
    
    do{
        printf("Menu \n 1.insert \n 2.delete \n 3.display \n 4.destroy \n 5.Exit\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1:insert();
            break;
            case 2:del();
            break;
            case 3:display();
            break;
            case 4:destroy();
            break;
            case 5:break;
            default:printf("invalid\n");
        }
    }
    while(ch!=5);
    return 0;
}

