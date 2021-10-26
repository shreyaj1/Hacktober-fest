/*
 * SHaDeX0
 * 09 - 10 - 2021 (Saturday)
 * Dynamic Input for int array
 */

#include <iostream>

using namespace std;

int main() {
    int arr[100], size = 0;                         //Declaring an integer array and variable to track the size of the array

    cout << "Instructions: Input the elements of array as much as you want, when you want to stop enter '-32768' without quotes.";
    cout << "\nEnter the elements of the array:\n";
    while (arr[size - 1] != -32768) {               //Checking if the last input is '-32768' till then keep on taking the input
        cin >> arr[size++];                         //Incrementing size for inserting the element in the next position of the array
    }
    size--;                                         //Decrementing size as the last element in the array will be '-32768' which is not a part of the user desired array
    cout << "\nYour array:\n";
    for (int i = 0; i < size; i++) {                //Printing the array
        cout << arr[i] << "\t";
    }

    return 0;
}
