#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <functional>

// Class definition with operator overload
class Complex {
public:
    double real, imag;

    Complex(double r, double i) : real(r), imag(i) {}

    // Operator overload
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    void display() const {
        std::cout << "Complex: " << real << " + " << imag << "i" << std::endl;
    }
};

// Base class with virtual function
class Shape {
public:
    virtual void draw() const {
        std::cout << "Drawing Shape" << std::endl;
    }
};

// Derived class with overridden virtual function
class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing Circle" << std::endl;
    }
};

// Template function
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    // Using the Complex class
    Complex c1(1.0, 2.0);
    Complex c2(2.0, 3.0);
    Complex c3 = c1 + c2;
    c3.display();

    // Using inheritance and virtual functions
    Shape* shape = new Circle();
    shape->draw();
    delete shape;

    // File I/O
    std::ofstream outfile("example.txt");
    outfile << "This is a line in the file" << std::endl;
    outfile.close();

    std::ifstream infile("example.txt");
    std::string line;
    while (std::getline(infile, line)) {
        std::cout << line << std::endl;
    }
    infile.close();

    // Using STL and lambda expressions
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::for_each(numbers.begin(), numbers.end(), [](int n) {
        std::cout << "Number: " << n << std::endl;
    });

    // Using a lambda expression to create a function
    auto add_func = [](int a, int b) -> int {
        return a + b;
    };
    std::cout << "Lambda add: " << add_func(3, 4) << std::endl;

    // Using the template function
    std::cout << "Template add: " << add<int>(5, 7) << std::endl;

    // Additional class example
    class Animal {
    public:
        virtual void makeSound() const {
            std::cout << "Animal sound" << std::endl;
        }
    };

    class Dog : public Animal {
    public:
        void makeSound() const override {
            std::cout << "Bark" << std::endl;
        }
    };

    Animal* animal = new Dog();
    animal->makeSound();
    delete animal;

    // More STL usage
    std::vector<std::string> fruits = {"apple", "banana", "cherry"};
    std::sort(fruits.begin(), fruits.end());
    for (const auto& fruit : fruits) {
        std::cout << "Fruit: " << fruit << std::endl;
    }

    return 0;
}
