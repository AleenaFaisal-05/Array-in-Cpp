#include<iostream>
using namespace std;
int main() {
	double temprature[365] = {0,0} ;
	for(int i=0; i<365; i++) {
		cout<<"enter high temprature for day :"<<i+1<<endl;
		cin>>temprature[i];
	}
	return 0;
}
