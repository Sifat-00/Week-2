#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<pair<int,int>> st;
    multiset<pair<int,int>> ms;
    vector<int> v;
    int t;
    cin >> t;
    int track = 1;
    while(t--)
    {
        int type;
        cin >> type;
        if(type == 1)
        {
            int money;
            cin >> money;
            st.insert({track,money});
            ms.insert({money,-track});
            track++;
        }
        else if(type == 2)
        {
            int trk = st.begin()->first,money = st.begin()->second;
            cout << trk <<" ";
            st.erase({trk,money});
            ms.erase({money,-trk});
        }
        else if(type == 3)
        {
            int trk = -ms.rbegin()->second,money = ms.rbegin()->first;
            cout << trk <<" ";
            ms.erase(--ms.end());
            st.erase({trk,money});
        }
    }
    return 0;
}