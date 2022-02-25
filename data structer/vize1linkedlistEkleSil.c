#include<stdio.h>
#include<stdlib.h>
struct n{
	int data;
	struct n *next;
};
typedef struct n node;
node *root=NULL;
void bastir(node *r){
	while(r!=NULL){
		printf(" %d",r->data);
		r=r->next;
	}
	printf("\n");
}
node *ekleSirali(node *r,int x){
	//linked listin bo� olma durumu
	if(r==NULL){
		r=(node*)malloc(sizeof(node));
		r->data=x;
		r->next=NULL;
		return r;
	}
	//g�nderdi�imiz eleman linked listin ilk eleman�ndan k���kse
	if(r->data>x){
		node *temp=(node*)malloc(sizeof(node));
		temp->data=x;
		temp->next=r;
		return temp;
	}
	//linked listin ortas�na ya da sonuna eleman ekleme
	node*iter=r;
	while(iter->next!=NULL &&iter->next->data<x){
		iter=iter->next;
	}
	node*temp=(node*)malloc(sizeof(node));
	temp->data=x;
	temp->next=iter->next;
	iter->next=temp;
	return r;
}
node *sil(node *r,int x){
	//linked listin ilk eleman�n� silme
	if(r->data==x){
	node *temp=r;
	r=r->next;
	free(temp);
	return r;
	}
	//linked listin ortas�nda ya da sonunda eleman silme
	node *iter=r;
	while(iter->next==NULL && iter->next->data!=x){
		iter=iter->next;
	}
	node*temp=iter->next;
	iter->next=iter->next->next;
	free(temp);
	return r;
}
int main(){
root=ekleSirali(root,400);
root=ekleSirali(root,40);
root=ekleSirali(root,4);
root=ekleSirali(root,450);
root=ekleSirali(root,50);
bastir(root);
root=sil(root,4);
root=sil(root,450);
bastir(root);
}
