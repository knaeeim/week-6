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

const int maxN = 1e4; 

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    
    vll pw; 

    for(int i = 1; i <= maxN; i++){
        pw.pub(pow(i, 3));
    }

    int t; 
    cin>>t; 

    while(t--){
        ll x; 
        cin>>x; 

        bool found = false;

        for(int i = 0;  i < maxN; i++){
            if(pw[i] >= x) {
                break; 
            }

            ll left = 0, right = maxN - 1, mid;

            ll need = x - pw[i]; 

            bool gotit = false;

            while(left <= right){
                mid = left + ( right - left ) / 2; 

                if(pw[mid] == need){
                    gotit = true; 
                    break;
                }

                if(pw[mid] > need){
                    right = mid - 1;
                }
                else{
                    left = mid + 1;
                }
            } 

            if(gotit){
                found = true;
                break;
            }

        }

        if(found) yes;
        else no; 

    }
    
    return 0; 
}