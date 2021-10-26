//Q6. Write a Program to implement Tower of Hanoi using recursion.

#include<iostream>
using namespace std;

void tower(int n1,char from,char to,char rod)
{
    if(n1==1)
    {
		cout<<" move disk 1 from rod "<< from <<" to rod "<< to <<endl;
        return ;
	}
    tower(n1-1,from,rod,to);
    cout<<" move disk "<< n1 <<" from rod "<< from <<" to rod "<< to <<endl;
    tower(n1-1,rod,from,to);
    
}

int main()
{
    int num;
    cout<<"\nEnter the no. of discs: ";
    cin>>num;
    tower(num,'x','y','z');
}

/*OUTPUT

Enter the no. of discs: 4
 move disk 1 from rod x to rod z
 move disk 2 from rod x to rod y
 move disk 1 from rod z to rod x
 move disk 3 from rod x to rod z
 move disk 1 from rod y to rod z
 move disk 2 from rod y to rod x
 move disk 1 from rod z to rod y
 move disk 4 from rod x to rod y
 move disk 1 from rod z to rod x
 move disk 2 from rod z to rod y
 move disk 1 from rod x to rod z
 move disk 3 from rod z to rod x
 move disk 1 from rod y to rod x
 move disk 2 from rod y to rod z
 move disk 1 from rod x to rod y

*/
