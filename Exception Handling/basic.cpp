/*

logical errors
syntatic errors

runtime errors/exceptions: to solve these errors use
1.hit
2.throw
3.catch
4.handle

try{
    throw
}
catch
{

}

synchronous and asynchronous errors 

abort() - if error is caught correctly

*/

#include<iostream>
using namespace std;

void display(int x){
    try{
        if(x<0){
            throw x;
        }
        if(x==0){
            throw 'x';
        }
        if(x>0){
            throw 1.0;
        }
    }
    catch(int x){
        cout<<"negative integer";
    }

    catch(char x){
        cout<<"charcter exception/zero"<<endl;
    }

    catch(double x){
        cout<<"positive integer/double exception"<<endl;
    }
}

void divide(int x,int y){
    if(y!=0){
        int z=x/y;
        cout<<"value of z"<<z<<endl;

  }else{
    throw(x);
  }
}
int main()
{

    int x,y,z;
    cout<<"enter value of x";
    cin>>x;

    cout<<"enter value of y";
    cin>>y;

    try{
        // if(y!=0){
        //     z=x/y;
        //     cout<<"value of z is "<<z<<endl;
        // }else{
        //     throw (x);
        // }       
        
         divide(x,y);
    }

    catch(int x){  // double in catch like double x abort ho jayega
        cout<<"please input correct integer other than 0";
    }

    catch(int y){ 
        cout<<"second called";
    }

    // through always inside try

    // try k baad jo first catch aata h same data type ka vo vahi except krega 

    return 0;
}
