#include <iostream>
#include <string>
using namespace std;

class Sneaker {
public:
    string name;
    int size;
    string color;

    void setDetails(string newName, int newSize, string newColor) {
        this->name = newName;
        this->size = newSize;
        this->color = newColor;
    }

    string getDescription() const {
        return "Sneaker: " + name + ", Size: " + to_string(size) + ", Color: " + color;
    }

    void updateSize(int newSize) {
        this->size = newSize;
    }

    void printDetails(){
        cout << getDescription() << endl;
    }
};

class SneakerBrand {
public:
    string brandName;

    void setBrandName(string newBrandName) {
        this->brandName = newBrandName;
    }

    string getBrandName() const {
        return brandName;
    }

    void printBrandInfo() {
        cout << "Brand: " << brandName << endl;
    }

    void renameBrand(string newBrandName) {
        this->brandName = newBrandName;
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
    mySneaker.printDetails();

    myBrand.renameBrand("Adidas");
    myBrand.printBrandInfo();

    return 0;
}







