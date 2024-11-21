#include<iostream>
using namespace std;
int main()  {
	int test[2][3] ={{2,5,9} , {1,3,5}} ;
	int sum;
	for(int i=0; i<2; i++)	{
		for(int j=0; j<3; j++)
		 {
	sum += test[i][j];
}
}
	cout<<"addition is:"<<sum<<endl;
	return 0;
}
