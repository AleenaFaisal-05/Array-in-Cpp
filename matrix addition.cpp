#include<iostream>
using namespace std;
int main()  {
	int A[3][3] ={{1,5,5},{3,4,5},{1,1,1}};
	int B[3][3] ={{5,5,5},{6,7,9},{2,3,4}};
	int C[3][3];
	  
	  cout<<"firstly we will add these two matrix"<<endl;
	  for(int i=0; i<3; i++) {
	  for(int j=0; j<3; j++)
	  {
	  cout<<A[i][j]<<"\t";
	  }
	cout<<endl;
}
    cout<<"........................"<<endl;
    for(int i=0; i<3; i++) {
    	for(int j=0; j<3; j++) 
    	{
    		cout<<A[i][j]<<"\t";
		}
		cout<<endl;
	}
	cout<<"addition is:"<<endl;
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++)
		{
		cout<< A[i][j]  + A[i][j]<<"\t";	
		}
	cout<<endl;
        } 
      return 0;
}
