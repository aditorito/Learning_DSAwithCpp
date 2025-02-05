#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num = n;
    int ans = 0;
    int i = 0;
    while (num > 0)
    {
        int digit = num % 10;
        num = num / 10;
        ans = ans * pow(10, i) + digit;
            cout<<i<<" and answer is "<< ans << " " <<pow(10,i)<< endl;

        i++;
    }
    cout<<ans<<endl;
}