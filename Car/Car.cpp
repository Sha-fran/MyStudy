#include "Car.h"
// #include "Point.h"

   Car::Car(double capacity, double consumption, const Point& location, const std::string& model)
   {
   	this->fuelAmount = 0;
	   this->fuelCapacity = capacity;
	   this->fuelConsumption = consumption;
	   this-> location = location;
	   this->model = model;
   }
   Car::~Car() 
   {

   }

   double Car::getFuelAmount() const 
   {
   		return this->fuelAmount;
   }

   double Car::getFuelCapacity() const
   {
   		return this->fuelCapacity;
   }

   double Car::getFuelConsumption() const 
   {
   		return this->fuelConsumption;
   }

   const Point& Car::getLocation() const 
   {
   		return this->location;
   }

   const std::string& Car::getModel() const 
   {
   		return this->model;
   }

   void Car::drive(const Point& destination) 
   {
   	double distance, fuelSufficiency;

      distance = location.pointDistance(destination);
      fuelSufficiency = this->fuelConsumption * distance;

      if ( fuelSufficiency > this->fuelAmount ) {
         throw OutOfFuel();
      } else {
         this-> location = destination;
      }
   }

   void Car::drive(double x, double y) 
   {
      this->location.setX(x);
      this->location.setY(y); 
   }

   void Car::refill(double fuel) 
   {
      this->fuelAmount += fuel;
   		
      if ( this->fuelAmount > this->fuelCapacity ) {
         throw ToMuchFuel();
      }
   }

std::ostream& operator<<(std::ostream& out, const Car& car) {
   out   << "Car model: " << car.getModel() << std::endl
         << "Fuel amount: " << car.getFuelAmount() << std::endl
         << "Fuel capacity: " << car.getFuelCapacity() << std::endl
         << "Fuel consumption: " << car.getFuelConsumption() << std::endl
         << "Current location: " << car.getLocation() << std::endl;

         return out;
};

