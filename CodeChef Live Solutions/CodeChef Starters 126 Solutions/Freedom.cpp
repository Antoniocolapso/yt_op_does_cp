#include <bits/stdc++.h>
 using namespace std;
 // STAY CALM

 #define int long long int
 #define vi vector<int>
 #define read(a) for(auto &i: a) cin>>i
 // #define mod 998244353
 #define mod 1000000007
 // vector<vector<int>> m(200005);
 vector<vector<int>> m2(200005);
 vector<int> siz(200005);
 vector<int> dist(200005);


 signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t=1;
  cin>>t;
  // sieve();
  while(t--){
   int n;
   cin>>n;
   vi a(n,0);
   read(a);
   int ans=0;
   // ai * aj = ai + 3aj 
   // y= x/x-3 
   map<int,int> m;
   for(auto it:a){
    m[it]++;
   }
   // ahead of it 
   for(int i=0;i<n;i++){
    if(a[i]<=3){m[a[i]]--;continue;}
    int num=a[i];
    int den=a[i]-3;
    if(num%den!=0){m[a[i]]--;continue;}
    int val=num/den;
    if(val==a[i]){
     if(m[val]-1>0){
      ans=ans+m[val]-1;
     }
     // ans=ans+max(0LL,m[val]-1);
    }
    else{
     if(m[val]>0){
      ans=ans+m[val];
     }
     // ans=ans+max(0LL,m[val]);
    }

    m[a[i]]--;
    // cout<<i<<" "<<ans<<endl;
   }
   // edge case if same raha to 
   cout<<ans<<endl;
  
   
  }
  return 0;
 }