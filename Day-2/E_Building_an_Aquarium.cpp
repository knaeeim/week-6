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
        int n, water;
        cin>>n>>water; 

        vi coral_ht(n); 

        for(int i = 0; i < n; i++){
            cin>>coral_ht[i]; 
        }

        ll left = 0, right = 1e10, mid; 

        while( left <= right){
            ll total = 0 ; 
            mid = left + ( right - left) / 2; 
            for(int i = 0; i < n; i++){
                if(coral_ht[i] < mid){
                    total += (mid - coral_ht[i]);
                }
            }

            if(total > water){
                right = mid - 1;
            }
            else{
                left = mid + 1; 
            }
        }

        cout<<left - 1<<endl;

    }
    return 0; 
}