#include <iostream>
using namespace std;

int main()
{
    string s ;
    cin >> s ;
    int words = 1 ;
    for (int i = 0 ; i < s.size() ; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            words++ ;
    }
    cout << words << endl ;
    return 0;
}
