#include <string>
#include "Pen.h"
	
	Pen::Pen(int inkCapacity)
	{
		this->inkAmount = 0;
        this->inkCapacity = inkCapacity;
	}

	Pen::~Pen()
	{

	}

	int Pen::getInkAmount() const
	{
		return this->inkAmount;
	}

	int Pen::getInkCapacity() const
	{
		return this->inkCapacity;
	}

	void Pen::write(Paper& paper, const std::string& message)
	{
		this->inkAmount -= message.size();

		if ( inkAmount <= 0 ) 
		{
			throw OutOfInk();
		}

		this->inkAmount -= message.size();
		paper.addContent(message);
	}

	void Pen::refill()
	{
		this->inkAmount = inkCapacity;
	}
