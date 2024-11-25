#include <iostream>
#include <string>

using namespace std;


//every class represents it's single responsibility Principle
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

    SneakerBrand(string brandName) : brandName(brandName) {
        brandCount++;

    void setBrandName(string newBrandName) {
        this->brandName = newBrandName;

        brandCount++;

        brandName = newBrandName;

    }

    SneakerBrand(string brandName) {
        this->brandName = brandName;

    }

    virtual ~SneakerBrand() {
        brandCount--;
    }

    virtual void printBrandInfo() const = 0;  



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


    Footwear footwear[2] = {
        Footwear("Loafers", 9, "Brown"),
        Footwear("Flip Flops", 8, "Green")
    };



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
