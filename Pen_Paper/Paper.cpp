#include <string>
#include "Paper.h"

    Paper::Paper(int maxSymbols)
    {
        this->maxSymbols = maxSymbols;
        this->symbols = 0;
    }

    Paper::~Paper()
    {

    }

    int Paper::getMaxSymbols() const
    {
        return this->maxSymbols;
    }

    int Paper::getSymbols() const
    {
        return this->symbols;
    }

    void Paper::addContent(const std::string& message)
    {
        int needsOfPlace = this->symbols + message.size();

        if ( needsOfPlace > this->maxSymbols ) 
        {

            content.insert((content.size()), message.substr(0, (message.size() - (needsOfPlace - maxSymbols))));
            this->symbols = content.size();
        } else {
            content.insert(content.size(), message);
            this->symbols = content.size();
        }

        if ( this->symbols == this->maxSymbols ) {
            throw OutOfSpace();
        }
    }

    void Paper::show() const
    {        
        std::cout   << "Number o symbols is: " <<  this->symbols << std::endl
                    << this->content << std::endl;
    }
