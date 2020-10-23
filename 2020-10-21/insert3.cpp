#include"iostream"
using namespace std;
int main()
{
	
	const int Size=20;
	char name[Size];
	char dessert[Size];	
	cout<<"Enter your name :"<<endl;
	cin.get(name,20).get();
	cout<<"Enter your favorite dessert :"<<endl;
	cin.get(dessert,20).get();
	/*第二种方法*/
	/*
	const int Size=20;
	char name[Size];
	char dessert[Size];	
	cout<<"Enter your name and your favorite dissert :"<<endl;
	cin.getline(name,20).getline(dessert,20);
	 */
	cout<<"I have some delicious "<<dessert<<" for you,"<<name<<".\n";
	return 0;
}
