#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node *link;
};

typedef Node* nodePtr;

void insertNode(nodePtr&, int);

int main()
{
	
	Node headNode;
	
	nodePtr head;
	head = new Node;
	
	head ->data = 20;
	head ->link = NULL;
	
	cout << head ->data << endl;
	
	insertNode(head, 30);
	nodePtr tmp;
	tmp = head;
	
	while(tmp != NULL)
	{
		cout << tmp->data<<endl;
		tmp = tmp->link;
		
	}
}

void insertNode(nodePtr& head, int data)
{
	
	nodePtr tempPtr;
	tempPtr = new Node;
	tempPtr->data = data;
	tempPtr->link = head;
	head = tempPtr;
	
}
