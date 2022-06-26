//2753번 윤년

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int x = 0;
    
    cin >> x;
    
    bool y = x % 4 == 0 && x % 100 != 0;
    if(y || x % 400 == 0)
        cout << 1;
    else
        cout << 0;
}