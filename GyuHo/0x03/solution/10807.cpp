#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,v,cnt = 0;

    cin >> n;

    int x[n];

    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    cin >> v;

    for(int i = 0; i < n; i++)
    {
        if(x[i] == v) cnt++;
    }

    cout << cnt;
}