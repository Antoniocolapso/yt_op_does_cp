#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
#define endl "\n"
#define mod 998244353
int32_t main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin >> t;
    while(t--){
        int n,x,f=0,ff=0;
        cin >> n >> x;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(a[i]==x){
                f=i+1;
            }
        }
        int l=0,r=n,k=0;
        vector<pair<int,int>>ans;
        if(f!=n){
            k++;
            swap(a[f-1],a[n-1]);
            ans.push_back({f,n});
        }
        while((r-l)>1){
            int m=(r+l)/2;
            if(a[m]<=x){
                l=m;
            }
            else{
                r=m;
            }
        }
        if(l!=n-1){
            k++;
            ans.push_back({l+1,n});
        }
        cout<<k<<endl;
        for(int i=0; i<k; i++){
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
        }
    }
    return 0;
}