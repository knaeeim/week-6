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

        vi steps(n), query(q); 

        for(int i=0; i<n; i++)
            cin>>steps[i];
        
        for(int i=0; i<q; i++){
            cin>>query[i];
        }

        vll ans;
        ll total = 0; 
        for(int i = 0; i < q; i++){
            for(int j = 0; j < n; j++){
                if(steps[j] <= query[i]){
                    total += steps[j];
                }
                else{
                    break;
                }
            }
            ans.pub(total);
            total = 0;    
        }

        range(ans); 
        cout<<endl;
    }
    return 0; 
}