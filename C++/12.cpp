/*12. For any number n, write a program to list all the solutions of the equation x1 + x2 + x3 + ...+ xn
= C, where C is a constant (C<=10) and x1, x2,x3,...,xn are nonnegative integers using brute
force strategy.*/

#include<iostream>
using namespace std;

int fact(int n)
{    int factorial=1;
	for(int i=n;i>0;i--)
	factorial=i*factorial;
	return factorial;
}

void solution(int n, int r)
{
	int result= fact(n+r-1)/(fact(r-1) * fact(n));
	cout<<"\nSOLUTION: "<< result <<endl;
}


int main()
{
	int num,r;
	cout<<"\nx1+x2+x3+ ---------- xn=C"<<endl;
		cout<<"SOL OF THE GIVEN EQUATION IS:"<<endl;
	cout<<"\nenter the number of variables(n):";
	cin>>num;
	cout<<"\nenter the value of total sum(c<=10):";
	cin>>r;
	cout<<"\nnumber of possible solutions of the given equation is:";
	solution(num,r);
	
	return 0;
}

/*OUTPUT

x1+x2+x3+ ---------- xn=C
SOL OF THE GIVEN EQUATION IS:

enter the number of variables(n):4

enter the value of total sum(c<=10):5

number of possible solutions of the given equation is:
SOLUTION: 70

*/
