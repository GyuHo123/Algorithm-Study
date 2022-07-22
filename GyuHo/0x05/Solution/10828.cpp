#include<bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;
    stack<int> st;

    while(n--)
    {
        string s;
        cin >> s;
        if(s == "push")
        {
            int i;
            cin >> i;
            st.push(i);
        }
        else if(s == "top")
        {
            if(st.empty())
                 cout << -1 << '\n';
            else
                cout << st.top() << "\n";
        }
        else if(s == "size")
        {
            cout << st.size() << "\n";
        }
        else if(s == "empty")
        {
            cout << (int)st.empty() << '\n';
        }
        else if(s == "pop")
        {
            if(st.empty())
                cout << -1 << "\n";
            else{
                cout << st.top() << "\n";
                st.pop();
            }
        }
    }
}
