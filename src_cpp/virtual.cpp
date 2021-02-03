#include<iostream>
#include<string>

using namespace std;

class Animal
{
	public:
		virtual void speak() = 0;
		Animal()
		{
			cout << "Animal的构造函数" << endl;	
		}
		virtual ~Animal()
		{
			cout << "Animal的析构函数" << endl;	
		}
};

class Cat : public Animal
{
	public:
		void speak()
		{
			cout << *N_name << "小猫在跳舞" << endl;
		}

		Cat(string name)
		{
			cout << "Cat的构造函数" << endl;
			N_name = new string(name);	
		}

		~Cat()
		{
			if(N_name == NULL)	
			{
				delete N_name;
				N_name =NULL;
			}
			cout << "Cat的析构函数" << endl;
		}

		string *N_name;
};

int main(int argc , char ** argv)
{
	Animal *cat = new Cat("Tom");
	cat->speak();
	delete cat;
	return 0;
}

