#include<iostream>
struct info
{
	char name[30];
	float volume;
	double price;
};


int main()
{
	using namespace std;
	info guest=
	{
		"Lou Xzh",1.88,29.99
	};
	info pal=
	{
		"Nanchang University",3.12,32.99
	};
	cout<<"Expand your guest list with "<<guest.name<<" and "<<pal.name<<"!\n";
	cout<<"You can have both for $"<<guest.price+pal.price<<"!\n";

	return 0;
}
