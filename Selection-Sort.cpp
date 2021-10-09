/*
 * SHaDeX0
 * 09 - 10 - 2021 (Saturday)
 * Selection Sort Algorithm
 */

#include <iostream>

using namespace std;

void selectionSort(float[], int);                               //Function to Sort the passed array by Selection Sort Method

int main()
{
    float arr[100];                                             //Declaring the float array
    int length;                                                 //Var that will contain the length of the user's array

    cout << "Enter the size of your array: ";
    cin >> length;                                              //'length' is now equal to user's array length

    if (length < 0)                                             //Checking for invalid inputs //If the length is negative
    {
        cerr << "\nError! The size cannot be negative!";
    }
    else if (length == 0)                                       //If the length is zero
    {
        cerr << "\nError! The size cannot be zero!";
    }
    else                                                        //If the input is valid
    {
        cout << "\nEnter the elements of the array: ";

        for (int i = 0; i < length; i++)                        //Inputs the user's array
        {
            cin >> arr[i];
        }

        cout << "\nYour array:\n";                              //Printing the user's array
        for (int i = 0; i < length;)
        {
            cout << arr[i++] << "\t";
        }
        cout << "\nSorted array by Selection Sort Algorithm:\n";
        selectionSort(arr, length);                             //Function that outputs the sorted array
    }
    return 0;
}

void selectionSort(float a[], int l)                            //Function to sort the array using Selection sort Alg
{

    int minPos;                                                 //Var to store Minimum value position
    float temp;                                                 //Self explanatory var

    for (int i = 0; i < l - 1; i++)                             //Looping through first till last but one element of the array
    {
        minPos = i;                                             //Assigning the current element position to minPos

        for(int j = i + 1; j < l; j++)                          //Looping through the current element till the last element of the array
        {

            if (a[minPos] > a[j])                               //Checking if the element at 'minPos' is greater than the remaining array elements
            {
                minPos = j;                                     //If yes then the current element position will be assigned to minPos
            }
        }

        temp = a[minPos];                                       //Swapping the 'i'th element with the smallest element in the rest of the array
        a[minPos] = a[i];
        a[i] = temp;
    }

    for (int i = 0; i < l; i++)                                 //Printing the sorted array
    {
        cout << a[i] << "\t";
    }
}
