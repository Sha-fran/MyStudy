#include <iostream>
#include <cmath>

class Vector {
public:
    Vector() {
        this->x = x;
        this->y = y;
    }

    double getX() const {
        return this->x;
    }

    double getY() const {
        return this->y;
    }

    void setX(double x) {
        this->x = x;
    }

    void setY(double y) {
        this->x = x;
    }

    void vectorIncrement(Vector other) {
        this->x += other.x;
        this->y += other.y;
    }

    void vectorDecrement(Vector other) {
        this->x -= other.x;
        this->y -= other.y;
    }

    int vectorEqual(Vector other) {
        return this->x == other.x && this->y == other.y;
    }

    Vector vectorSum(Vector other) {
        vectorIncrement(other); 
        return *this;
    }

    Vector vectorDiff(Vector other) {
        vectorDecrement(other); 
        return *this;
    }

    double vectorLen() {
        return hypot(this->x, this->y);
    }

    void vectorPrint() {
        std::cout << "(" 
                  << this->x << ", "
                  << this->y << ")";
    }

private:
    double x;
    double y;
};

std::ostream& operator<<(std::ostream& os, const Vector& vector) {
    os  << "("
        << vector.getX()
        << ", "
        << vector.getY()
        << ")";

    return os;
}

int main() {
    Vector vectorA, vectorB;

    // vectorA.vectorPrint();
    // vectorB.vectorPrint();
    
    std::cout << "Vector A: " << vectorA << std::endl;
    std::cout << "Vector B: " << vectorB << std::endl;

    // std::cout << "incremented vector is: " << vectorA.vectorIncrement(vectorB) << std::endl;

    // std::cout    << "decremented vector is: " 
    //          << vectorA.vectorDecrement(vectorB) 
    //          << std::endl;

    std::cout   << "is equal: " 
                << vectorA.vectorEqual(vectorB) 
                << std::endl;

    std::cout   << "sum of vectors: " 
                << vectorA.vectorSum(vectorB) 
                << std::endl;

    std::cout   << "difference of vectors: " 
                << vectorA.vectorDiff(vectorB) 
                << std::endl;

    std::cout   << "length of vector is: "
                << vectorA.vectorLen() 
                << std::endl;

    return 0;
}