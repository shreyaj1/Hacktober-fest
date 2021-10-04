/*Q3.Create a class RELATION, use Matrix notation to represent a relation. Include functions to
check if a relation is reflexive, Symmetric, Anti-symmetric and Transitive. Write a Program
to use this class.*/

#include<iostream>
using namespace std;
class Relations
{
	private:
		int n;
		char A[50];
		int matrix[20][20];
	public:
		void EnterMat();
		void Setinput();
		void display();
		int reflexive();
		int transitive();
		int symmetric();
		int antisymmetric();
	
};

void Relations::Setinput()
{
	cout<<"ENTER THE SIZE OF THE SET: ";
	cin>>n;
	cout<<"ENTER THE ELEMENTS OF THE SET: "<<endl;
	for (int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	cout<<endl;
}

void Relations::EnterMat()
{
	cout<<"ENTER THE INPUT IN FORM OF 1 AND O FOR THE ORDERED THAT EXISTS AND THAT NOT RESPECTIVELY"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<"Enter element "<<i<<j<<":\t";
			cin>>matrix[i][j];
			if (matrix[i][j]!=1 and matrix[i][j]!=0)
				matrix[i][j]=0;
		}
	}
}

void Relations::display()
{
	cout<<"MATRIX IS :"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
}

int Relations::reflexive()
{
	int count=0;
	for (int i = 0; i <n; i++) 
    {
    	for (int j = 0; j < n; j++) 
    	{
    		if (i == j)
    		{
    		if(matrix[i][j]==1)
    			count=count+1;
			}
        }
    }
    if(count==n)
    return 1;
    else
    return 0;
}

int Relations::symmetric()
{
	int temp=1;
	int count=0;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			if(i!=j)
			{
				if (matrix[i][j]==1&&matrix[j][i]!=1)
				temp=0;
			}
		}	
		return temp;
		count=count+1;
}

int Relations::antisymmetric()
{
	int temp=1;
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(i!=j)
			{
				if (matrix[i][j]==1&&matrix[j][i]==1)
				temp=0;
			}
		}
	}
		return temp;
		count=count+1;
}

int Relations::transitive()
{
	int temp=1;
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
			{
				if(matrix[i][j]==1&&matrix[j][k]==1&&matrix[i][k]==0)
					temp=0;
			}
		}
	}
	return temp;
	count=count+1;
}


int main()
{
	cout<<" THIS PROGRAM DETERMINES WHETHER A RELATION IS Reflexive , Symmetric , Antisymmetri or Transitive "<<endl;
	Relations r;
	r.Setinput();
	r.EnterMat();
	r.display();
	bool b=r.reflexive();
	if(b==true)
	cout<<"RELATION IS REFLEXIVE"<<endl;
	else
	cout<<"RELATION IS NOT REFLEXIVE"<<endl;
	
	bool c=r.symmetric();
	if(c==true)
	cout<<"RELATION IS SYMMETRIC"<<endl;
	else
	cout<<"RELATION IS NOT SYMMETRIC"<<endl;
	
	bool d=r.antisymmetric();
	if(d==true)
	cout<<"RELATION IS ANTI SYMMETRIC"<<endl;
	else
	cout<<"RELATION IS NOT ANTI SYMMETRIC"<<endl;
	
	bool e=r.transitive();
	if(e==true)
	cout<<"RELATION IS TRANSITIVE"<<endl;
	else
	cout<<"RELATION IS NOT TRANSITIVE"<<endl;
		
	return 0;
}

/*OUTPUT
 
 THIS PROGRAM DETERMINES WHETHER A RELATION IS Reflexive , Symmetric , Antisymmetri or Transitive
ENTER THE SIZE OF THE SET: 4
ENTER THE ELEMENTS OF THE SET:
1 2 3 4

ENTER THE INPUT IN FORM OF 1 AND O FOR THE ORDERED THAT EXISTS AND THAT NOT RESPECTIVELY
Enter element 00:       1
Enter element 01:       0
Enter element 02:       0
Enter element 03:       0
Enter element 10:       0
Enter element 11:       1
Enter element 12:       0
Enter element 13:       0
Enter element 20:       0
Enter element 21:       0
Enter element 22:       1
Enter element 23:       0
Enter element 30:       0
Enter element 31:       0
Enter element 32:       0
Enter element 33:       1
MATRIX IS :
1 0 0 0
0 1 0 0
0 0 1 0
0 0 0 1
RELATION IS REFLEXIVE
RELATION IS SYMMETRIC
RELATION IS ANTI SYMMETRIC
RELATION IS TRANSITIVE

*/











