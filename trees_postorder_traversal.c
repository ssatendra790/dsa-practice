#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create(int data){
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}


void postorder(struct node *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
    
}
int main(){
    struct node *p = create(4);
    struct node *p1 = create(1);
    struct node *p2 = create(6);
    struct node *p3 = create(5);
    struct node *p4 = create(2);
      
      p->left=p1;
      p->right=p2;
      p1->left=p3;
      p1->right=p4;
    
    postorder(p);

    return 0;
}