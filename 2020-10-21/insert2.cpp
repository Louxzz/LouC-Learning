#include"iostream"
#include"cstring"
using namespace std;
int main()
{
	const int Size=20;
	char name[Size];
	char dessert[Size];	
	cout<<"Enter your name:"<<endl;
	cin.getline(name,20);
	cout<<"Enter your favorite dissert:\n";
	cin.getline(dessert,20);
	cout<<"I have some delicious "<<dessert<<" for you,"<<name<<".\n";
	return 0;
}
