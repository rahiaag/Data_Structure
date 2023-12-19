#include <iostream>
using namespace std;

void display(int arr[], int size)
{
    cout << "The Array is :";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Deletion(int arr[], int pos, int size)
{
    cout << "Enter the pos :";
    cin >> pos;
    for (int i = pos; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
}
int main()
{
    int arr[50] = {23, 34, 45, 43, 1, 31, 12}; // capacity=50 //size=8
    int pos;
    int size = 7;

    Deletion(arr, pos, size);
    size = size - 1;
    display(arr, size);
    Deletion(arr, pos, size);
    size--;
    display(arr, size);

    return 0;
}