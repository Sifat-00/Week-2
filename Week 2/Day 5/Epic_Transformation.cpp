#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        map<int,int> mp;
        int n;
        cin >> n;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        priority_queue<int> pr;
        for(auto x : mp)
        {
            pr.push(x.second);
        }
        while(!pr.empty())
        {
            if(pr.size()<2) break;
            int val1 = pr.top(); pr.pop();
            int val2 = pr.top();pr.pop();
            val1--;
            val2--;
            if(val1>=1)
            {
                pr.push(val1);

            }
            if(val2>=1) pr.push(val2);

        }
        int cnt = 0;
        while(!pr.empty())
        {
            cnt+=pr.top();
            pr.pop();
        }
        cout << cnt << endl;
    }
    return 0;
}