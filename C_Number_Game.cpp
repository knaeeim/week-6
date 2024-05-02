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
#define Rocket ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


bool possible(vll &v, int n, int mid){
    multiset<ll>st;
    for(auto el:v) st.insert(el);

    for (int i = 1; i <= mid; i++)
    {
        if(st.empty()) return false;
        ll request = mid-i+1;
        auto ii = st.upper_bound(request);
        if(ii == st.begin()) return false;
        ii--;
        st.erase(ii);

        if(!st.empty()){
            ii = st.begin();
            ll vv = (*ii);
            vv += request;
            st.erase(ii);
            st.insert(vv);
        }
    }
    return true;
}


int getK(vll &v, int n){
    ll left = 0, right = n, k;
    while(left <= right){
        ll mid = (left+right) / 2;
        if(possible(v, n, mid)){
            k = mid;
            left = mid+1;
        }else{
            right = mid-1;
        }
    }
    return k;
}





int main(){ Rocket;
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vll v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        cout<<getK(v, n)<<endl;
    }


    return 0;
}