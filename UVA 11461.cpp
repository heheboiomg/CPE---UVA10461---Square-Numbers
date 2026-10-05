//UVA11461 - Square Numbers

#include <bits/stdc++.h>
using namespace std;

int main(){
   int a,b;

   while(cin>>a>>b and (a!=0 and b!=0)){
        int c=sqrt(a),d=sqrt(b);
        
        if(c*c!=a){
            c++;
        }

        cout<<d-c+1<<endl;
   }

    return 0;
}