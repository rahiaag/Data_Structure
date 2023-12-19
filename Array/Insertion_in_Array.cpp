// we can only insert the element if the size of array is smaller than the capacity

//***********Insertion at any position in array****************


#include <iostream>
using namespace std;

void insertionArr(int arr[], int element, int pos, int size, int capacity)
{
    if (size >= capacity)
    {
        cout << "No element can be added";
    }
    else
    {
        for (int i = size; i >= pos; i--)
        {
            arr[i + 1] = arr[i];
        }
    }
    arr[pos] = element;
}

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[20] = {3, 4, 5, 6};
    int pos;
    int element;
    int capacity = sizeof arr / sizeof arr[0];
    int size = 4;

    cout << "Enter the element :";
    cin >> element;
    cout << "Enter the position :";
    cin >> pos;

    cout << "Element before insertion ";
    display(arr, size);
    cout << endl;

    insertionArr(arr, element, pos, size, capacity);
    size++; // It will return the value of updated size
    // size=size+1;                                            //  It doesn't return any value
    cout << "Elements after insertion ";
    display(arr, size);

    return 0;
}
