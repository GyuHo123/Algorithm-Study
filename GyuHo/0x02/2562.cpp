//백준 2562 최댓값

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int x[9];
    int max = 0;
    int index;
    for(int i = 0; i < 9; i++)
    {
        cin >> x[i];
        if(x[i]>max)
        {
            max = x[i];
            index = i+1;
        }
    }
    
    cout << max << '\n';
    cout << index;
   
}