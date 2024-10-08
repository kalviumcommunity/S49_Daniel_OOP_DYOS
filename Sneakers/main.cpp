#include <iostream>
#include <string>
using namespace std;

class Sneaker {
private:
    string name;
    int size;
    string color;

public:
    static int sneakerCount;

    void setName(string newName) {
        this->name = newName;
    }

    void setSize(int newSize) {
        this->size = newSize;
    }

    void setColor(string newColor) {
        this->color = newColor;
    }

    void setDetails(string newName, int newSize, string newColor) {
        setName(newName);
        setSize(newSize);
        setColor(newColor);
        sneakerCount++;
    }

    string getName() const {
        return name;
    }

    int getSize() const {
        return size;
    }

    string getColor() const {
        return color;
    }

    string getDescription() const {
        return "Sneaker: " + getName() + ", Size: " + to_string(getSize()) + ", Color: " + getColor();
    }

    void printDetails(){
        size = newSize;
    }

    void printDetails() const {
        cout << getDescription() << endl;
    }

    static int getSneakerCount() {
        return sneakerCount;
    }
};

int Sneaker::sneakerCount = 0;

class SneakerBrand {
private:
    string brandName;

public:
    static int brandCount;

    void setBrandName(string newBrandName) {
        this->brandName = newBrandName;

        brandCount++;

        brandName = newBrandName;

    }

    void renameBrand(string newBrandName) {
        setBrandName(newBrandName);
    }

    string getBrandName() const {
        return brandName;
    }


    void printBrandInfo() {

    void printBrandInfo() const {

        cout << "Brand: " << getBrandName() << endl;

        cout << "Brand: " << brandName << endl;
    }

    void renameBrand(string newBrandName) {
        this->brandName = newBrandName;
        brandName = newBrandName;

    }

    static int getBrandCount() {
        return brandCount;
    }
};

int SneakerBrand::brandCount = 0;

int main() {

    Sneaker* sneakers = new Sneaker[3];

    SneakerBrand* brands = new SneakerBrand[3];
    
    sneakers[0].setDetails("Dunks", 10, "Red");



    Sneaker sneakers[3];


    sneakers[0].setDetails("Air Max", 10, "Red");

    sneakers[1].setDetails("Ultra Boost", 9, "Black");
    sneakers[2].setDetails("Gel Kayano", 11, "Blue");

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

    cout << "\nTotal Sneakers: " << Sneaker::getSneakerCount() << endl;
    cout << "Total Brands: " << SneakerBrand::getBrandCount() << endl;

    delete[] sneakers;
    delete[] brands;

    return 0;
}
