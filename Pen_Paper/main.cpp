// Ручка.
// Каждая ручка имеет максимальный запас чернил (inkCapacity) и текущее количество чернил (inkAmount).
// Ручка пишет по бумаге. За каждый написанный символ из текущего количества чернил ручки списывается одна единица чернил. 
// Без чернил ручка писать не может.
// Если в ручке недостаточно чернил, чтобы написать все сообщение, записывается столько символов, на сколько хватает чернил.
// Ручку можно перезаправить до максимального запаса чернил.

// Бумага.
// Каждый лист бумаги может вместить определенное количество символов (maxSymbols).
// Так же, в произвольный момент времени можно узнать, сколько символов уже написано на листе (symbols).
// На чистом листе бумаги нет ни одного символа. КО.
// Если на лист бумаги невозможно поместить все сообщение, необходимо записать столько символов, сколько может вместить лист.
// На заполненный лист бумаги невозможно ничего записать.
// Всегда есть возможность прочитать текст, написанный на листе бумаги.

// Примечания:
// ознакомиться с методами объектов std::string. Особое внимание уделить методам size(), length() и substr().

#include <iostream>
#include "Paper.h"
#include "Pen.h"

int main() {
	char str[] = "Hello! ";
	char str1[] = "How are you doing?";
	Pen pen;
	Paper paper;

	try 
	{
		pen.write(paper, str);
		pen.write(paper, str1);
	}

	catch(OutOfInk exc)
	{
		std::cout << "Doesn't enough ink...refiling..." << std::endl;
		pen.refill();
		std::cout << "Ink is enough! Please, write your message." << std::endl;
		pen.write(paper, str);
		pen.write(paper, str1);
	}

	catch(OutOfSpace exc) {
		std::cout << "Number of symbols is full. It is no possible to write more! " << std::endl;
		paper.show();
	}

	paper.show();


	return 0;
}