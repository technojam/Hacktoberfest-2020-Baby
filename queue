#include <iostream>
using namespace std;
struct node
{
  int data;
  node *next;
};
class Queue
{
  private:
  node *front,*rear;
  public:
  Queue()
  {
    front=NULL;
    rear=NULL;
  }
  void enque()
  {
   printf("\n");
  }
  void insert(int value)
  {
    node *newnode=new node;
    newnode->data=value;
    newnode->next=NULL;
      if(front==NULL)
      {
        front=rear=newnode;
      }
    else
    {
      rear->next=newnode;
      rear=newnode;
    }
  }
  void Delete()
  {
    if(front==NULL )
      cout<<"Underflow"<<endl;
    else
    { 
    node *temp;
    temp=front;
    front=front->next;
    free(temp);
    }
  }
  void display()
  {
    node *temp;
    temp=front;
    while(temp!=NULL)
    {
      cout<<temp->data<<"->";
      temp=temp->next;
    }
    cout<<endl;
  }
};
int main()
{
  int ch,data;
  Queue q;
  do
  {
    cin>>ch;
    switch(ch)
    {
      case 1:
       {
         cin>>data;
         q.insert(data);
         break;
       }
      case 2:
        q.Delete();
        break;
      case 3:
        q.display();
        break;
    }
  }while(ch!=0);
 return 0;
}
