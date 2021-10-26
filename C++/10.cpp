/*10. Write a Program that generates all the permutations of a given set of digits, with or without
repetition.*/

#include<iostream>
using namespace std;

void redundancy(int a[],int n)
{
	for(int i=0;i<n;++i)
		for(int j=i+1;j<n;)
		{
			if(a[i]==a[j])
			{
				for(int k=j;k<n-1;++k)
					a[k]=a[k+1];
					
				--n;
			}
			else
				++j;
		}
	
}

int main()
{
	int n;
	cout<<"Enter the size of set ";
	cin>>n;
	int* a;
	a=new int[n];
	cout<<"Enter the set"<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int ch;
	cout<<"	Menu"<<endl;
	cout<<"1. With repetition"<<endl;
	cout<<"2. Without repetition"<<endl;
	cout<<"Enter your choice"<<endl;
	cin>>ch;
	char s;
	switch(ch)
	{
		case 1:
		{
			redundancy(a,n);
			for(int i=0;i<n;i++)
				for(int j=0;j<n;j++)
				{
					if(a[i]!=a[j])
					cout<<"{"<<a[i]<<","<<a[j]<<"} "<<endl;
				}
			
			break;
		}
		case 2:
		{
			redundancy(a,n);
			for(int i=0;i<n;i++)
				for(int j=i+1;j<n;j++)
				{
					cout<<"{"<<a[i]<<","<<a[j]<<"} "<<endl;
				}

			break;

		}
		default:
		{
			cout<<"Wrong choice"<<endl;

			break;
		}
	}
	return 0;
}
/*OUTPUT

*************************WITH REPETITION:****************************

Enter the size of set 4
Enter the set
1 2 3 4
        Menu
1. With repetition
2. Without repetition
Enter your choice
1.
{1,2}
{1,3}
{1,4}
{2,1}
{2,3}
{2,4}
{3,1}
{3,2}
{3,4}
{4,1}
{4,2}
{4,3}



**********************WITHOUT REPETITION:****************************
	
Enter the size of set 4
Enter the set
1 2 3 4
        Menu
1. With repetition
2. Without repetition
Enter your choice
2.
{1,2}
{1,3}
{1,4}
{2,3}
{2,4}
{3,4}

*/
