#include<bits/stdc++.h>
#define prArr(Arr,n) for(int _=0;_<n;_++)   cout<<(Arr)[_]<<" ";
using namespace std;

int main()
{
    freopen("diamond.in", "r", stdin);
    freopen("diamond.out", "w", stdout);

    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());

    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(v[j] - v[i] > k)
                break;
            ans = max(ans, j - i + 1);
        }
    }

    cout << ans;

    return 0;
}

