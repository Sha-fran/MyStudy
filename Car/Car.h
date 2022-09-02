#ifndef CAR_H
#define CAR_H

#include <iostream>
#include "Point.h"

class OutOfFuel {};
class ToMuchFuel {};

class Car {
public:
   Car(double capacity=60, double consumption=0.6, const Point& location=Point(0.0, 0.0), const std::string& model="Mercedes");
   ~Car();

   double getFuelAmount() const;
   double getFuelCapacity() const;
   double getFuelConsumption() const;
   const Point& getLocation() const;
   const std::string& getModel() const;

   void drive(const Point& destination);
   void drive(double x, double y);
   void refill(double fuel);

private:
   double fuelAmount;
   double fuelCapacity;
   double fuelConsumption;
   Point location;
   std::string model;
};

std::ostream& operator<<(std::ostream& out, const Car& car);

#endif //CAR_H
