#include <limits>
#include <iomanip>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<long long> vi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define FOR(i,a,b) for (long long i = a; i < b; i++)
#define ROF(i,a,b) for(long long i=a;i>b;i--)
#define SORTa(a) sort(a.begin(), a.end())
#define SORTd(a) sort(a.begin(), a.end(), greater<long long>()) 
int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin>>t;
    while (t--)
    {
        ll a,b;
        cin>>a>>b;
        ll t=1;
        while(b){
              if(b%2) t*=a;
              a*=a;
              b/=2;
              a%=ll(1e9+7);
              t%=ll(1e9+7);
        }
        cout<<t<<endl;
    }
    
     return 0;
     }

