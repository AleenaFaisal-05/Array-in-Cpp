 #include<iostream>
using namespace std;
int main() {   
       int A[3][3] = {{2,3,4},{4,5,6},{3,3,3}};
       int B[3][3] = {{2,3,4},{5,5,6},{5,5,5}};
       int C[3][3];
	cout<<"now we will subtract these two matrix"<<endl;
	for(int i=0; i<3; i++) {
		for(int j=0; j<3; j++)	
		{
			cout<<B[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<"......................."<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++)
		{
			cout<<B[i][j]<<"\t";
		}
		cout<<endl;
	}
	
cout<<"subtraction is:"<<endl;
for(int i=0; i<3; i++){
	for(int j=0; j<3; j++) 
	{
		cout<<B[i][j] - B[i][j]<<"\t";
	}
	cout<<endl;
}    
	return 0;
}
