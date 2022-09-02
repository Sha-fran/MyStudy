#ifndef UNIT_H
#define UNIT_H

#include <iostream>

//exceptions
class UnitIsDead {};

class Unit {
   private:
       //private properties
       int damage;
       int hitPoints;
       int hitPointsLimit;
       std::string name;

       //private methods
       void ensureIsAlive();
   public:
       //constructor & destructor
       Unit(const std::string& name, int hp, int dmg);
       ~Unit();

       //accessors
       int getDamage() const;
       int getHitPoints() const;
       int getHitPointsLimit() const;
       const std::string& getName() const;

       //mutators
       void takeDamage(int dmg);
       void addHitPoints(int hp);

       //behavioral methods
       void attack(Unit& enemy);
       void counterAttack(Unit& enemy);
};

//ostream operator overloading
std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif //UNIT_H