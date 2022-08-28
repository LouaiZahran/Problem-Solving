#include<bits/stdc++.h>
#define prArr(Arr,n) for(int _=0;_<n;_++)   cout<<(Arr)[_]<<" ";
using namespace std;

int main()
{
    freopen("circlecross.in", "r", stdin);
    freopen("circlecross.out", "w", stdout);

    string s;
    cin >> s;

    map<char, int> first, last;
    for(int i=0; i<52; i++){
        if(first.find(s[i]) == first.end())
            first[s[i]] = i;
        else
            last[s[i]] = i;
    }

    int ans = 0;
    for(char c='A'; c<='Z'; c++){
        for(char d='A'; d<='Z'; d++){
            if(c == d)
                continue;
            ans += first[c] < first[d] && last[c] < last[d] && last[c] > first[d];
        }
    }

    cout << ans;

    return 0;
}

