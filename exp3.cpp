#include<iostream>
using namespace std;

class Matrix{
 int  arr[x][y];

public:
	void getdata(int x, int y){
      for (int i = 0; i < x ; i++) {
        for (int j = 0; j < y; j++) {
            cin >> arr[i][j];
        }
    }
	}
   
   void display()
		{
			 for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << "elements[" << i << "][" << j << "]: " << arr[i][j] << endl;
        }}
		}
}




main(){

	int x,y;

	cout<<"Enter the size of 2D array"<<endl;
	cin>>x;
	cin>>y;

	Matrix.getdata(int x, int y);

	Matrix.display(int x, int y);
}