#include <iostream>
#include <string>

using namespace std;

class Memory
{
public:
    Memory()
    {
        cout << "Memory()" << endl;
    }
    ~Memory()
    {
        cout << "~Memory()" << endl;
    }
};

class Disk
{
public:
    Disk()
    {
        cout << "Disk()" << endl;
    }
    ~Disk()
    {
        cout << "~Disk()" << endl;
    }
};

class CPU
{
public:
    CPU()
    {
        cout << "CPU()" << endl;
    }
    ~CPU()
    {
        cout << "~CPU()" << endl;
    }
};

class MainBoard
{
public:
    MainBoard()
    {
        cout << "MainBoard()" << endl;
    }
    ~MainBoard()
    {
        cout << "~MainBoard()" << endl;
    }
};

class Computer  // 这个地方不仅描述了事物，也还描述了关系，里面只要有一个类不存在，电脑这个类也就不复存在了；
{
    Memory mMem;
    Disk mDisk;
    CPU mCPU;
    MainBoard mMainBoard;
public:
    Computer()  // 这里会先调用类成员的构造函数，之后调用电脑类的构造函数，这说明了组合关系；电脑类对象的创建，要依赖上述四个类的对象的创建；
    {
        cout << "Computer()" << endl;
    }
    void power()
    {
        cout << "power()" << endl;
    }
    void reset()
    {
        cout << "reset()" << endl;
    }
    ~Computer()  // 电脑类析构的时候，也会将对应的类成员析构，这说明同生死；说明了电脑类对象的存在完全依赖于类成员对象的存在；
    {
        cout << "~Computer()" << endl;
    }
};

int main()
{
    Computer c;

    return 0;
}
