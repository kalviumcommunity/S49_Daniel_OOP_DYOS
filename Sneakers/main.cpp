#include <iostream>
#include <string>

using namespace std;


//every class represents it's single responsibility Principle

//For each class there are only neccessary and related methods if there are any non-neccessary methods then it voilates interface segregation principle

class Footwear {
    //Here abstract class Footwear is OPEN for getting inherited
    //Closed for modification
protected:
    string name;
    int size;
    string color;

public:
    Footwear() {}

    Footwear(string name, int size, string color) : name(name), size(size), color(color) {}

    virtual void printDetails() const = 0;  

    string getName() const {
        return name;
    }
};

class SneakerBrand {
private:
    string brandName;

public:
    static int brandCount;

    SneakerBrand() {}

    SneakerBrand(string brandName) : brandName(brandName) {
        brandCount++;
    }

    virtual ~SneakerBrand() {
        brandCount--;
    }

    virtual void printBrandInfo() const = 0;  

    static int getBrandCount() {
        return brandCount;
    }

    string getBrandName() const {
        return brandName;
    }
};

int SneakerBrand::brandCount = 0;

class Sneaker : public Footwear, public SneakerBrand {
    //footwear inherited here and virtual function of abstract class can be accessed
public:
    static int sneakerCount;

    Sneaker() : Footwear(), SneakerBrand() {}

    Sneaker(string name, int size, string color, string brandName) : Footwear(name, size, color), SneakerBrand(brandName) {
        sneakerCount++;
    }

    ~Sneaker() {
        sneakerCount--;
    }

    void printDetails() const override {
        cout << "Sneaker: " << name << ", Size: " << size << ", Color: " << color << ", Brand: " << getBrandName() << endl;
    }

    void printBrandInfo() const override {
        cout << "Brand: " << getBrandName() << endl;
    }

    static int getSneakerCount() {
        return sneakerCount;
    }
};

int Sneaker::sneakerCount = 0;

class SportShoe : public Footwear {
    //footwear inherited here and virtual function of abstract class can be accessed
private:
    string sportType;

public:
    SportShoe(string name, int size, string color, string sportType) : Footwear(name, size, color), sportType(sportType) {}

    void printDetails() const override {
        cout << "Sport Shoe: " << name << ", Size: " << size << ", Color: " << color << ", Sport Type: " << sportType << endl;
    }
};

int main() {
    SportShoe sportShoes[2] = {
        SportShoe("Running Shoes", 10, "Black", "Running"),
        SportShoe("Basketball Shoes", 12, "White", "Basketball")
    };

    cout << "Sport Shoe Details:" << endl;
    for (int i = 0; i < 2; ++i) {
        sportShoes[i].printDetails();
    }    
    cout << endl;

    Sneaker sneakers[3] = {
        Sneaker("Dunks", 10, "Red", "Nike"),
        Sneaker("Ultra Boost", 9, "Black", "Adidas"),
        Sneaker("Gel Kayano", 11, "Blue", "Asics")
    };

    cout << "Sneaker Details:" << endl;
    for (int i = 0; i < 3; ++i) {
        sneakers[i].printDetails();
    }

    cout << "\nTotal Sneakers: " << Sneaker::getSneakerCount() << endl;
    cout << "Total Brands: " << SneakerBrand::getBrandCount() << endl;

    return 0;
}
