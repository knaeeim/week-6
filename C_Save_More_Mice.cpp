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
        int n, k; 
        cin>>n>>k; 

        vll v(k); 

        for(int i = 0; i < k; i++)
            cin>>v[i];

        sortd(v); 

        vll prefix(k); 

        prefix[0] = (n - v[0]);

        for(int i = 1; i < k; i++){
            prefix[i] = prefix[i-1] + (n - v[i]);
        }

        ll left = 0, right = k - 1, ans = 0; 

        while(left <= right){
            ll mid = left + ( right - left) / 2; 

            if(prefix[mid] < n){
                ans = mid;
                left = mid + 1;
            }
            else right = mid - 1;
        }

        cout<<ans + 1<<endl;

    }
    return 0; 
}