#include<stdio.h>
#include<stdlib.h>
struct n{
	int data;
	struct n *next;
};
typedef struct n node;
void bastir(node *r){
	node *iter=r;
	printf("%d ",iter->data);
	iter=iter->next;
	while(iter!=r){
		printf("%d ",iter->data);
		iter=iter->next;
	}
	printf("\n");
}
node *ekleSirali(node *r,int x){
	//linked list boþsa
	if(r==NULL){
		r=(node*)malloc(sizeof(node));
		r->next=r;
		r->data=x;
		return r;
	}
	//eklenecek eleman linked listin ilk elemanýndan küçükse
	if(r->data>x){
		node *temp=(node*)malloc(sizeof(node));
		temp->data=x;
		temp->next=r;
		node*iter=r;
		while(iter->next!=r){
			iter=iter->next;
		}
		iter->next=temp;
		return temp;
	}
	//linked listin ortasýna ya da sonuna ekleme
	node* iter=r;
	while(iter->next!=r&&iter->next->data<x){
		iter=iter->next;
	}
	node *temp=(node*)malloc(sizeof(node));
	temp->next=iter->next;
	iter->next=temp;
	temp->data=x;
	return r;
}
node *sil(node *r,int x){
	node*temp;
	node *iter=r;
	if(r->data==x){
		while(iter->next!=r){
			iter=iter->next;
		}
		iter->next=r->next;
		free(r);
		return iter->next;
	}
	while(iter->next!=r&& iter->next->data!=x){
		iter=iter->next;
	}
	temp=iter->next;
	iter->next=iter->next->next;
	free(temp);
	return r;
}
int main(){
node *root=NULL;
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


