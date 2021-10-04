/*15. Write a Program to store a function (polynomial/exponential), and then evaluate the
polynomial. (For example store f(x) = 4n3 + 2n + 9 in an array and for a given value
of n, say n = 5, evaluate (i.e. compute the value of f(5)).*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int array[20];
	int d,power,i;
	float n,sum;
	
	cout<<"enter the degree of polynomial::";
	cin>>d;

	for(i=d;i>=0;i--)
	{
			cout<<"enter the coefficient of n^"<<i<<":";
	cin>>array[i];
	}
    cout<<"the function is=="<<endl;
	for(i=d;i>=0;i--)
	{
	if(array[i]>0 && i!=d)
	cout<<"+";
	else
	cout<<" ";
	
	 if(array[i]!=0)
	cout<<array[i]<<"n^"<<i;
	}
	cout<<"\nenter the value of n::";
    cin>>n;
	for(i=d;i>=0;i--)
	{
		sum=sum + array[i]*pow(n,i);
	}
	cout<<"\nthe sum of the function is::"<<sum;
	
			
    return 0;	
}
/*OUTPUT

enter the degree of polynomial::3
enter the coefficient of n^3:4
enter the coefficient of n^2:0
enter the coefficient of n^1:2
enter the coefficient of n^0:9
the function is==
 4n^3+2n^1+9n^0
enter the value of n::5

the sum of the function is::519

*/
