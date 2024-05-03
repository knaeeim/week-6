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
    

    int n, a, b; 
    cin>>n>>a>>b; 

    int left = 1, right = min(a, b), ans = 1; 

    while(left <= right){
        int mid = left + ( right - left)/ 2; 

        if(a / mid + b / mid >= n){
            left = mid + 1; 
            ans = mid; 
        } 
        else right = mid - 1; 
    }

    cout<< ans <<endl; 

    return 0; 
}