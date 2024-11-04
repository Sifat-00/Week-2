#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t ;
    while(t--)
    {
        int n;
        cin >> n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin >> ar[i];
        }
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int m;
            cin >>m;
            string st;
            cin >> st;

            for(auto x : st)
            {
                if(x == 'D')
                {
                    ar[i]++;
                    if(ar[i] == 10)
                    {
                        ar[i] = 0;
                    }
                }
                else
                {
                    ar[i]--;
                    if(ar[i]<0)
                    {
                        ar[i] = 9;
                    }
                }
            }
            v.push_back(ar[i]);
        }
        for(auto x : v) cout <<x  <<" " ;
        cout << endl;
    }
    return 0;
}