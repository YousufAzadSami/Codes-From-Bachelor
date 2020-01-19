#include <iostream>

using namespace std;

class planet{
protected:
    double distance;
    int revolve;
public:
    planet(double d, int r){
        distance = d;
        revolve = r;
    }
};

class earth : public planet{
    double circumference;
public:
    earth(int d, int r) : planet(d, r){
        circumference = 2 * distance * 3.14159;
    }
    void show(){
        cout << "earth: " << endl;
        cout << "distance: " << distance << endl;
        cout << "revolve: " << revolve << endl;
        cout << "circumference: " << circumference << endl;
    }
};

int main()
{
    earth e(93000000 ,365);
    e.show();

    return 0;
}
