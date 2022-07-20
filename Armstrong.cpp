#include<bits/stdc++.h>
using namespace std;

void armstrong(int n){
    int temp =n;
    int cnt =0;
    int ans=0;

    while(temp>0){
        int t=temp%10;
        temp = temp/10;
        cnt++;
    }
    temp = n;
    while(temp>0){
        int rem= temp%10;
        ans = ans + pow(rem,cnt);
        
    }

    cout<<ans;
}
int main()
{
    int n;
    cin>>n;

    armstrong(n);
    return 0;
}