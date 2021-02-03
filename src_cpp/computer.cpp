#include<iostream>

using namespace std;

class CPU
{
		//抽象类
	public:
	virtual void calculate() = 0;
};

class VideoCard
{
	//抽象类
	public:
	virtual void display() = 0;
};

class Memory
{
	//抽象类
	public:
	virtual void storage() = 0;
};

//电脑类
class Computer
{
	public:
	Computer(CPU *cpu , VideoCard *vc , Memory *mem)
	{
		m_cpu = cpu;
		m_vc = vc;
		m_mem = mem;
	}
	//析构函数
	~Computer()
	{
		if(m_cpu != NULL)	
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		
		if(m_vc != NULL)
		{
			delete m_vc;
			m_vc = NULL;
		}

		if(m_mem != NULL)
		{
			delete m_mem;
			m_mem = NULL;
		}
	}
	
	void work()
	{
		m_cpu->calculate();
		m_vc->display();
		m_mem->storage();
	}

	private:
	CPU * m_cpu;
	VideoCard * m_vc;
	Memory *m_mem;
};

//具体的厂商
class IntelCpu : public CPU
{
virtual	void calculate()
	{
		cout << "Intel的cpu开始计算了！" << endl;
	}
};

class IntelVideoCard : public VideoCard
{
	public:
  virtual void display()
	{
		cout << "Intel的显卡开始工作了" << endl;	
	}
};

class Intelmemory : public Memory
{
	public:
	virtual void storage()
	{
		cout << "Intel的内存条开始存储了" << endl;
	}
};

class lenovoCpu : public CPU
{
	public:
	virtual void calculate()
	{
		cout << "lenovo的ｃｐｕ开始计算了" << endl;
	}
};

class lenovoVideoCard : public VideoCard
{
	public:
	virtual void display()
	{
		cout << "lenovo的显卡开始工作了" << endl;	
	}
};

class lenovomemory : public Memory
{
	public:
      	virtual void storage()
	{
		cout << "lenovo的内存条开始存储了" << endl;	
	}
};




int main(int argc , char ** argv)
{
	//创建零件
	CPU * Intelcpu = new IntelCpu;
	VideoCard * Intelvc = new IntelVideoCard;
	Memory * Intelmem = new Intelmemory;
	//组装电脑
	Computer *computer = new Computer(Intelcpu , Intelvc , Intelmem);
	computer->work();
	delete computer;
	return 0;
}
