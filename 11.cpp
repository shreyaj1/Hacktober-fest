/*11. Write a Program to calculate Permutation and Combination for an input value n and r using
recursive formula of nCr and nPr .*/

#include <iostream>
using namespace std;
int fact(int num)
{    int factorial=1;
	for(int i=num;i>0;i--)
	factorial=i*factorial;
	
	return factorial;
}
void comb(int num,int r)
{int res=fact(num)/(fact(r)*fact(num-r));
		cout<<"FOR COMBINATION := "<<res<<endl;
}
void perm(int num,int r)
{
	int res=fact(num)/fact(num-r);
	cout<<"FOR PERMUTATION := " <<res<<endl;
}
int main()
{
	int num,r;
	cout<<"ENTER THE TOTAL NO. OF OJECTS:"<<endl;
	cin>>num;
	cout<<"ENTER OBJECTS TO BE TAKEN:"<<endl;
	cin>>r;
	comb(num,r);
	perm(num,r);
	return 0;
}
/*OUTPUT

ENTER THE TOTAL NO. OF OJECTS:
5
ENTER OBJECTS TO BE TAKEN:
3
FOR COMBINATION := 10
FOR PERMUTATION := 60

*/
