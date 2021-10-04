/*14. Write a program to accept an input n from the user and graphically represent the values of
T(n) where n varies from 0 to n for the recurrence relations. For e.g. T(n) = T(n-1) + n,
T(0) = 1, T(n) = T(n-1) + n^2, T(0) =1, T(n) = 2*T(n)/2 + n, T(1)=1.*/

#include <iostream>
using namespace std;
int func(int n)
{
	if(n==0)
	return 1;
	else return func(n-1)+n;
}
int func1(int n)
{
	if(n==0)
	return 1;
	else return func1(n-1)+n*n;
}
int func2(int n)
{
	if(n==0)
	return 1;
	else
	return 2*func2(n/2)+n;
}
int main()
{int ch;
	int num,res,res1,res2;
	
	do 
	{	cout<<"value of recurrence relation"<<endl;
		cout<<"enter your value between 1 2 & 3 only:"<<endl;
		cin>>num;
		switch(num)
{
	
		case 1:{
		cout<<"T(n)=T(n-1)+n"<<endl;
	for(int i=0;i<=num;i++)
	{
		res=func(i);
		cout<<"T("<<i<<")="<<res<<endl;
	}
	break;
}
	case 2:
	{
	
		cout<<"Tn=T(n-1)+n*n"<<endl;
		for(int i=0;i<=num;i++)
	{
	
	res1=func1(i);
		cout<<"T("<<i<<")="<<res1<<endl;
	}break;
	}
	case 3:
		{
		
		cout<<"Tn=2*T(n)/2+n"<<endl;
		for(int i=0;i<=num;i++)
		{
		res2=func2(i);
		cout<<"T("<<i<<")="<<res2<<endl;
		}break;}
		default:cout<<"**invalid choice**"<<endl;
	}
	cout<<"do you want to continue yes/no"<<endl;
	cout<<"if yes then type 1 or if no then type 0 := "<<endl;
	cin>>ch;
	}
	while(ch==1);
}

/*OUTPUT

value of recurrence relation
enter your value between 1 2 & 3 only:
1
T(n)=T(n-1)+n
T(0)=1
T(1)=2
do you want to continue yes/no
if yes then type 1 or if no then type 0 :=
1
value of recurrence relation
enter your value between 1 2 & 3 only:
2
Tn=T(n-1)+n*n
T(0)=1
T(1)=2
T(2)=6
do you want to continue yes/no
if yes then type 1 or if no then type 0 :=
1
value of recurrence relation
enter your value between 1 2 & 3 only:
3
Tn=2*T(n)/2+n
T(0)=1
T(1)=3
T(2)=8
T(3)=9
do you want to continue yes/no
if yes then type 1 or if no then type 0 :=
0

*/
