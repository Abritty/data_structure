#include <bits/stdc++.h>

using namespace std;

int main(){

int t,x,y,n,temp,val,result;
cin >>t;
while(t--){
        cin >>x>>y>>n;
        temp = n-y;
        val = temp/x;
        result = val*x + y;
        cout << result<< endl;
}
return 0;

}
