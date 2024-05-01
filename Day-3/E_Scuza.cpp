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
        int n, q; 
        cin>>n>>q; 

        vll steps(n), query(q); 

        for(int i=0; i<n; i++)
            cin>>steps[i];
        
        for(int i=0; i<q; i++){
            cin>>query[i];
        }

        vll prefix(n), maxi(n); 
        prefix[0] = steps[0];
        maxi[0] = steps[0];

        for(int i = 1; i < n; i++){
            prefix[i] = prefix[i-1] + steps[i];
            maxi[i] = max(maxi[i - 1], steps[i]); 
        }

        for(int i = 0; i < q; i++){
            ll ans = 0;

            ll k = upper_bound(maxi.begin(), maxi.end(), query[i]) - maxi.begin() - 1; 

            if(k >= 0){
                ans = prefix[k];
            } 

            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0; 
}