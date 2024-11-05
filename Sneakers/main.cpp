#include <iostream>
#include <string>

using namespace std;

class Footwear {
protected:
    string name;
    int size;
    string color;

public:
    Footwear() {}

    Footwear(string name, int size, string color) {
        this->name = name;
        this->size = size;
        this->color = color;
    }

    virtual void printDetails() const {
        cout << "Footwear: " << name << ", Size: " << size << ", Color: " << color << endl;
    }


    string getName() const {
        return name;

    void printDetails(){
        size = newSize;
    }

    void printDetails() const {
        cout << "Sneaker: " << name << ", Size: " << size << ", Color: " << color << endl;
    }

    static int getSneakerCount() {
        return sneakerCount;

    }
};

class SneakerBrand {
private:
    string brandName;

public:
    static int brandCount;


    SneakerBrand() {}

    void setBrandName(string newBrandName) {
        this->brandName = newBrandName;

        brandCount++;

        brandName = newBrandName;

    }

    SneakerBrand(string brandName) {
        this->brandName = brandName;
    }

    ~SneakerBrand() {
        brandCount--;
    }


    void printBrandInfo() {

    void printBrandInfo() const {

        cout << "Brand: " << brandName << endl;


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

    string getBrandName() const {
        return brandName;
    }
};

int SneakerBrand::brandCount = 0;

class Sneaker : public Footwear, public SneakerBrand {
public:
    static int sneakerCount;

    Sneaker() : Footwear(), SneakerBrand() {}

    Sneaker(string name, int size, string color, string brandName) : Footwear(name, size, color), SneakerBrand(brandName) {
        sneakerCount++;
        brandCount++;
    }

    ~Sneaker() {
        sneakerCount--;
    }

    void printDetails() {
        cout << "Sneaker: " << name << ", Size: " << size << ", Color: " << color << ", Brand: " << getBrandName() << endl;
    }

    static int getSneakerCount() {
        return sneakerCount;
    }
};

int Sneaker::sneakerCount = 0;

class SportShoe : public Footwear {
public:
    string sportType;

    SportShoe(string name, int size, string color, string sportType) : Footwear(name, size, color) {
        this->sportType = sportType;
    }

    void printDetails() {
        cout << "Sport Shoe: " << name << ", Size: " << size << ", Color: " << color << ", Sport Type: " << sportType << endl;
    }
};

int main() {

    Footwear footwear[2] = {
        Footwear("Loafers", 9, "Brown"),
        Footwear("Flip Flops", 8, "Green")
    };
=======


    Sneaker sneakers[3] = {
        Sneaker("Dunks", 10, "Red", "Nike"),
        Sneaker("Ultra Boost", 9, "Black", "Adidas"),
        Sneaker("Gel Kayano", 11, "Blue", "Asics")
    };

    SneakerBrand brands[3] = {
        SneakerBrand("Nike"),
        SneakerBrand("Adidas"),
        SneakerBrand("Asics")
    };


    SportShoe sportShoes[2] = {
        SportShoe("Running Shoes", 10, "Black", "Running"),
        SportShoe("Basketball Shoes", 12, "White", "Basketball")
    };

    cout << "Sport Shoe Details: " << endl;
    for (int i = 0; i < 2; ++i) {
        sportShoes[i].printDetails();
    }    
    cout<<endl;

    cout << "Footwear Details:" << endl;
    for (int i = 0; i < 2; ++i) {
        footwear[i].printDetails();
    }

    cout << "\nSneaker Details:" << endl;


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

    return 0;
}