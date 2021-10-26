/*Q9.Write a Program to implement Insertion Sort. Find the number of comparisons during each
pass and display the intermediate result. Use the observed values to plot a graph to analyse
the complexity of algorithm.*/

#include <iostream>
#include <fstream>
using namespace std;

int insertion_sort(int a[],int n)
{
	int sum=0;
	for(int i=1 ; i<n ; i++)
	{
		int comp = 0;
		if(a[i]<a[i-1])
		{
			int j=i;
			while(a[j]<a[j-1] && j>0)
			{
				int temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
				j = j-1;
				comp++;
			}
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
	fout.open("insertion.txt");
	do
	{
		cout<<"\nENTER THE SIZE OF AN ARRAY : ";
		cin>>n;
		cout<<"\nENTER THE ELEMENT OF AN ARRAY : ";
		for(int i=0 ; i<n ; i++)
		{
			cin>>a[i];
		}
		int x=insertion_sort(a,n);
		fout<<n<<" , "<<x<<"\n";
		cout<<"\nDO YOU WANT TO CONTINUE (YES-1 & NO-0) : ";
		cin>>ch;
	}while(ch);
	return 0;
}
/*OUTPUT

NO OF COMPARISON IN PASS 2 : 1
ARRAY AFTER PASS 2 :
1       20      6       8       30      5

NO OF COMPARISON IN PASS 3 : 1
ARRAY AFTER PASS 3 :
1       6       20      8       30      5

NO OF COMPARISON IN PASS 4 : 1
ARRAY AFTER PASS 4 :
1       6       8       20      30      5

NO OF COMPARISON IN PASS 5 : 0
ARRAY AFTER PASS 5 :
1       6       8       20      30      5

NO OF COMPARISON IN PASS 6 : 4
ARRAY AFTER PASS 6 :
1       5       6       8       20      30
TOTAL NO OF COMPARISONS : 7

ARRAY AFTER SORTING :
1       5       6       8       20      30
DO YOU WANT TO CONTINUE (YES-1 & NO-0) : 0

*/
