#include <iostream>
#include <algorithm>

using namespace std;

int a[100010] ;

int main()
{
    int n ;
    cout << "Enter A Number " << endl ;
    cin >> n ;
    cout << "Enter The Elements Of The Array:" << endl ;
    for (int i = 0 ; i < n ; i++)
    {
        cin >> a[i] ;
    }
    sort(a, a + n) ;
    cout << "The Second Largest Element In The Array Is: " << a[n - 2] << endl ;
    return 0;
}