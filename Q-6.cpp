#include <iostream>
using namespace std;

int main()
{
    int n ;
    cout << "Enter n:" << endl ;
    cin >> n ;
    int con = n * 2 + 1 ;
    int l = n + 1, r = n + 1 ;
    cout << "The triangle is: " << endl ;
    for (int i = 1 ; i <= n ; i++)
    {
        for (int j = 1 ; j <= con ; j++)
        {
            if (j >= l && j <= r)
            {
                cout << "*" ;
                j++ ;
            }
            cout << " " ;
        }
        l-- ;
        r++ ;
        cout << endl ;
    }
    return 0;
}
