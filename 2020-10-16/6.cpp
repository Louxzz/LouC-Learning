#include<iostream>
int stonetolb(int);
int main()
{
	using namespace std;
	int stone;
	cout<<"Enter the weight in stone:\n";
	cin>>stone;
	int pounds=stonetolb(stone);

	cout<<stone<<"stone=";
	cout<<pounds<<"pouds."<<endl;
	return 0;
}

int stonetolb(int sts)
{
	int pounds=14*sts;
	return pounds;
}
