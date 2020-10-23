#include"iostream"
#include"cstring"
using namespace std;
int main()
{
	const int Size=15;
	char name1[Size];
	char name2[Size]="C++owboy";	
	cout<<"Hello I am "<<name2<<endl;
	cout<<"Who are you?\n";
	cin>>name1;
	cout<<"Well "<<name1<<",your name has "<<strlen(name1)<<" letters and is stored.\n";
	cout<<"in an array of "<<sizeof(name1)<<" bytes.\n";
	cout<<"Your initial is "<<name1[0]<<".\n";
	name1[3]='\0';
	cout<<"Here are the first 3 characters of your name:"<<name1<<endl;
	return 0;
}
