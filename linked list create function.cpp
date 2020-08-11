#include<iostream>
using namespace std;

    class list
{
    struct node
    {
        float info;
        struct node *ptr;
    }*head,*temp,*first,*last;
public:
    list()
    {
        first=NULL;
        last=NULL;
    }
    void add()
{
    char ch;
    do
    {
        struct node* head=new node;
        cout<<"\nEnter data to be entered in the list ";
        cin>>head->info;
        head->ptr=NULL;
        if(first==NULL)
        {
            first=head;
            last=head;
        }
        else
        {
            last->ptr=head;
            last=head;
        }
        cout<<"\nWant to enter more ?? ";
        cin>>ch;
    }while(ch=='Y'||ch=='y');
}
    void display()
    {
        cout<<"The list is as follows : ";
        temp=first;
        while(temp!=NULL)
        {
         cout<<temp->info<<" ";
         temp=temp->ptr;
        }
    }
};
    int main()
    {
        list a1;
        a1.add();
        a1.display();
    }

