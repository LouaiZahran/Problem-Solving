#include<bits/stdc++.h>
#define prArr(Arr,n) for(int _=0;_<n;_++)   cout<<(Arr)[_]<<" ";
using namespace std;

int main()
{
    freopen("pails.in", "r", stdin);
    freopen("pails.out", "w", stdout);

    int x, y, m;
    cin >> x >> y >> m;

    int ans = 0, curX = 0;
    while(curX <= m){
        int curY = (m - curX)/y * y;
        ans = max(ans, curX + curY);
        curX += x;
    }
    cout << ans;

    return 0;
}

