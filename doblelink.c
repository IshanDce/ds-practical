#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *rpt;
    struct node *lpt;
};
struct node *first;
void create();
void display();
void delete_front();
void delete_end();
void insert_front();
void insert_end();
void delete__middle();
void  insert_middle();
void main(){
    create();
   // display();
   //delete_front();
   //delete_end();
  //insert_front();
  //insert_end();
  delete_middle();
 // insert_middle();
   
}
void create(){
    int ch;
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value for first node \n");
    scanf("%d",&ptr->info);
    ptr->lpt=NULL;
    ptr->rpt=NULL;
    first=ptr;
    do{
        struct node *cpt;
        cpt=(struct node*)malloc(sizeof(struct node));
        printf("\n Enter the value for next node \n");
        scanf("%d",&cpt->info);
        ptr->rpt=cpt;
        cpt->lpt=ptr;
        ptr=cpt;
        printf("enter 1 for continue and 0 for exit \n");
        scanf("%d",&ch);
    }
    while(ch==1);
    ptr->rpt=NULL;
    printf("\n printing from the  first \n");
    display();
} 
void display(){
    struct node *ptr;
    ptr=first;
    while(ptr!=NULL){
        printf("%d \t",ptr->info);
        ptr=ptr->rpt;
    }
}
/*void insert_front(){
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter the value for node \n ");
    scanf("%d",&ptr->info);
     ptr->lpt=NULL;
     ptr->rpt=first;
     first->lpt=ptr;
     first=ptr;
     printf("\n printing the node after insertion it in front \n ");
     display();
}
void delete_front(){
     struct node *ptr;
     ptr=first;
     first=first->rpt;
     ptr->rpt->lpt=NULL;
     free(ptr);
     printf("\n printing of an node after deletion from it front \n");
     display();
    
}*/
void delete_middle(){
    struct node *ptr;
    struct node *cpt;
    ptr=first;
    while(ptr->info!=30){
        cpt=ptr;
        ptr=ptr->rpt;
    }
    ptr->rpt->lpt=cpt;
    cpt->rpt=ptr->rpt;
    free(ptr);
    printf("\n printinf after deletion from its middle \n ");
    display();
}
