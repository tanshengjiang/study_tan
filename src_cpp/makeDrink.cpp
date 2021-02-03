//多态案例二：制作饮品

#include<iostream>

using namespace std;

class AbstractDrink
{
	public:
		//煮水
		virtual void Boil() = 0;
		
		//冲泡
		virtual void Brew() = 0;

		//倒入杯中
		virtual void PourInCup() = 0;

		//加入辅料
		virtual void Putsome() = 0;

		//制作
		void makeDrink()
		{
			Boil();
			Brew();
			PourInCup();
			Putsome();
		
		}
};

class Tea : public AbstractDrink
{
	public:
		virtual void Boil()
		{
			cout << "煮山泉水" << endl;
		}

		virtual void Brew()
		{
			cout << "冲泡" << endl;

		}

		virtual void PourInCup()
		{
			cout << "倒入杯中，过滤" << endl;
		}

		virtual void Putsome()
		{
			cout << "加入红枣和枸杞" << endl;	
		}
};

class Caffof : public AbstractDrink
{
	virtual void Boil()
	{
		cout << "煮矿泉水" << endl;	
	}

	virtual void Brew()
	{
		cout << "冲泡咖啡" << endl;	
	}

	virtual void PourInCup()
	{
		cout << "倒入杯中，搅拌" << endl;
	}

	virtual void Putsome()
	{
		cout << "加入牛奶和糖" << endl;	
	}

};

void doDrink(AbstractDrink *abs)
{
	//制作
	abs->makeDrink();	
	delete abs;
}

int main(int argc , char ** argv)
{
	//泡茶
	//AbstractDrink *tea = new Tea;
	//doDrink(tea);
	doDrink(new Tea);

	cout << "-------------" << endl;

	//泡咖啡
	//AbstractDrink *caffof = new Caffof;
	//doDrink(caffof);
	doDrink(new Caffof);

	return 0;
}
