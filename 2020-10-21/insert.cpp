#include"iostream"
#include"cstring"
using namespace std;
int main()
{
	const int Size=20;
	char name[Size];
	char dessert[Size];	
	cout<<"Enter your name:"<<endl;
	cin>>name;
	cout<<"Enter your favorite dissert:\n";
	cin>>dessert;
	cout<<"I have some delicious "<<dessert<<" for you,"<<name<<".\n";
	return 0;
}
