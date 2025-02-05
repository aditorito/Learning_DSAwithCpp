#include <iostream>
using namespace std;

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    

}

int main(){
    int num[9]  = {0,1,3,2,3,4,5,7,8};
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }if(arr[i] < min){
            min = arr[i];
        }
    }
    cout<<max<<endl;
    cout<<min<<endl;
    
    

    

}