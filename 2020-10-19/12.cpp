#include"iostream"
int main()
{
	using namespace std;
	int auks,bats,coots;
	auks=19.99+11.99;
	bats=(int)19.99+(int)11.99;
	coots=int(19.99)+int(11.99);
	cout<<"auks="<<auks<<endl<<"bats="<<bats<<endl<<"coots="<<coots<<endl;
	char ch='A';

	cout<<"The code for "<<ch<<" is ";
	cout<<int(ch)<<endl;
	cout<<"Yes,the code is ";
	cout<<static_cast<int>(ch)<<endl;
	return 0;
}
