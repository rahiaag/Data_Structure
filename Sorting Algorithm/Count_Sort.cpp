#include <stdio.h>
#include <iostream>
#include <limits.h>
#include <stdlib.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int maximum(int A[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
        {
            max = A[i];
        }
    }
    return max;
}
void countSort(int A[], int n)
{
    int i, j;
    // Find the maximum element in A
    int max = maximum(A, n);

    // Create the count array
    int *count = new int();

    // Initialize the array elements to 0
    for (i = 0; i < max + 1; i++)
    {
        count[i] = 0; /// New array with all element value equal to 0
    }

    // Increment the corresponding index in the count array
    for (i = 0; i < n; i++)
    {
         count[A[i]] = count[A[i]] + 1;       
    /* 
   we are putting one array into another for example if A[3] has some value= 9 then count[A[i] will become count[9] and we incremented the value of count[9] by 1 which is in first case 0
     */ 
   
    }
   
   //then we create a new array to put the element so we initialize
    i = 0; // for count array   
    j = 0; // for the new array A
    
   
    while (i <= max)
    {
        if (count[i] > 0)
        {
            A[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int A[] = {9, 1, 4, 14, 4, 15, 6};
    int n = 7;
    printArray(A, n);
    countSort(A, n);
    cout << "Array After Sorting" << endl;
    printArray(A, n);
    return 0;
}