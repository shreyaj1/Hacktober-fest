#include <stdio.h>
#include <math.h>
// Anirudh Sharma 2K20/SE/17

int maxNum(int ar[], int x) // Function for Maximum Number
{
    int max = ar[0];
    for (int i = 1; i < x; i++)
    {
        if (max < ar[i])
        {
            max = ar[i];
        }
    }
    return max;
}
int minNum(int ar[], int x) // Function for Minimum Number
{
    int min = ar[0];
    for (int i = 0; i < x; i++)
    {
        if (min > ar[i])
        {
            min = ar[i];
        }
    }
    return min;
}
int main() // Driver Code
{
    int x;
    printf("Enter the no. of elements in Input : "); // User describes length of Array
    scanf("%d", &x);
    int ar[x];
    printf("Please enter the numbers : "); // User inputs Numbers here
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &ar[i]); // Input of all elements
    }

    printf("The Maximum value is %d", maxNum(ar, x));      // Maximum Number from Input is displayed here
    printf("\nThe Minimum value is %d \n", minNum(ar, x)); // Minimum Number from Input is displayed here

    return 0;
}