#include<bits/stdc++.h>
#define prArr(Arr,n) for(int _=0;_<n;_++)   cout<<(Arr)[_]<<" ";
using namespace std;

int main()
{
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);

    int x1, x2, x3, x4, y1, y2, y3, y4;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

    int xA = x1, yA = y1, xB = x2, yB = y2;

    if(x3 <= x1 && x4 >= x2) {
        if(y3 <= y1)
            yA = max(y1, y4);
        if(y4 >= y2)
            yB = min(y2, y3);
    }

    if(y3 <= y1 && y4 >= y2) {
        if(x3 <= x1)
            xA = max(x1, x4);
        if(x4 >= x2)
            xB = min(x2, x3);
    }

    cout << (xA > xB || yA > yB? 0 : (xB - xA) * (yB - yA));

    return 0;
}

