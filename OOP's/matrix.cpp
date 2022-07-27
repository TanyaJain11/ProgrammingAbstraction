// #include<iostream>
// using namespace std;

// class matrix{
//     private:
//     int row;
//     int col;
//     int **p;
//     int arr[row][col];

//     public:
//     matrix(int r,int c)
//         {
//         row = r;
//         col = c;
//         p = new int *[r];
//         for (int i = 0; i <c; i++)
//         p[i] = new int[col];
//         }

        
        
//     void input(){

//         cout<<"enter elements of array";
//         for(int i=0;i<row;i++){
//             for(int j=0;j<col;j++){
//                 cin>>p[i][j];
//             }
//         }
//     }

//     void display(){
//         for(int i=0;i<row;i++){
//             for(int j=0;j<col;j++){
//                 cout<<p[i][j];
//             }
//             cout<<endl;
//         }
//     }
//     // void add(B){
//     //     for(int i=0;i<r;i++){
//     //         for(int j=0;j<c;j++){

//     //         }
//     //     }
//     // }
// };

// int main(){
//     int r,c;
//     cout<<"enter row";
//     cin>>r;
//     cout<<"enter col";
//     cin>>c;
//     matrix A();
//     A.input();
//     A.display();

// }




#include<iostream>
#include<bits/stdc++.h>
using namespace std;



class matrix{
	
	
	
	private:
		int row;
		int col;
	//	int arr[row][col];
	int **p; //double pointer to dynamically create 2d array
		
	public:
		
		matrix(int r , int c){
			
			row =r;
			col=c;
			
			p = new int*[r];
			for(int i=0;i<r;i++){
				p[i] = new int [c];
			}
		}
		void input(){
			
		
			cout<<"enter elemts of array: "<<endl;
		
			
			for(int i=0;i<row;i++){
				
				for(int j=0;j<col;j++){
					cin>>p[i][j];
				}
			}
			
		}
		
		
		
		void display(){
			
			
				for(int i=0;i<row;i++){
				
				for(int j=0;j<col;j++){
					cout<<p[i][j]<<" ";
				}
				cout<<endl;
			}
			
			
		}
		
		/*
		Matrix add(Matrix b){
			
			
			Matrix ans;
				for(int i=0;i<row;i++){
				
				for(int j=0;j<col;j++){
					ans.arr[i][j] = b.arr[i][j] + arr[i][j];
				}
				cout<<endl;
			}
			
			return ans;
			
		}*/
		
		/*
		void multiply(matrix a,matrix b){
			
			for(int i=0;i<r;i++){
				for(int j=0;j<c;j++){
					
					
					int ans.p[i][j]=0
					for(int k=o;k<r;k++){
						ans.p[i][j]+= a.
					}
					
					
				}
			}
			
			
		
		
		}	*/
};


int main(){
	
	
	int r,c;
	cout<<"enter rows: ";
	cin>>r;
	cout<<"enter cols: ";
	cin>>c;
	matrix a(r,c);
	matrix b(r,c);
	matrix ans(r,c);

	a.input();
	b.input();
	a.display();
	/*
	b.input(); 
	ans= a.add(b);
	ans.display();
	*/
	
}