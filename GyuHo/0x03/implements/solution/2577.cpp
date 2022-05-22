#include<bits/stdc++.h>
using namespace std;

int freq[10] = {};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b, c, mul;
    
    cin >> a >> b >> c;
    
    mul = a * b * c;
    
    while(mul > 0)
    {
        freq[mul%10] += 1;
        mul /= 10;
    }
    
    for(int i = 0; i < 10; i++)
    {
        cout << freq[i] << '\n';
    }
}
