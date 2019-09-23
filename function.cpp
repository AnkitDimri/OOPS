#include <iostream>
#include "function.h"
//#ifndef _STATE_H
//#define _STATE_H
#include "state.h"
//#endif

// class state;

 void Friend::display(state& s) {
     std::cout << "\n\n\t Name of the state : " << s.name;
     std::cout << "\n\t Capital : " << s.capital;
     std::cout << "\n\t Population : " << s.population;
     std::cout << "\n\t Area : " << s.area;
 }
