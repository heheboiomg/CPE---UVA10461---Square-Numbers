//UVA10041 - Vito's Family 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int r;
        cin>>r;

        vector<int> s;
        s.clear();

        int b;

        while(r--){
            cin>>b;
            s.push_back(b);
        }

        sort(s.begin(),s.end());
        int sum=0;

        for(int i=0;i<s.size();i++){
            sum += abs(s[s.size()/2]-s[i]);
        }
        cout<<sum<<endl;
    }

    return 0;
}