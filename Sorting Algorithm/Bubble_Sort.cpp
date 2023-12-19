/*hum bubble banate hai agar ek bubble dusre bubble se bda hua to swap kar denge aur aise hi karte rahegen ab */


// Normal Bubble Sort

#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) // For Number of Passes
    {
        for (int j = 0; j < n - 1 - i; j++) // For Number of Camparison in Each Pass as The Largest Element will be place at last in each pass so no need to campare it
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr, j, j + 1);
            }
        }
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {7, 11, 9, 2, 17, 4};
    int n = sizeof arr / sizeof arr[0];

    bubbleSort(arr, n);

    print(arr, n);

    return 0;
}



// Adaptive Bubble Sort

#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void bubbleSort(int arr[], int n)
{
    int isSorted = 0;               // using this to know if the array is already sorted
    for (int i = 0; i < n - 1; i++) // For Number of Passes
    {
        cout << "Working on Pass Number :" << i + 1 << endl;
        isSorted = 1;
        for (int j = 0; j < n - 1 - i; j++) // For Number of Camparison in Each Pass as The Largest Element will be place at last in each pass so no need to campare it
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr, j, j + 1);
                isSorted = 0;
            }
        }
        if (isSorted)
        { // if isSorted is true means isSorted=1
            return;
        }
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {7, 11, 9, 2, 17, 4};
    int n = sizeof arr / sizeof arr[0];

    bubbleSort(arr, n);

    print(arr, n);

    return 0;
}
