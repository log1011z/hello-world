#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node* next;
};
void creatlist(node*&head)
{
	node* s, * p;
	s = new node;
	cin >> s->data;
	while (s->data != 0)
	{
		if (head == NULL)
			head = s;
		else
			p->next = s;
		p = s;
		s = new node;
		cin >> s->data;
	}
	p->next = NULL;
	delete s;
	return;
}
void showlist(node* head)
{
	while (head)
	{
		cout << head->data << " ";
		head = head->next;
	}
}
int main()
{
	node* head = NULL;
	creatlist(head);
	showlist(head);

}
