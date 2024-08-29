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
        this->brandName = newBrandName;
        brandName = newBrandName;
    }

    string getBrandName() const {
        return brandName;
    }


    void printBrandInfo() {

    void printBrandInfo() const {
        cout << "Brand: " << brandName << endl;
    }

    void renameBrand(string newBrandName) {
        this->brandName = newBrandName;
        brandName = newBrandName;
    }
};

int main() {

    Sneaker sneakers[3];
    sneakers[0].setDetails("Air Max", 10, "Red");
    sneakers[1].setDetails("Ultra Boost", 9, "Black");
    sneakers[2].setDetails("Gel Kayano", 11, "Blue");

    SneakerBrand brands[3];
    brands[0].setBrandName("Nike");
    brands[1].setBrandName("Adidas");
    brands[2].setBrandName("Asics");

    cout << "Sneaker Details:" << endl;
    for (int i = 0; i < 3; ++i) {
        sneakers[i].printDetails();
    }

    cout << "\nSneaker Brand Info:" << endl;
    for (int i = 0; i < 3; ++i) {
        brands[i].printBrandInfo();
    }
    
    Sneaker mySneaker;
    mySneaker.setDetails("Air Max", 10, "Red");

    SneakerBrand myBrand;
    myBrand.setBrandName("Nike");

    mySneaker.printDetails();
    myBrand.printBrandInfo();

    mySneaker.updateSize(11);
    mySneaker.printDetails();



    mySneaker.updateSize(11);
    mySneaker.printDetails();

    myBrand.renameBrand("Adidas");
    myBrand.printBrandInfo();

    return 0;
}
