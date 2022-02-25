#include<stdio.h>
#include<stdlib.h>
struct n{
	int x;
	struct n *next;
};
typedef struct n node;
void bastir(node *r){
	while(r!=NULL){
		printf(" %d",r->x);
		r=r->next;
	}
}
node* ekleSirali(node *r,int x){
	if(r==NULL){
		r=(node*)malloc(sizeof(node));
		r->next=NULL;
		r->x=x;
		return r;
	}
	if(r->x >x){
		node *temp=(node*)malloc(sizeof(node));
		temp->x=x;		
		temp->next=r;
		return temp;
	}
	node *iter=r;
	while(iter->next!=NULL && iter->next->x < x ){
		iter=iter->next;
	}
	node *temp=(node*)malloc(sizeof(node));
	temp->x=x;
	temp->next=iter->next;
	iter->next=temp;
	return r;
}
int main(){
node *root;
root=NULL;
root=ekleSirali(root,400);
root=ekleSirali(root,40);
root=ekleSirali(root,4);
root=ekleSirali(root,450);
root=ekleSirali(root,50);
bastir(root);
}
