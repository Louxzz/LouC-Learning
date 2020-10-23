#include<iostream>
#include<string>
using namespace std;

struct Robot_Struct	         	//定义了一个结构体
{
	int id;
	int no_wheels;
	string robot_name;
};

class Robot_Class       	    //定义了一个类
{
	public:
		int id;					//定义了多个成员变量
		int no_wheels;
		string robot_name;
		void move_robot();      //声明类的成员函数
		void stop_robot();
};



/*标准做法是在类的外部定义成员函数*/
void Robot_Class::move_robot()
{
	cout<<"Moving Robot"<<endl;
}


void Robot_Class::stop_robot()
{
	cout<<"Stopping Robot"<<endl;
}


int main()
{
	/*创建结构体和类*/
	Robot_Struct robot_1;		//创建一个名为robot_1的结构体
	Robot_Class robot_2;		//创建一个名为robot_2的对象(类的实体)
	

	/*初始化结构体和类*/
	robot_1.id=2;
	robot_1.robot_name="Mobile robot";

	robot_2.id=3;
	robot_2.robot_name="Humanoid robot";
	cout<<"ID="<<robot_1.id<<"\t"<<"Robot name: "<<robot_1.robot_name<<endl;
	cout<<"ID="<<robot_2.id<<"\t"<<"Robot name: "<<robot_2.robot_name<<endl;
	robot_2.move_robot();		//"."操作符调用类中的函数
	robot_2.stop_robot();
	return 0;
}
