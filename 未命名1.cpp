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
	node  *head=NULL,*s=NULL,*p;
	head=new node;
	head->data=0;
	head->next=NULL;
	while(n--)
	{
	
		s=new node;
		cin>>s->data;
		if(head!=NULL)
		{
			s->next=head;
			head=s;
		}
		else
		{
			head->next=s;
			s->next=NULL;
		}
	
	}
	p=head;
	while(p->next!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	//	head=head->next;
	}
}
