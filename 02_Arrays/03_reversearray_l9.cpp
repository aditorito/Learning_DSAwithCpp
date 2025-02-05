#include <iostream>
using namespace std;

void reverse_arr(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        int container = arr[start];
        arr[start] = arr[end];
        arr[end] = container;
        start++;
        end--;
    }
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    reverse_arr(arr, 10);

    printArr(arr, 10);

    return 0;
}