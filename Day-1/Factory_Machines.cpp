#include<bits/stdc++.h>
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define ll long long int
#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define vi vector<int>
#define vll vector<ll>
#define vp vector<pair<ll,ll>>
#define sorta(arr) sort(arr.begin(), arr.end());
#define sortd(arr) sort(arr.begin(), arr.end(), greater<int>());
#define All(X) (X).begin(),(X).end()
#define Unique(X) (X).erase(unique((X).begin(),(X).end()),(X).end())
#define range(arr) for(auto el: arr) cout<<el<<" ";


int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    

    int n, p; 
    cin>>n>>p; 

    vi v(n); 

    for(int i = 0; i < n; i++){
        cin>>v[i];
    }

    auto ok = [&] (ll m){
        ll total = 0; 
        for(int i = 0; i < n; i++){
            total += (m / v[i]);

            if(total >= p){
                return true;
            }
        }
        return false;
    };

    ll l = 1, r = 1e18, ans = 0; 

    while( l<= r){
        ll mid = l + ( r - l)/2;
        if(ok(mid)){
            ans = mid; 
            r = mid - 1;
        }
        else l = mid + 1; 
    } 

    cout<<ans<<endl; 

    return 0; 
}