// Making Pairs In The Array
// Time Complexity O(n^2)

#include <iostream>
using namespace std;

void PrintingPairs(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "(" << arr[i] << "," << arr[j] << "),"
                 << "\n";
        }
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof arr / sizeof arr[0];
    PrintingPairs(arr, n);

    return 0;
}

/*
OUTPUT
(1,2)(1,3)(1,4)(1,5)(1,6)       //SHORTCUT TO COMMENT :- Shift + Alt + a
(2,3)(2,4)(2,5)(2,6)
(3,4)(3,5)(3,6)
(4,5)(4,6)
(5,6)
*/



