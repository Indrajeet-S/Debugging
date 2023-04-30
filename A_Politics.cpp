#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main() {

    int t; cin>>t;
    while(t--){
        int n, k, cnt = 1; cin>>n>>k;
        string s; cin>>s;
        n--;
        for(int i=0; i<n; i++){
            string p; cin>>p;
            if(s==p) cnt++;
        }
        cout<<cnt<<endl;
    }

    return 0;
}