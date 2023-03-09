#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
int main()
{
	int n;
	cin>>n;
	node  *head=NULL,*s=NULL,*p,*q;
	while(n--)
	{
	
		s=new node;
		cin>>s->data;
		if(head!=NULL)
		{
			p->next=s;
		
		}
		else
		{
			head=s;
			s->next=NULL;
		}
		p=s;
	}
	p->next=NULL;
	q=head;
	while(q!=NULL)
	{
		cout<<q->data<<" ";
		q=q->next;
	//	head=head->next;
	}
}
