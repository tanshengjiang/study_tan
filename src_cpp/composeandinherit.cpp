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

class Computer
{
    Memory mMem;
    Disk mDisk;
    CPU mCPU;
    MainBoard mMainBoard;
public:
    Computer()
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
    ~Computer()
    {
        cout << "~Computer()" << endl;
    }
};

class HPBook : public Computer  // 要继承
{
    string mOS;
public:
    HPBook()  // 先调用父类的类成员构造函数，再调用父类的构造函数，再调用自身的构造函数；
    {
        mOS = "Windows 8";  // 出厂预装的 Windouw 8；
    }

    void install(string os)  // 添加新功能，安装操作系统
    {
        mOS = os;
    }

    void OS()  // 添加新功能，查看安装的系统
    {
        cout << mOS << endl;
    }
};

class MacBook : public Computer  // 要继承
{
public:
    void OS()
    {
        cout << "Mac OS" << endl;
    }
};

int main()
{
    HPBook hp;

    hp.power();
    hp.install("Ubuntu 16.04 LTS");
    hp.OS();

    cout << endl;

    MacBook mac;

    mac.OS();

    return 0;
}
