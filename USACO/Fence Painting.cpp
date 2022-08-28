#include<bits/stdc++.h>
#define prArr(Arr,n) for(int _=0;_<n;_++)   cout<<(Arr)[_]<<" ";
using namespace std;

bool are_intersecting(int a, int b, int c, int d){
    return b > c;
}

int intersection_length(int a, int b, int c, int d){
    if(a > c || (a == c && b > d))
        swap(a, c), swap(b, d);
    if(!are_intersecting(a, b, c, d))
        return 0;
    else if(b >= d)
        return d - c;
    else
        return b - c;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << b - a + d - c - intersection_length(a, b, c, d);

    return 0;
}