#include<iostream>
using namespace std;
class vector{
     public:
    int* arr;
    int size;
   
    vector(int ar){
        size=ar;
        arr=new int[size];
    }

    int dotProduct(vector& v){
        int d=0;
        for(int i=0;i<size;i++){
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector v(3), w(3);
    cout<<"enter elements of first vector: "<<endl;
    cin>>v.arr[0];
    cin>>v.arr[1];
    cin>>v.arr[2];


     cout<<"enter elements of second vector: "<<endl;
    cin>>w.arr[0];
    cin>>w.arr[1];
    cin>>w.arr[2];

cout<<"dot product is "<<v.dotProduct(w)<<endl;


    return 0;
}