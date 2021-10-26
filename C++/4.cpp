/*Q4.Use the functions defined in Ques 3 to find check whether the given relation is:
a) Equivalent, or
b) Partial Order relation, or
c) None*/

#include<iostream>
using namespace std;

class relation
{
public:
    int n;
    int m[5][5];
    
    void getdata();
    void printdata();
    int reflexive();
    int symmetric();
    int assymmetric();
    int transitive();
};
void relation::getdata()
{
    cout<<"Enter order of matrix"<<endl;
    cin>>n;
    cout<<"Enter matrix of order "<<n<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>m[i][j];
    } 
}

void relation::printdata()
{
    cout<<endl<<"The matrix is "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<m[i][j]<<" ";
        cout<<endl;
    }
}

int relation::reflexive()
{
    int c=0;
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(i==j)
                    {
                        if(m[i][j]==1)
                            c++;
                    }
                }
            }
            if(c==n)
                return 1;
            else
                return 0;
}

int relation::symmetric()
{
    int t=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if((m[i][j]==1)&&(m[j][i]!=1))
                    t=0;
            }
        }
    }
    return t;
}

int relation::assymmetric()
{
     int t=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if((m[i][j]==1)&&(m[j][i]==1))
                    t=0;
            }
        }
    }
    return t;
}

int relation::transitive()
{
    int t=1;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            for(int k=0;k<n;k++)
                if((m[i][j]==1)&&(m[j][k]==1)&&(m[i][k]!=1))
                    t=0;
    return t;
}


int main()
{
    relation a;
    a.getdata();
    a.printdata();
    int ch;
    cout<<"     Menu    "<<endl;
    cout<<"1. Equivalent relation"<<endl;
    cout<<"2. Partial Order relation  "<<endl;
    cout<<"3. None of these"<<endl;
    cout<<"Enter choice "<<endl;
    cin>>ch;
    int r=a.reflexive();
    int s=a.symmetric();
    int as=a.assymmetric();
    int t=a.transitive();
    int i=0,j=0;
    switch(ch)
    {
        case 1:
        {
            if(r==1&&t==1&&s==1)
            {
                cout<<"The relation is equivalent"<<endl;
				i=1;
            }
            else
                cout<<"The relation is not equivalent "<<endl;
            
        }
        case 2:
        {
            if(r==1&&as==1&&t==1)
            {
                cout<<"The relation is partial order"<<endl;//relation should be reflexive,anti-symmetric and transitive
				j=1;
            }
            else
            cout<<"The relation is not a partial order "<<endl;
            
        }
        case 3:
        {
           if(i==0&&j==0)
            cout<<"The relation is neither equivalent nor partial order"<<endl;
            
        }
    }
}
/*OUTPUT-1

Enter order of matrix
4
Enter matrix of order 4
1 0 1 0
0 1 0 1
1 0 1 0
0 1 0 1

The matrix is
1 0 1 0
0 1 0 1
1 0 1 0
0 1 0 1
     Menu
1. Equivalent relation
2. Partial Order relation
3. None of these
Enter choice
1.
The relation is equivalent
The relation is not a partial order

--------------------------------
Process exited after 36.26 seconds with return value 0
Press any key to continue . . .

OUTPUT-2

Enter order of matrix
4
Enter matrix of order 4
1 0 0 0
1 1 0 0
1 1 1 0
1 1 1 1

The matrix is
1 0 0 0
1 1 0 0
1 1 1 0
1 1 1 1
     Menu
1. Equivalent relation
2. Partial Order relation
3. None of these
Enter choice
1.
The relation is not equivalent
The relation is partial order

*/


