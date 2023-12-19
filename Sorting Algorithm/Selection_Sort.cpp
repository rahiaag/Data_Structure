/* sabse smallest chunte hai aur fir usse position wise lga dete hai */

#include<iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void selectionSort(int arr[], int siz){
    int indexOfMin, temp;
    cout<<"Running Selection sort...\n"<<endl;
    for (int i = 0; i < siz-1; i++)
    {
        indexOfMin = i;
        for (int j = i+1; j < siz; j++)     // We are using index (i+1) because we are camparing the i th index with all the remaining numbers
        {
            if(arr[j] < arr[indexOfMin]){
                indexOfMin = j;
            }
        }
        // Swap A[i] and A[in   dexOfMin]
        temp = arr[i];
        arr[i] = arr[indexOfMin];
        arr[indexOfMin] = temp;
    }
}

int main(){
    // Input Array (There will be total n-1 passes. 5-1 = 4 in this case!)
    //Index    00  01  02  03  04
    //Element |03, 05, 02, 13, 12

    // After first pass
    //  00  01  02  03  04
    //  02,|05, 03, 13, 12

    // After second pass
    // 00  01  02  03  04
    // 02, 03,|05, 13, 12

    // After third pass
    // 00  01  02  03  04
    // 02, 03, 05,|13, 12

    // After fourth pass
    // 00  01  02  03  04
    // 02, 03, 05, 12,|13


    int A[] = {3, 5, 2, 13, 12};
    int n = 5;
    printArray(A, n);
    selectionSort(A, n);
    printArray(A, n);

    return 0;
}