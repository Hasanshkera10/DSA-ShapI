#include <iostream>
using namespace std;

int main()
{
    int n ;
    cin >> n ;
    while (n--)
    {
        int grade ;
        cin >> grade ;
        if (grade < 38)
        {
            cout << grade << endl ;
            continue ;
        }
        if (grade % 5 >= 3)
        {
            grade += (5 - (grade % 5)) ;
        }
        cout << grade << endl ;
    }
    return 0;
}
