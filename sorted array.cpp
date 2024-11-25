#include<iostream>
using namespace std;
int main() {
	char array[15];
	int temp;
	cout<<"enter 15 characters :"<<endl;
	
	for(int i=0; i<15; i++) {
	cin>>array[i];
}
for(int i=0; i<15; i++)  {
for(int j=0; j<i+1; j++)
{
if (array[i]<array[j]);
	{
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
	}  	
        }   
    }
cout<<"sorted array in descending order"<<endl;
for(int i=0; i<15; i++) {
cout<<array[i]<<endl;
}
 return 0;
}
