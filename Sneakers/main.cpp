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

    Sneaker() {}

    Sneaker(string name, int size, string color) {
        this->name = name;
        this->size = size;
        this->color = color;
        sneakerCount++;
    }

    ~Sneaker() {
        sneakerCount--;
    }

    void printDetails() const {
        cout << "Sneaker: " << name << ", Size: " << size << ", Color: " << color << endl;
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

    SneakerBrand() {}

    SneakerBrand(string brandName) {
        this->brandName = brandName;
        brandCount++;
    }

    ~SneakerBrand() {
        brandCount--;
    }

    void printBrandInfo() const {
        cout << "Brand: " << brandName << endl;
    }

    static int getBrandCount() {
        return brandCount;
    }
};

int SneakerBrand::brandCount = 0;

int main() {
    Sneaker sneakers[3] = {
        Sneaker("Dunks", 10, "Red"),
        Sneaker("Ultra Boost", 9, "Black"),
        Sneaker("Gel Kayano", 11, "Blue")
    };

    SneakerBrand brands[3] = {
        SneakerBrand("Nike"),
        SneakerBrand("Adidas"),
        SneakerBrand("Asics")
    };

    cout << "Sneaker Details:" << endl;
    for (int i = 0; i < 3; ++i) {
        sneakers[i].printDetails();
    }

    cout << "\nSneaker Brand Info:" << endl;
    for (int i = 0; i < 3; ++i) {
        brands[i].printBrandInfo();
    }

    cout << "\nTotal Sneakers: " << Sneaker::getSneakerCount() << endl;
    cout << "Total Brands: " << SneakerBrand::getBrandCount() << endl;

    return 0;
}
