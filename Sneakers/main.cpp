#include <iostream>
#include <string>
using namespace std;

class Sneaker {
public:
    string name;
    int size;
    string color;
};

class SneakerBrand {
public:
    string brandName;
};

int main() {
    Sneaker mySneaker;
    mySneaker.name = "Air Max";
    mySneaker.size = 10;
    mySneaker.color = "Red";

    SneakerBrand myBrand;
    myBrand.brandName = "Nike";

    cout << "Sneaker: " << mySneaker.name << ", Size: " << mySneaker.size << ", Color: " << mySneaker.color << endl;
    cout << "Brand: " << myBrand.brandName << endl;

    return 0;
}
