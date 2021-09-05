#include <iostream>
using namespace std;

int a[100010] ;
int main()
{
    int n, d ;
    cin >> n >> d ;
    for (int i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;
    }
    while (d--)
    {
        int temp = a[0] ;
        for (int i = 1 ; i < n ; i++)
        {
            a[i - 1] = a[i] ;
        }
        a[n - 1] = temp ;
    }
    for (int i = 0 ; i < n ; i++)
    {
        cout << a[i] << " " ;
    }
    cout << endl ;
    return 0;
}