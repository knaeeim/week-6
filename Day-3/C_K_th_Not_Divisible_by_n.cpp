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
        ll n, k; 
        cin>>n>>k;

        ll left = 0, right = 2 * 1e9, ans = -1; 

        while(left <= right){
            ll mid = left + ( right - left) / 2; 
            ll div = mid / n; 
            ll sub = mid - div;

            if(sub == k){
                if(mid % n == 0){
                    ans = mid - 1;
                }
                else{
                    ans = mid; 
                }
            }

            if(k > sub){
                left = mid + 1;
            }
            else{
                right = mid - 1; 
            }

        }

        cout<<ans<<endl; 
    }
    return 0; 
}