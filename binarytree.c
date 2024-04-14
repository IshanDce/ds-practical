#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*left;
    struct node*right;
};
struct node*root;

struct node *create_node(int data){
    struct node*ptr;
    ptr=(struct node*) malloc (sizeof (struct node));
    ptr->data=data;
    ptr->left=ptr->right=NULL;
    return ptr;
}
int display(struct node*p){
    if(p==NULL){
        return 0 ;
    }
    display(p->left);
    printf("%d \t",p->data);
    display(p->right);
    return 0;
}
int height(struct node*c){
    if(c==NULL){
        return 0;
    }
    int lheight=height(c->left);
    int rheight=height(c->right);
    if(lheight>rheight){
        return lheight+1;
    }
    else{
        rheight+1;
    }
    int total(struct node*m)
    {
        static int cout=0;
        if((m->right=NULL) && (m->left=NULL))
        {
            cout++;
        }
         total(m->left);
        total(m->right);
        return cout;
    }
    
}
int sum(struct node *n){
    if(n==NULL){
        return 0;
    }
  /*  int orignal=n->data;
    n->data=sum(n->left)+sum(n->right);
    return n->data+orignal;*/
    return sum(n->left)+ sum(n->right) + n->data;
    
}

int main(){
    root=create_node(10);
    root->left=create_node(20);
    root->right=create_node(30);
    root->left->left=create_node(40);
    root->left->right=create_node(50);
    
    display(root);
  int p= sum(root);
  printf("\t %d",p);
  int h= height(root);
  printf("\t %d",h); 
  int z=total(root);
  printf("\t %d",z);
  return 0;
    
}