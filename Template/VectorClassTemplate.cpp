#include<iostream>
using namespace std;
template <class t>
class vector{
     public:
    t* arr;
    int size;
   
    vector(int ar){
        size=ar;
        arr=new t[size];
    }

    t dotProduct(vector& v){
        t d=0;
        for(int i=0;i<size;i++){
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }

    vector sum(vector& v,vector& m){
        // vector<t> ss(3);
        t s=0;
        for(int i=0;i<size;i++){
            m.arr[i]=this->arr[i]+v.arr[i];
        }

        return m;
    }
};
int main()
{
    vector<int> v(3), w(3);
    cout<<"enter elements of first vector: "<<endl;
    cin>>v.arr[0];
    cin>>v.arr[1];
    cin>>v.arr[2];


     cout<<"enter elements of second vector: "<<endl;
    cin>>w.arr[0];
    cin>>w.arr[1];
    cin>>w.arr[2];

cout<<"dot product is "<<v.dotProduct(w)<<endl;
   vector<int> m(3) ;
      v.sum(w,m);
    for(int i=0;i<m.size;i++){
        cout<<m.arr[i]<<endl;
    }

    return 0;
}