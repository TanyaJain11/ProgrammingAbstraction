#include<iostream>
using namespace std;

void takeInput(int r,int c,int **p){
    for(int i=0;i<r;i++){
       p[i]=new int[c];
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>p[i][j];
        }
    }
}

void addArray(int r,int c,int **p,int **q){
    int **sum = new int*[r];
   for(int i=0;i<r;i++){
    sum[i]= new  int[c];
   }

   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        sum[i][j]=p[i][j]+q[i][j];
    }
   }

   for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<sum[i][j]<<" ";
    }
    cout<<endl;
   }


}

int main(){
    int r,c;
    cin>>r>>c;
    int **p = new int*[r];
    
    takeInput(r,c,p);

    int **q = new int*[r];

    takeInput(r,c,q);

    // for(int i=0;i<r;i++){
    //    p[i]=new int[c];
    // }

    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         cin>>p[i][j];
    //     }
    // }


    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         cout<<p[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    addArray(r,c,p,q);

    for(int i=0;i<r;i++){
        delete p[i];
    }

    delete []p;
}