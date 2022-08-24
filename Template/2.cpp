#include<iostream>
using namespace std;
template <class T>
T maxi(T x,T y){
        return (x>y)?x:y;
    }

int maxi(int x,int y){
        return (x>y)?y:x;
    }
int main()
{
    cout<<maxi(2,3)<<endl;      // if we write cout<<maxi<int>(2,3)<<endl; then it will go in template function not in int
    cout<<maxi(2.1,3.1)<<endl;
    return 0;
}