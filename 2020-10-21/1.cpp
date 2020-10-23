#include"iostream"
using namespace std;
int main()
{
	int yams[3];
	yams[0]=7;
	yams[1]=8;
	yams[2]=6;
	int yamcosts[3]={20,30,5};
	cout<<"Tatol yams = "<<yams[0]+yams[1]+yams[2]<<endl;
	
	cout<<"Size of yams array = "<<sizeof yams<<" bytes."<<endl;

	cout<<"Size of element = "<<sizeof yams[0]<<" bytes."<<endl;
	
	int things[]={1,5,3,8};

	cout<<"Size of things array = "<<sizeof things<<" bytes."<<endl;
	cout<<"Size of things element = "<<sizeof things[1]<<" bytes."<<endl;
	cout<<"things[4] = "<<things[4]<<endl;
	return 0;
}
