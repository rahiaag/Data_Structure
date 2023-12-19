#include <iostream>
using namespace std;

// When we have to merge 2 different arrays
/*
void merge(int A[], int B[], int C[], int m, int n)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < m && j < n)
    {
        if (A[i] < B[j])
        {
            C[k] = A[i];
            i++;
            k++;
        }
        else
        {
            C[k] = B[j];
            k++;
            j++;
        }
    }

    while (i < m)
    {
        C[k] = A[i];
        i++;
        k++;
    }

    while (j < n)
    {
        C[k] = B[j];
        k++;
        j++;
    }
}
*/

// Merging in the same array

void merge(int A[], int low, int mid, int high)
{
    int i, j, k, B[100];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            i++;
            k++;
        }
        else
        {
            B[k] = A[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++) // we are copying element from array B[] to array A[];
    {
        A[i] = B[i];
    }
}

void mergeSort(int A[], int low, int high)
{

    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(A, low, mid);
        mergeSort(A, mid + 1, high);
        merge(A, low, mid, high);
    }
}

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {32, 4, 7, 3, 1, 1, 5};
    int siz = sizeof arr / sizeof arr[0];
    cout << "The array is :" << endl;
    printArray(arr, siz);
    mergeSort(arr, 0, 6);
    printArray(arr, siz);

    return 0;
}