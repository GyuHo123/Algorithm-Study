#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, s, y, roomnum = 0;
    cin >> n >> k;

    int student[2][7] = {0};

    for(int i = 0; i < n; i++)
        {
            cin >> s >> y;
            student[s][y]++;
        }

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 7; j++)
        if(student[i][j] != 0)
        {
            roomnum += student[i][j]/k;
            if(student[i][j]%k != 0)
                roomnum++;
        }
    }

    cout << roomnum;
}