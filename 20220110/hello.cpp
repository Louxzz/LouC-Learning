#include<iostream>
using namespace std;
extern int addprintf();
int main()
{
	for(int i=0;i<10;i++)	
	{
	cout<<"hello"<<endl;
	cout<<"main addr:"<<(void*)main<<endl;
	}	
	addprintf();
	return 0;
}
