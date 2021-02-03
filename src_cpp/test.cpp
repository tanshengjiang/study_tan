#include<iostream>

using namespace std;

class Animal
{
	public:
	virtual	void speak()
		{
			cout << "动物在跳舞" << endl;	
		}

};

class Cat : public Animal
{
	public:
		void speak()
		{
			cout << "小猫在跳舞" << endl;	
		}

};

class Dog : public Animal
{
	public: 
		void speak()
		{
			cout << "小狗在跳舞" << endl;	
		}
};


void dospeak(Animal &animal)
{
	animal.speak();
}

int main(int argc , char ** argv)
{
	Animal animal;
	dospeak(animal);
	
	Cat cat;
	dospeak(cat);

	Dog dog;
	dospeak(dog);

	return 0;

}
