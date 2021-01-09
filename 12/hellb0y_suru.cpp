#include "bits/stdc++.h"

using namespace std;


int getFactor(int n){
    int ans = 0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            ans++;
            if(i!=n/i) ans++;
        }
    }
    return ans;
}

int count(int n){
    if(n==1) return 1;
    else if(n&1) return getFactor(n)*getFactor((n+2)/2);
    else return getFactor(n/2)*getFactor(n+1);
}


int main(){
    int cnt = 1;
    while(cnt<=100000){
        if(count(cnt)>=500){
            cout << (cnt*(cnt+1))/2;
            return 0;
        }
        cnt++;
    }
    return 0;
}
