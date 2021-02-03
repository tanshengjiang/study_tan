//多态案例１：创建一个计算器

#include<iostream> 

using namespace std;

class Abstractcalculator
{
	public:
		virtual int getResult()
		{
			return 0;
		}
	
		int num1;
		int num2;
};

class Addcalculator : public Abstractcalculator
{
	int getResult()
	{
		return num1 + num2;	
	}

};

class Subcalculator : public Abstractcalculator
{
	int getResult()
	{
		return num1 - num2;
	}

};

class Mulcalculator : public Abstractcalculator
{
	int getResult()
	{
		return num1*num2;	
	}

};

int calculator()
{
	//动态多态使用条件
	//父类的指针或者引用，指向子类对象
	
	//构建加法
	Abstractcalculator *abs = new Addcalculator;
	abs->num1 = 100;
	abs->num2 = 100;

	cout << abs->num1 << "+" << abs->num2 << "=" << abs->getResult() << endl;
	//new出来的堆区内存，用完记得释放，abs指针内存被释放
	delete abs;

	//构建减法
	abs = new Subcalculator;
	abs->num1 = 100;
	abs->num2 = 100;

	cout << abs->num1 << "-" << abs->num2 << "=" << abs->getResult() << endl;
	delete abs;

	//构建乘法
	abs = new Mulcalculator;
	abs->num1 = 100;
	abs->num2 = 100;

	cout << abs->num1 << "*" << abs->num2 << "=" << abs->getResult() << endl;
	delete abs;
}
int main(int argc , char ** argv)
{
	calculator();

	return 0;
}
