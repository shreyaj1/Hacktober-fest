//7. Write a Program to implement binary search using recursion.

#include <iostream>
using namespace std;

int BinarySearch(int arr[], int num, int first, int last)
{
 int mid;
 
 if (first > last){
  
  cout << " Number is not found";
  return 0;
  
 } else {
  
  mid = (first + last) / 2;
  
  if(arr[mid] == num){
   
   cout << "Number is found at " << mid << " index \n";
   return 0;
  
  } else if (num > arr[mid]) {
   
   BinarySearch (arr, num, mid+1, last);
   
  } else if (num < arr[mid]) {
   
   BinarySearch (arr, num, first , mid-1);
  }
 }
}
 
int main() {
  int arr[10], num, i, n, first, last;
 cout <<"Enter the size of an array (Max 10) \n";
 cin >> n;
 cout <<"Enter the sorted values \n";
 
 for(i=0; i<n; i++) {
  
  cin >> arr[i];
 }
 cout <<"Enter a value to be search \n";
 cin >> num;
 
 first = 0;
 last = n-1;
 
 BinarySearch (arr, num, first, last);
 
 return 0;
}
/*OUTPUT

Enter the size of an array (Max 10)
8
Enter the sorted values
1 2 3 4 5 6 7 8
Enter a value to be search
4
Number is found at 3 index

*/
