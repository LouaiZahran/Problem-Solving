#include<bits/stdc++.h>
#define prArr(Arr,n) for(int _=0;_<n;_++)   cout<<(Arr)[_]<<" ";
using namespace std;

int main()
{
    freopen("square.in", "r", stdin);
    freopen("square.out", "w", stdout);

    int x1, x2, x3, x4, y1, y2, y3, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    int xl = min(x1, x3), yl = min(y1, y3), xr = max(x2, x4), yr = max(y2, y4);
    int side = max(xr - xl, yr - yl);
    cout << side * side;
    return 0;
}

