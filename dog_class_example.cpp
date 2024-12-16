#include <iostream>
#include <string>
using namespace std;

// Define the Dog class
class Dog {
private:
    // State/Structure: Properties of the Dog
    string breed;
    string color;
    double height;
    double weight;

public:
    // Constructor to initialize properties
    Dog(string b, string c, double h, double w) {
        breed = b;
        color = c;
        height = h;
        weight = w;
    }

    // Methods: Behavior of the Dog
    void shake() {
        cout << "The dog shakes its paw." << endl;
    }

    void sit() {
        cout << "The dog sits down." << endl;
    }

    void layDown() {
        cout << "The dog lays down." << endl;
    }

    // Display the dog's information
    void displayInfo() {
        cout << "Breed: " << breed << endl;
        cout << "Color: " << color << endl;
        cout << "Height: " << height << " feet" << endl;
        cout << "Weight: " << weight << " pounds" << endl;
    }
};

int main() {
    // Create an instance of the Dog class (Object)
    Dog myDog("Hound", "Brown", 2.0, 60.0);

    // Display the dog's properties
    cout << "Dog Information:" << endl;
    myDog.displayInfo();
    cout << endl;

    // Call the dog's behaviors
    cout << "Dog Behaviors:" << endl;
    myDog.shake();
    myDog.sit();
    myDog.layDown();

    return 0;
}