/*Q1.Write a Program to create a SET A and determine the cardinality of SET for an input array of
elements (repetition allowed) and perform the following operations on the SET:
a) ismember (a, A): check whether an element belongs to set or not and return value as
true/false.
b) powerset(A): list all the elements of power set of A.*/

#include<iostream>
#include<math.h>
using namespace std;
void ismember(int a1,int A1[10],int n)
{
	int i,flag=0;
	for(i=0;i<n;i++)
	{
		if(A1[i]==a1)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	cout<<"\n element is present in Set A\n";
	else
	cout<<"\n element is not present in Set A\n";
}
void power_set(int a[],int size)
{
	int psize=pow(2,size),b[]={0,0,0,0};
	cout<<"\npower set of an array : \n";
	cout<<"{ ";
	for(int i=0;i<psize;i++)
	{
		int n=0;
		for(int l=i;l>0;l=l/2)
		{
			b[n]=l%2;
			n++;
		}
		cout<<"{";
		for(int j=0;j<size;j++)
		{
			if(b[j]==1)
			{
				cout<<a[j]<<",";
			}
		}
		if(i==0)
		cout<<"},";
		else
		cout<<"\b},";
	}
	cout<<"\b}";
}
int main()
{
	int A[10],n,i,j,a;
	int count1=0,count2=0;
	cout<<"Enter the number of elements of Set A: ";
	cin>>n;
	cout<<"\n Enter the elements : ";
	for(i=0;i<n;i++)
	{
		cin>>A[i];
		count1++;
	}
	for(i=0;i<n;i++) 
	{
		for(j=0;j<n;j++)
		if(A[i]==A[j])
		break;
		if(i==j)
		count2++;
	}
	cout<<"\n The cardinality of the elements are: "<<count2;
	cout<<"\n Enter any random element: ";
	cin>>a;
	ismember(a,A,n);
	power_set(A,n);
	return 0;
}

/*OUTPUT

Enter the number of elements of Set A: 5

 Enter the elements : 1 2 3 4 5

 The cardinality of the elements are: 5
 Enter any random element: 2

 element is present in Set A

power set of an array :
{ {},{1},{2},{1,2},{3},{1,3},{2,3},{1,2,3},{4},{1,4},{2,4},{1,2,4},{3,4},{1,3,4},
{2,3,4},{1,2,3,4},{5},{1,5},{2,5},{1,2,5},{3,5},{1,3,5},{2,3,5},{1,2,3,5},{4,5},
{1,4,5},{2,4,5},{1,2,4,5},{3,4,5},{1,3,4,5},{2,3,4,5},{1,2,3,4,5}}

*-----------*------------*-----------*OUTPUT WHEN ELEMENTS ARE REPEATED*-----------*------------*-----------*

Enter the number of elements of Set A: 5

 Enter the elements : 1 2 2 3 4

 The cardinality of the elements are: 4
 Enter any random element: 3

 element is present in Set A

power set of an array :
{ {},{1},{2},{1,2},{2},{1,2},{2,2},{1,2,2},{3},{1,3},{2,3},{1,2,3},{2,3},{1,2,3},
{2,2,3},{1,2,2,3},{4},{1,4},{2,4},{1,2,4},{2,4},{1,2,4},{2,2,4},{1,2,2,4},{3,4},
{1,3,4},{2,3,4},{1,2,3,4},{2,3,4},{1,2,3,4},{2,2,3,4},{1,2,2,3,4}}

*/
