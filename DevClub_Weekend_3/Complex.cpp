#include <iostream>
#include <cmath>

class Complex {
public:
	Complex() {
		this->re = re;
		this->im = im;
	}

	double getRe() const {
		return this->re;
	}

	double getIm() const {
		return this->im;
	}

	void setRe(double re) {
		this->re = re;
	}

	void setIm(double im) {
		this->im = im;
	}

void complexIncrement(Complex other) {
    this->re += other.re;
    this->im += other.im;
}

void complexDecrement(Complex other) {
    this->re -= other.re;
    this->im -= other.im;
}

void complexMultiply(Complex other) {
    Complex cache = *this;
    
    this->re = (cache.re * other.re) - (cache.im * other.im);
    this->im = (cache.re * other.im) + (cache.im * other.re);
}

Complex complexSum(Complex other) {
    complexIncrement(other);    
    return *this;
}

Complex complexDiff(Complex other) {
    complexDecrement(other);    
    return *this;
}

Complex complexProduct(Complex other) {
    complexMultiply(other);    
    return *this;
}

int complexEqual(Complex other) {
    return this->re == other.re && this->im == other.im;
}

double complexAbs() {
    return hypot(this->re, this->im);
}

void complexPrint() {
    std::cout << "(" 
                  << this->re << ", "
                  << this->im << ")";
}

private:
	double re;
	double im;
};

std::ostream& operator<<(std::ostream& os, const Complex& complex) {
	os 	<< "("
		<< complex.getRe()
		<< ", "
		<< complex.getIm()
		<< ")";

	return os;
}

int main() {
	Complex complexA, complexB;

	// complexA.complexPrint();
	// complexB.complexPrint();
	
	std::cout << "complexA : " << complexA << std::endl;
	std::cout << "complexB : " << complexB << std::endl;

	// std::cout 	<< "increment: " 
	// 			<< complexA.complexIncrement(complexB) 
	// 			<< std::endl;

	std::cout 	<< "is equal: " 
				<< complexA.complexEqual(complexB) 
				<< std::endl;

	std::cout 	<< "sum of complexes: " 
				<< complexA.complexSum(complexB) 
				<< std::endl;

	std::cout 	<< "difference of complexes: " 
				<< complexA.complexDiff(complexB) 
				<< std::endl;

	std::cout 	<< "ABS: "
				<< complexA.complexAbs() 
				<< std::endl;

	return 0;
}
