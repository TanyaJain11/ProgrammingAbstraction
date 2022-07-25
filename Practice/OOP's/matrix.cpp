#include<iostream>
using namespace std;

class matrix{
    private:
    int row;
    int col;
    int **p;
    // int arr[row][col];

    public:
    matrix(int r, int c)
        {
        row = r;
        col = c;
        p = new int *[r];
        for (int i = 0; i < r; i++)
        p[i] = new int[c];
        }
    void input(){

        cout<<"enter elements of array";
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cin>>p[i][j];
            }
        }
    }

    void display(){
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<p[i][j];
            }
            cout<<endl;
        }
    }
    
};

int main(){
    int r,c;
    cout<<"enter row";
    cin>>r;
    cout<<"enter col";
    cin>>c;
    matrix A(r,c);
    A.input();
    A.display();

}