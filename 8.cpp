/*Q8.Write a Program to implement Bubble Sort. Find the number of comparisons during each
pass and display the intermediate result. Use the observed values to plot a graph to analyse
the complexity of algorithm.*/

#include <iostream>
#include <fstream>
using namespace std;

int bubble_sort(int a[],int n)
{
	int sum=0;
	for(int i=0 ; i<n-1 ; i++)
	{
		int comp = 0;
		for(int j=0 ; j<n-i-1 ; j++)
		{
		    if(a[j]>a[j+1])
			{
			    int temp = a[j];
			    a[j] = a[j+1];
		        a[j+1] = temp;
		   }
		   comp++;
     	}
		sum+=comp;
	    cout<<"\n\nNO OF COMPARISON IN PASS "<<i+1<<" : "<<comp;
	    cout<<"\nARRAY AFTER PASS "<<i+1<<" : \n";
	    for(int k=0 ; k<n ; k++)
	    cout<<a[k]<<"\t";
    }
    cout<<"\nTOTAL NO OF COMPARISONS : "<<sum;
    cout<<"\n\nARRAY AFTER SORTING : \n";
    for(int i=0 ; i<n ;i++)
    {
    	cout<<a[i]<<"\t";
	}
	return sum;
}
int main()
{
	int n,*a = new int [n];
	bool ch;
	ofstream fout;
	fout.open("output.txt");
	do
	{
		cout<<"\nENTER THE SIZE OF AN ARRAY : ";
		cin>>n;
		cout<<"\nENTER THE ELEMENT OF AN ARRAY : ";
		for(int i=0 ; i<n ; i++)
		{
			cin>>a[i];
		}
		int x=bubble_sort(a,n);
		fout<<n<<" , "<<x<<"\n";
		cout<<"\nDO YOU WANT TO CONTINUE (YES-1 & NO-0) : ";
		cin>>ch;
	}while(ch);
	return 0;
}
/*OUTPUT

ENTER THE SIZE OF AN ARRAY : 6

ENTER THE ELEMENT OF AN ARRAY : 9 4 3 7 5 1


NO OF COMPARISON IN PASS 1 : 5
ARRAY AFTER PASS 1 :
4       3       7       5       1       9

NO OF COMPARISON IN PASS 2 : 4
ARRAY AFTER PASS 2 :
3       4       5       1       7       9

NO OF COMPARISON IN PASS 3 : 3
ARRAY AFTER PASS 3 :
3       4       1       5       7       9

NO OF COMPARISON IN PASS 4 : 2
ARRAY AFTER PASS 4 :
3       1       4       5       7       9

NO OF COMPARISON IN PASS 5 : 1
ARRAY AFTER PASS 5 :
1       3       4       5       7       9
TOTAL NO OF COMPARISONS : 15

ARRAY AFTER SORTING :
1       3       4       5       7       9
DO YOU WANT TO CONTINUE (YES-1 & NO-0) : 1

ENTER THE SIZE OF AN ARRAY : 4

ENTER THE ELEMENT OF AN ARRAY : 1 6 3 5


NO OF COMPARISON IN PASS 1 : 3
ARRAY AFTER PASS 1 :
1       3       5       6

NO OF COMPARISON IN PASS 2 : 2
ARRAY AFTER PASS 2 :
1       3       5       6

NO OF COMPARISON IN PASS 3 : 1
ARRAY AFTER PASS 3 :
1       3       5       6
TOTAL NO OF COMPARISONS : 6

ARRAY AFTER SORTING :
1       3       5       6
DO YOU WANT TO CONTINUE (YES-1 & NO-0) : 0

*/
