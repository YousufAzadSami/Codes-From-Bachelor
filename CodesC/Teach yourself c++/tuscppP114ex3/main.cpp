#include <iostream>

using namespace std;

class planet{
    int moons;
    double distanceFromSun;
    double diameter;
    double mass;
public:
    planet(double d){
        distanceFromSun = d;
    }
    double getMiles(){
        return distanceFromSun;
    }
};

double light(planet pp){
    return (double)(pp.getMiles()/186000.0);
}
/*
class earth : public planet{
    int humans;
public:
    earth(int i){
        humans = i;
    }
    int getHumans(){
        return humans;
    }
};
*/
int main()
{
    planet p(18600*9);

    cout << "the time for light to get to the planet is :" << light(p) << endl;

    return 0;
}
