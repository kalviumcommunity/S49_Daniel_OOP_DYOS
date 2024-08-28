#include <iostream>
#include <string>
using namespace std;

class Sneaker {
public:
    string name;
    int size;
    string color;

    void setDetails(string newName, int newSize, string newColor) {
        name = newName;
        size = newSize;
        color = newColor;
    }

    string getDescription() const {
        return "Sneaker: " + name + ", Size: " + to_string(size) + ", Color: " + color;
    }

    void updateSize(int newSize) {
        size = newSize;
    }

    void printDetails() const {
        cout << getDescription() << endl;
    }
};

class SneakerBrand {
public:
    string brandName;

    void setBrandName(string newBrandName) {
        brandName = newBrandName;
    }

    string getBrandName() const {
        return brandName;
    }

    void printBrandInfo() const {
        cout << "Brand: " << brandName << endl;
    }

    void renameBrand(string newBrandName) {
        brandName = newBrandName;
    }
};

int main() {
    Sneaker mySneaker;
    mySneaker.setDetails("Air Max", 10, "Red");

    SneakerBrand myBrand;
    myBrand.setBrandName("Nike");

    mySneaker.printDetails();
    myBrand.printBrandInfo();

    mySneaker.updateSize(11);
    mySneaker.updateColor("Blue");
    mySneaker.printDetails();

    myBrand.renameBrand("Adidas");
    myBrand.printBrandInfo();

    return 0;
}
