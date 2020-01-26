#include <iostream>
using namespace std;

class foo
{
    private:
        static int count;
    public:
        foo()
        {count++;}
        int getcount()const
        {return count;}
};

int foo::count = 0;

int main()
{
    foo f1, f2, f3;
    cout<<"static count = "<<f1.getcount()<<endl;
    cout<<"static count = "<<f2.getcount()<<endl;
    cout<<"static count = "<<f3.getcount()<<endl;
}