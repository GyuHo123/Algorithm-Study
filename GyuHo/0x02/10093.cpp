//10093번 숫자

#include<bits/stdc++.h>

int main()
{
    using namespace std;
    
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long a = 0, b = 0, temp = 0, cnt = 0;
    
    cin >> a >> b;
    
    if(b<a)
    swap(a,b);
    
    if(((1<=b)&&(b<=10e+15)) && (a-b <= 100000))
    {
        for(long long i = a+1; i < b; i++)
        {
            cnt += 1;
        }
        cout << cnt << '\n';
        for(long long i = a+1; i < b; i++)
        {
            cout << i << ' ';
        }
    }
    return 0;
}
