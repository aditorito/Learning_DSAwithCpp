#include <iostream>
using namespace std;

int power(int a, int b){
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans = ans*a;
    }
    return ans;
}

bool isEven(int a){
    if (a%2 == 0)
    {
        cout<<"Even number"<<endl;
        return 1;
    }else{
        cout<<"Not prime"<<endl;
        return 0;
    }
    
}

int main()
{
    // int n;
    // cin >> n;
    // int N100 = 0;
    // int N50 = 0;
    // int N20 = 0;
    // int N1 = 0;

    // switch (1)
    // {
    // case 1:
    //     N100 = N100 + n / 100;
    //     n = n - 100 * N100;
    //     cout << N100 << endl;
    // case 2:
    //     N50 = N50 + n / 50;
    //     n = n - 50 * N50;
    //     cout << N50 << endl;

    // case 3:
    //     N20 = N20 + n / 20;
    //     n = n - 20 * N20;
    //     cout << N20 << endl;

    // case 4:
    //     N1 = N1 + n / 1;
    //     n = n - 1 * N1;
    //     cout << N1 << endl;
    // }
    // return 0;

    // cout<<power(2,3)<<endl;
    // isEven(3);

   
    
    

    
}
