#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long  cnt = 0;
        priority_queue<int> pr;
        int n;
        cin >> n;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            if(x!=0)
             pr.push(x);
            else if(!pr.empty())
            {
                cnt+=pr.top();
                pr.pop();
            }
        }
        cout << cnt << endl;
    }
    return 0;
}