#include<bits/stdc++.h>

using namespace std;

class node
{
    public:
    int data;
    node *link;
    node (int val){
        data =val;
        link = NULL; 
    }
};
node *head;

void pushVect(vector<int>a,int n,int val)
{
    node *x, *last;
    head=new node(val);
    head->data=a[0];
    head->link=0;
    last=head;

    for(int i=1;i<n;i++){
        x=new node(val);
        x->data=a[i];
        x->link=0;
        last->link=x;
        last=x;
    }
}
void Make_Reversed_Linked_List(vector<int>a,int n){
    
    node *prev,*curr,*nxt;
    prev = NULL;
    curr=head;
    while(curr!=NULL)
    {
        nxt=curr->link;
        curr->link=prev;
        prev=curr;
        curr=nxt;
    }
    head=prev;

};

void display(){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->link;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    int n,i;
    cin>>n;
    vector<int>a(n);
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    pushVect(a,n,2);
    Make_Reversed_Linked_List(a,n);
    display();
    return 0;
}  

