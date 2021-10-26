/*Q2.Create a class SET and take two sets as input from user to perform following SET
Operations:
a) Subset: Check whether one set is a subset of other or not.
b) Union and Intersection of two Sets.
c) Complement: Assume Universal Set as per the input elements from the user.
d) Set Difference and Symmetric Difference between two SETS
e) Cartesian Product of Sets.*/

#include<iostream>
using namespace std;
class set
{
	public:
		bool subset(int a[],int b[],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		int flag=0;
		for(int j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			return false;
		}
	}
	return true;
}
void dublicate(int x[],int &size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(x[i]==x[j])
			{
				for(int k=j+1;k<size;k++)
				{
					x[k-1]=x[k];
				}
				size--;
			}
		}
	}
}
int UnIoN(int a[],int b[],int uni[],int m,int n)
{
	for(int i=0;i<n+m;i++)
	{
		if(i<m)
		uni[i]=a[i];
		else
		uni[i]=b[i-m];
    }
    int l=m+n;
	dublicate(uni,l);
	cout<<"\nunion of a and b :\n";
	for(int i=0;i<l;i++)
	{
		cout<<uni[i]<<"\t";
	}
	return l;
}
int intersection(int a[],int b[],int in[],int m,int n)
{
	int p=0;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				in[p]=b[j];
				p++;
				break;
			}
		}
	}
	cout<<"\nintersection of a and b : \n";
	for(int i=0;i<p;i++)
	{
		cout<<in[i]<<"\t";
	}
	return p;
}
void difference(int a[],int b[],int d[],int m,int n,int &q)
{
	q=0;
	for(int i=0;i<m;i++)
	{
		int flag=0;
		for(int j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				flag=1;
				break;
			}
			
		}
		if(flag==0)
		{
			d[q]=a[i];
			q++;
		}
	}
}
void cartesian(int a[],int b[],int m,int n)
{
	cout<<"\ncartesian product : \n{ ";
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"["<<a[i]<<" , "<<b[j]<<" ],";
		}
		cout<<"\b,";
	}
	cout<<"\b }";
}
};
int main()
{
	set s;
	int m,n,p,a[20],b[20],uni[20],in[20],universal[20],choice,choice2=1,x,y;
	cout<<"enter the  number of element of set a : ";
	cin>>m;
	cout<<"\nenter the elements of a : ";
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	s.dublicate(a,m);
	cout<<"enter the  number of element of set b : ";
	cin>>n;
	cout<<"\nenter the elements of b : ";
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
    s.dublicate(b,n);
	cout<<"\ncardinality of a set A : "<<m;
	cout<<"\ncardinality of set B : "<<n;
	while(choice2)
	{
	cout<<"\n\t\tMENU";
	cout<<"\n1. subset";
	cout<<"\n2. union and intersection";
	cout<<"\n3. complement";
	cout<<"\n4. set difference and symmetric difference";
	cout<<"\n5. cartesian product";
	cout<<"\nenter your choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1:{
		bool ch=s.subset(a,b,m,n);
	  	if(ch==true)
		cout<<"\nA is a subset of B";
		else
		cout<<"\nA is not a subset of B";
		ch=s.subset(b,a,n,m);
		if(ch==true)
		cout<<"\nB is a subset of A";
		else
		cout<<"\nB is not a subset of A";
		break;
		}
		case 2:x=s.UnIoN(a,b,uni,m,n);
		       y=s.intersection(a,b,in,m,n);
		       break;
		case 3:{
			cout<<"\nenter the size of universal set :";
			   cin>>p;
			   cout<<"\nenter the elements of universal set : ";
			   int universal[20];
			   for(int i=0;i<p;i++)
			   cin>>universal[i];
			   int comp[20];
			   int q=0;
			   s.difference(universal,a,comp,p,m,q);
			   cout<<"\ncomplement of set a : \n";
			   for(int i=0;i<q;i++)
			   {
			   	cout<<comp[i]<<"\t";
			   }
			   break;
		}
		case 4:{int set_differ_ab[20],set_differ_ba[20],sym_differ[20],q=0;
		       s.difference(a,b,set_differ_ab,m,n,q);
			   cout<<"\nset difference of two sets(A-B) :\n";
			   for(int i=0;i<q;i++)
			   {
					cout<<set_differ_ab[i]<<"\t";			   	
			   }
			   q=0;
			   s.difference(b,a,set_differ_ba,n,m,q);
			   cout<<"\nset difference of two sets(B-A) :\n";
			   for(int i=0;i<q;i++)
			   {
					cout<<set_differ_ba[i]<<"\t";			   	
			   }
			   q=0;
			   s.difference(uni,in,sym_differ,x,y,q);
			   cout<<"\nsymmeteric difference of two sets :\n";
			   for(int i=0;i<q;i++)
			   {
					cout<<sym_differ[i]<<"\t";			   	
			   }
			   break;
		}
		case 5:s.cartesian(a,b,m,n);
		       break;
		default:cout<<"\nwrong choice....";	   	   
	}
	cout<<"\ndo you want to continue(yes-1 & no-0) : ";
	cin>>choice2;
}
	
	return 0;
}

/*OUTPUT

enter the  number of element of set a : 4

enter the elements of a : 1 2 3 4
enter the  number of element of set b : 5

enter the elements of b : 1 2 3 4 5

cardinality of a set A : 4
cardinality of set B : 5
                MENU
1. subset
2. union and intersection
3. complement
4. set difference and symmetric difference
5. cartesian product
enter your choice : 1

A is a subset of B
B is not a subset of A
do you want to continue(yes-1 & no-0) : 1

                MENU
1. subset
2. union and intersection
3. complement
4. set difference and symmetric difference
5. cartesian product
enter your choice : 2

union of a and b :
1       2       3       4       5
intersection of a and b :
1       2       3       4
do you want to continue(yes-1 & no-0) : 1

                MENU
1. subset
2. union and intersection
3. complement
4. set difference and symmetric difference
5. cartesian product
enter your choice : 3

enter the size of universal set :6

enter the elements of universal set : 1 2 3 4 5 6

complement of set a :
5       6
do you want to continue(yes-1 & no-0) : 1

                MENU
1. subset
2. union and intersection
3. complement
4. set difference and symmetric difference
5. cartesian product
enter your choice : 4

set difference of two sets(A-B) :

set difference of two sets(B-A) :
5
symmeteric difference of two sets :
5
do you want to continue(yes-1 & no-0) : 1

                MENU
1. subset
2. union and intersection
3. complement
4. set difference and symmetric difference
5. cartesian product
enter your choice : 5

cartesian product :
{ [1 , 1 ],[1 , 2 ],[1 , 3 ],[1 , 4 ],[1 , 5 ],[2 , 1 ],[2 , 2 ],[2 , 3 ],[2 , 4 ],[2 , 5 ],[3 , 1 ],
[3 , 2 ],[3 , 3 ],[3 , 4 ],[3 , 5 ],[4 , 1 ],[4 , 2 ],[4 , 3 ],[4 , 4 ],[4 , 5 ] }
do you want to continue(yes-1 & no-0) : 0

*/
