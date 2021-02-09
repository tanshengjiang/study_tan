#include<iostream>

using namespace std;

class Person
{
	public:

	Person(int age ,int height)
	{
		m_age = age;	
		m_height = new int(height);
		cout << "Person的构造函" << endl;
	}

	Person(const Person& p)
	{
		cout << "拷贝构造函数" << endl;
		m_age = p.m_age;
		m_height = new int(*p.m_height);
	}

	~Person()
	{
		if(m_height != NULL)
		{
			delete m_height;
			m_height = NULL;
		}
		cout << "Person的析构函数" << endl;	
	}

	int m_age;
	int *m_height;
};

void test1()
{
	Person p1(18 , 160);
	cout << "年龄:" << p1.m_age << "身高：" << *p1.m_height <<  endl;
	Person p2(p1);
	cout << "年龄" << p2.m_age << "身高：" << *p2.m_height << endl;
}

int main(int argc , char **argv)
{
	test1();
	return 0;
}
