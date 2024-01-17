#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>v(n);
        for(long long i=0;i<n;i++)  cin>>v[i];
        sort(v.begin(),v.end());
        long long product=(v[0]*v[1] > v[n-2]*v[n-1]) ? v[0]*v[1] : v[n-2]*v[n-1];
        cout<<product<<endl;
    }

    return 0;
}