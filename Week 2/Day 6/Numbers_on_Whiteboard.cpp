#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        priority_queue<int> pr;
        for(int i=1;i<=n;i++)
        {
            pr.push(i);
        }
        vector<pair<int,int>> v;
        while(pr.size()>1)
        {
            int x,y;
            x = pr.top();pr.pop();
            y = pr.top();pr.pop();
            v.push_back({x,y});
            pr.push(((x+y+1)/2));
        }
        cout << pr.top() << endl;
        for(auto x : v)
        {
            cout << x.first <<" " << x.second << endl;
        }
    }
    return 0;
}
