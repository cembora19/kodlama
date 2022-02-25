#include<stdio.h>
#include<stdlib.h>
int rvalue;
struct n{
	int data;
	struct n *next;
};
typedef struct n node;
node *root=NULL;
void bastir(node *root){
	while(root!=NULL){
		printf("&d ->",root->data);
		root=root->next;
	}
}
node *push(node *root,int x){
	if(root==NULL){
		root=(node*)malloc(sizeof(node));
		root->data=x;
		root->next=NULL;
		return root;
	}
	node *iter=root;
	while(iter->next!=NULL){
		iter=iter->next;
	}
	node *temp=(node*)malloc(sizeof(node));
	temp->data=x;
	iter->next=temp;
	temp->next=NULL;
	return root;
}
node *pop(node *root){
	if(root==NULL){
		printf("empty stack");
		return -1;
	}
	if(root->next==NULL){
		rvalue=root->data;
		free(root);
		return rvalue;
	}
	node *iter=root;
	while(iter->next->next!=NULL){
		iter=iter->next;
	}
	node *temp=iter->next;
	rvalue=temp->data;
	iter->next=NULL;
	free(temp);
	return rvalue;
}
int main(){
	root=push(root,10);
	root=push(root,20);
	root=push(root,30);
	root=push(root,40);
	root=push(root,50);
	bastir();
	printf("popped %d",pop(root));
	printf("popped %d",pop(root));	
	printf("popped %d",pop(root));	
	printf("popped %d",pop(root));	
	printf("popped %d",pop(root));	
	bastir();
}
