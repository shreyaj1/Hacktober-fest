#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, temp;
	int i = 0;
	int k = 0;
	
	cout << "Bubble Sort";
	cout << "\nEnter the amount of data you want: ";
	cin >> n;
	cout << "\n";
	int A[n-1];
	for (int i=0; i<n; i++)
	{
		cout << "enter number-" << i << endl;
		cin >> A[i];
	}
	for (int i=0; i<=(n-2); i++)
	{
		for (int k=(n-1); k>=(i+1);k--)
		{
			if (A[k] < A[k-1])
			{
				temp=A[k];
				cout << "the result of temp is " << temp << "\n";
				A[k]=A[k-1];
				cout << "Result of A["<<k<<"] is " << A[k] << "\n";
				A[k-1]=temp;
				cout << "Result of A["<< k-1 <<"] is " << A[k-1] << "\n";
			}
		}
	}
	cout << "\nResult of the data sequence is : ";
	for (int i=0; i<=(n-1);i++)
	{
		cout << A[i] << " ";
	}
	return 0;
}
