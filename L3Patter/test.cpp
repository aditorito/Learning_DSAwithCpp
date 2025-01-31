#include <iostream>
using namespace std;

int main()
{

    int n;

    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        
         for (int col = 1; col <= n - row; col++)
        {
            cout << " ";
        }
        for (int star = 1; star <= row  ; star++)
        {
            cout<< star;
        }
        for (int sid = 1; sid < row; sid++)
        {
            cout<<row - sid ;
            
        }
        
        cout<<endl;

       
    }
}