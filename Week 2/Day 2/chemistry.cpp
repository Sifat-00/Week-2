#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,target;
        cin >> n >> target;
        string ar ;
        cin >> ar;
        map<char,int> mp;
        for(auto  x : ar)
        {
            mp[x]++;
        }
        int cnt = 0;
        int odd = 0;
        for(auto x : mp)
        {
            if(x.second%2 == 1)
            {
                odd++;
            }
        }
        if(odd<=target+1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}