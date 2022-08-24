#include<iostream>
using namespace std;
int maxi(int x,int y){
    return(x>y)?x:y;
}
int main()
{
    cout<<maxi(2.3,4.2);
    return 0;
}