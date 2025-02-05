#include <iostream>
using namespace std;


bool search(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return true;
        }
        
    }
    return false;
    
}

int main(){
    int arr[10] = { 5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    //whether 1 is present in it or not ?
    cout<<search(arr,10,3)<<endl;


    return 0;
}