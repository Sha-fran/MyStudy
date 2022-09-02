#include "Date.h"

   InvalidDate(std::string& text) {
      std::cout << text << std::endl;
   }

   void Date::validate(int day, int month, int year) {
   		int listOfMonths[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

   		if ((year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0) {
   			listOfMonths[1] = 29;
   		}

   		if ( day < 1 || day > listOfMonths[month - 1] || month < 1 || month > 12 || year < 1 || year > 9999 ) {
   			throw InvalidDate("Uncorrect date");
   		} else {
   			std::cout << "date is correct: " << std::endl;
   		}
   }

   Date::Date(int day, int month, int year) {
	   this->day = day;
	   this->month = month;
	   this->year = year;

      try
      {
         this->validate(day, month, year);
      }

      catch(const std::string& text)
      {
         InvalidDate(text);
      }
         
      }

   Date:: ~Date() {

   }

   int Date::getDay() const {
   		return this->day;
   }
   int Date::getMonth() const {
   		return this-> month;
   }
   int Date::getYear() const {
   		return this->year;
   }


   std::ostream& operator<<(std::ostream& out, const Date& date) {
   		out   << "day is:   " << date.getDay() << std::endl
   			   << "month is: " << date.getMonth() << std::endl
   			   << "year is:  " << date.getYear() << std::endl;

   		return out;
   }

