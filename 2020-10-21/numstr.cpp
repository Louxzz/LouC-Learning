#include"iostream"
using namespace std;
int main()
{
	cout<<"What the year was your house built?\n";
	int year;
    cin>>year;
	cin.get();
	cout<<"What is its street address?\n";
	char address[30];
	cin.getline(address,30);
	cout<<"Year built:"<<year<<endl;
	cout<<"Address:"<<address<<endl;
	return 0;
}
