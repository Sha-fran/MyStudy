// Пистолет имеет следующие свойства:
// Емкость магазина (capacity)
// Количество патронов в магазине (amount)
// Название (model)
// Индикатор готовности пистолета к стрельбе (isReady)
// Общее количество выстрелов из пистолета (totalShots)
// С завода пистолет приходит разряженным.
// Пистолет может стрелять. Каждый выстрел сопровождается выводом надписи "Bang!" в консоль.
// Пистолет можно зарядить. При зарядке магазин заряжается максимальным количеством патронов.
// Перед стрельбой пистолет необходимо подготовить.
// Без патронов пистолет не стреляет.

// Примечания:
// Изобретать велосипед не нужно, принимайте очевидные решения:
// CODE
// void Gun::prepare() {
//    isReady = !isReady;
// }

// void Gun::reload() {
//    amount = capacity;
// }

// void Gun::shoot() {
//    if ( !ready() ) {
//        throw NotReady();
//    }
//    if ( amount == 0 ) {
//        throw OutOfRounds();
//    }
//    .... // code
// }


// #include <iostream>
// #include "Gun.h"

// int main {
//     Gun beretta("Beretta", 10);

//     std::cout << beretta << std::endl;

//     beretta.reload();
//     beretta.prepare();

//     beretta.shoot();

//     std::cout << beretta << std::endl;

//     return 0;
// }

#include <iostream>
#include "Gun.h"

int main()
{
   Gun gun;
       Gun beretta("Beretta", 10);

       std::cout << gun << std::endl;
       std::cout << beretta << std::endl;

       beretta.reload();
       beretta.prepare();

       beretta.shoot();

       std::cout << gun << std::endl;
       std::cout << beretta << std::endl;

   return 0;
}
