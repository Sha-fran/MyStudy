#include "Unit.h"
       void Unit::ensureIsAlive()
       {
			if ( hitPoints == 0 ) 
			{
			    throw UnitIsDead();
	   		}
       }

       Unit::Unit(const std::string& name, int hp, int dmg)
       {
	       this->damage = dmg;
	       this->hitPoints = hp;
	       this->hitPointsLimit = hp;
	       this->name = name;

	       this->ensureIsAlive();
       }

       Unit::~Unit()
       {
       		
       }

       int Unit::getDamage() const
       {
       		return this->damage;
       }

       int Unit::getHitPoints() const
       {
       		return this->hitPoints;
       }

       int Unit::getHitPointsLimit() const
       {
       		return this->hitPointsLimit;
       }

       const std::string& Unit::getName() const
       {
       		return this->name;
       }

       void Unit::takeDamage(int dmg)
       {
       		ensureIsAlive();

       		this->hitPoints -= dmg;
       }

       void Unit::addHitPoints(int hp)
       {
       		ensureIsAlive();

       		this->hitPoints = hitPointsLimit;
       }

       void Unit::attack(Unit& enemy)
       {
       		ensureIsAlive();

       		if ( this->damage > enemy.hitPoints) 
       		{
       			enemy.hitPoints = 0;
       			ensureIsAlive();
       		} else {
       			enemy.hitPoints -= this->damage;
       		}
       		enemy.counterAttack(*this);
       }
       void Unit::counterAttack(Unit& enemy)
       {
       		if ( this->damage/2 > enemy.hitPoints) 
       		{
       			enemy.hitPoints = 0;
       			ensureIsAlive();
       		} else {
       			enemy.hitPoints -= this->damage/2;
       		}

       }

       std::ostream& operator<<(std::ostream& out, const Unit& unit)
       {
       		out << "Type of warrior: " << unit.getName() << std::endl
       			<< "Total hp: " << unit.getHitPointsLimit() << std::endl
       			<< "Current hp: " << unit.getHitPoints() << std::endl
       			<< "Damage: " << unit.getDamage() << std::endl
       			<< std::endl;

       		return out;
       }