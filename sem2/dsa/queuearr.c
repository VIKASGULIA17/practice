#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX],front=-1,rear=-1;
void sq();
void s_insrt();
void s_del();
void s_trav();
void dq();
void d_insrt();
void d_del();
void d_trav();

struct Que{
	int num;
	struct Que *next;
};
typedef struct Que * nptr;
typedef struct Que Que;
struct Que * d_front=NULL;
struct Que * d_rear=NULL;
void main(){
	int mech;
	char mchoice;
	printf("\n****Enrl No. - 05813702023****\n");
	do{
		printf("\n***** MENU *****");
		printf("\n\n1. Static Linear Queue");
		printf("\n2. Dynamic Linear Queue");
		printf("\n3. Quit");
		printf("\n\nEnter your choice : ");
		scanf("%d",&mech);
		switch(mech){
		case 1:
			sq();
			break;
		case 2:
			dq();
			break;
		case 3:
			exit(0);
		default:
			printf("\nYou have entered wrong choice !!!!! ");
		}
		printf("\nDo you want to continue y/n : ");
		scanf("%c",&mchoice);
	}while(mchoice=='y'|| mchoice=='Y');
	getch();
}

void s_insrt(){
	int item;
	printf("Enter the element : ");
	scanf("%d",&item);
	if(rear==(MAX-1)){
		printf("Queue is full");
	}
	else{
		if(front==-1){
			front=rear=0;
		}
		else{
			rear+=1;
		}
		queue[rear]=item;
	}
}

void s_del(){
	int val;
	if(front==-1){
		printf("Queue is empty");
	}
	else{
		val=queue[front];
		if(front==rear){
			front=rear=-1;
		}
		else{
			front+=1;
		}
		printf("%d is deleted",val);
	}
}

void s_trav(){
	int i;
	if(front==-1){
		printf("Queue is empty");
	}
	else{
		i=front;
		while(i<=rear){
			printf("%d ",queue[i]);
			i++;
		}
	}
}

void sq(){
	int ch;
	char choice;
	do{
		printf("\n1> Insert");
		printf("\n2> Delete");
		printf("\n3> Traverse");
		printf("\n4> Quit");
		printf("\n\nEnter your choice : ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				s_insrt();
				break;
			case 2:
				s_del();
				break;
			case 3:
				s_trav();
				break;
			case 4:
				exit(0);
			default:
				printf("\nYou have entered wrong choice !!!!! ");
		}
		printf("\nDo you want to continue y/n : ");
		scanf("%s",&choice);
	}while(choice=='y'||choice=='Y');
}

void d_insrt(){
	int item;
	nptr p,q;
	p=(nptr)malloc(sizeof(Que));
	printf("Enter the data : ");
	scanf("%d",&item);
	p->num=item;
	if(d_front==NULL){
		p->next=d_front;
		d_front=d_rear=p;
	}
	else{
		q=d_front;
		while(q->next!=NULL){
			q=q->next;
		}
		q->next=p;
		p->next=NULL;
		d_rear=p;
	}
}

void d_del(){
	nptr p,q;
	if(d_front==NULL){
		printf("Queue is empty");
	}
	else{
		p=d_front;
		printf("%d is deleted",p->num);
		if(p==d_rear){
			p=d_rear=NULL;
		}
		else{
			p=p->next;
		}
		free(p);
	}
}

void d_trav(){
	nptr p;
	p=d_front;
	while(p!=d_rear){
		printf("%d ",p->num);
		p=p->next;
	}
	printf("%d ",p->num);
}

void dq(){
	int dch;
	char dchoice;
	do{
		printf("\n1> Insert");
		printf("\n2> Delete");
		printf("\n3> Traverse");
		printf("\n4> Quit");
		printf("\n\nEnter your choice : ");
		scanf("%d",&dch);
		switch(dch){
			case 1:
				d_insrt();
				break;
			case 2:
				d_del();
				break;
			case 3:
				d_trav();
				break;
			case 4:
				exit(0);
			default:
				printf("\nYou have entered wrong choice !!!!! ");
		}
		printf("\nDo you want to continue y/n : ");
		scanf("%s",&dchoice);
	}while(dchoice=='y'||dchoice=='Y');
}
