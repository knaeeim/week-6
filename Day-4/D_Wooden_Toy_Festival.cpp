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
    

    int t; cin>>t; 

    while(t--){
        int n; cin>>n; 

        vll v(n); 

        for(int i = 0; i < n; i++) cin>>v[i]; 
        
        sorta(v); 

        auto possible = [&](ll diff)->bool{
            int cnt = 1;
            for(int l = 0, r = l + 1; r < n;){
                if(v[l] + diff + diff >= v[r]){
                    r++;
                }
                else{
                    cnt++;
                    l = r; 
                    r = l; 
                }
            }
            return (cnt < 4);
        };

        ll left = 0, right = 1e15, ans = 0; 

        while(left <= right){
            ll mid = left + (right - left) / 2; 

            if(possible(mid)){
                ans = mid; 
                right = mid - 1;
            } 
            else left = mid + 1;
        } 

        cout<<ans<<endl;

    }
    return 0; 
}