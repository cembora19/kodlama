#include<stdio.h>
#include<stdlib.h>
struct n{
	int data;
	struct n *next;
	struct n *prev;
};
typedef struct n node;
void bastir(node *r){
	while(r!=NULL){
		printf(" %d",r->data);
		r=r->next;
	}
	printf("\n");
}
node *ekleSirali(node *r,int x){
	//Linked list boþsa
	if(r==NULL){
		r=(node*)malloc(sizeof(node));
		r->data=x;
		r->next=NULL;
		r->prev=NULL;
		return r;
	}
	//Eklenecek eleman linked listin ilk elemanýndan küçükse
	if(r->data>x){
		node *temp=(node*)malloc(sizeof(node));
		temp->data=x;
		r->prev=temp;
		temp->next=r;
		return temp;
	}
	//Linked Listin ortasý ya da sonu
	node *iter=r;
	while(iter->next!=NULL&&iter->next->data<x){
		iter=iter->next;
	}
	node *temp=(node*)malloc(sizeof(node));
	temp->data=x;
	temp->next=iter->next;
	iter->next=temp;
	temp->prev=iter;
	if(temp->next!=NULL){
		temp->next->prev=temp;
	}
	return r;
}
node *sil(node *r,int x){
	if(r->data==x){
		node *temp;
		temp=r;
		r=r->next;
		free(temp);
		return r;
	}
	node *iter=r;
	node *temp;
	while(iter->next!=NULL&&iter->next->data!=x){
		iter=iter->next;
	}
	temp=iter->next;
	iter->next=iter->next->next;
	free(temp);
	if(iter->next==NULL){
		iter->next->prev=iter;
	}
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
root=sil(root,50);
bastir(root);
root=sil(root,4);
bastir(root);
root=sil(root,450);
bastir(root);
}
