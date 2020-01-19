#include <iostream>

using namespace std;

class Building{
    int floors;
    int rooms;
    int squareFoot;
public:
    Building(int f, int r, int s){
        floors = f;
        rooms = r;
        squareFoot = s;
    }
    void showBuilding(){
        cout << "floors: " << floors << endl;
        cout << "rooms: "<< rooms << endl;
        cout << "squareFoot: " << squareFoot << endl;
    }

};

class House : public Building{
    int bedrooms;
    int bathrooms;
public:
    House(int f, int r, int s, int be, int ba) : Building(f,r,s){
        bedrooms = be;
        bathrooms = ba;
    }
    void show(){
        cout << "House info: " << endl;
        cout << "berooms: " << bedrooms << endl;
        cout << "bathrooms: " << bathrooms << endl;
        showBuilding();
    }
};

class Office : public Building{
    int fire;
    int telephone;
public:
    Office(int f, int r, int s, int fi, int t) : Building(f,r,s){
        fire = fi;
        telephone = t;
    }
    void show(){
        cout << "Office info:" << endl;
        cout << "fire: " << fire << endl;
        cout << "telephone" << telephone << endl;
        showBuilding();
    }
};

int main()
{
    Building b(6,60,60*1500);
    House h(3,3*10,30*1500,2,3);
    Office o(11,110,110*100,1,110);

    b.showBuilding();
    h.show();
    o.show();

    return 0;
}
