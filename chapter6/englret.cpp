#include <iostream>
using namespace std;

class Distance
{
    private:
        int feet;
        float inches;
    public:
        Distance(): feet(0), inches(0.0) 
        {}
        Distance(int ft, float in): feet(ft), inches(in)
        {}
        void get_dist()
        {
            cout<<"Inp feets: "; cin>>feet;
            cout<<"Inp inches: "; cin>>inches;
        }
        void showdist()
        {
            cout<<feet<<"\' - "<<inches<<"\''"<<endl;
        }
        Distance add_dist(Distance);
};

Distance Distance::add_dist(Distance d)
{
    Distance temp;
    temp.inches = inches + d.inches; // private переменные доступны
    if (temp.inches >= 12)
    {
        temp.inches-=12;
        temp.feet++;
    }
    temp.feet+=feet + d.feet;
    return temp;
}

int main()
{
    Distance dist1, dist3;
    Distance dist2(11, 6.25);
    dist1.get_dist();
    dist3 = dist1.add_dist(dist2);

    cout<<"\ndist1 = "; dist1.showdist();
    cout<<"\ndist2 = "; dist2.showdist();
    cout<<"\ndist3 = "; dist3.showdist();
    cout<<endl;
    // private переменные dist1.feet и т.п. не доступны
}
