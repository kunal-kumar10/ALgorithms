#include<stdc++.h>
using namespace std;

class Free{
    public:
    int a;

    void operator+ (){
        this->a = -(this->a);
    }
};

// class Empty{

// };
int main(){

    // //Static Initiazation
    // Hero h(10,50);

    // // h.level = 2;
    // // h.health = 100;         // Gives an error

    // // h.setHealth(70);
    // cout << h.level << " " << h.getHealth() << endl;


    // //Dynamic Allocation
    // Hero *i = new Hero(15,70);
    // // i->level = 12;
    // // cout << i->level << endl;
    // // (*i).level = 14;
    // cout << i->level<<" "<< i->getHealth() << endl;

    // // (*i).setHealth(70);
    // // cout << (*i).getHealth() << endl;
    // // i->setHealth(80);
    // // cout << i->getHealth()<< endl;


    Free f;
    f.a = 10;
    cout << f.a << endl;
    +f;
    cout << f.a << endl;

    return 0;
}