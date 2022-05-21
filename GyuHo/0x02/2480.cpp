//백준 2480 주사위 3개

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
     
    int x,y,z;
    
    cin >> x >> y >> z;
    
    if(x == y)
    {
        if(y == z)
            cout << 10000+x*1000;
        else if(y != z) 
            cout << 1000+x*100;
    }
    else if(x != y)
    {
        if(x == z)
            cout << 1000+x*100;
        else if(x != z)
            {
                if(y==z)
                    cout << 1000+y*100;
                else if(y!=z)
                    cout << max({x,y,z})*100;
        }
    }
}