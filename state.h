#include <iostream>
#include <cstring>
#ifndef _STATE_H
#define _STATE_H
#include "function.h"
/*#ifndef _NATION_H
#define _NATION_H
#include "nation.h"
#endif*/

#include "nation.h"

// Class defination
class state: public nation {

    char name[20];
    char capital[20];
    unsigned int population;
    float area;

public:

    /* Constructors */
    state();   // Default Constructor
    state(const char*, const char*, unsigned int, float);  // Parameterized Constructor
    state(state&); // Copy Constructor

    // Destructor
    ~state() { std::cout << "\n\n\t Destructor called (class state)";}

    /* Getters */
    char* get_name() { return name;}
    char* get_capital() { return capital;}
    unsigned int get_popln() { return population;}
    float get_area() { return area;}

    /* Setters */
    void set_name(char* name) { strcpy(this->name, name);}
    void set_capital(char* capital) { strcpy(this->capital, capital);}
    void set_popln(unsigned int population) { this->population = population;}
    void set_area(float area) { this->area =  area;}

    /* Friend Function */
    friend void Friend::display(state&);

    /* Operator Overloading */

    // Overloading ->
    state* operator -> () { return this; }
    // Overloading []
    state operator [] (state s);

};

 // Default Constructor
 state::state() {
    std::cout << "\n\n\t Default Constructor called (class state)\n";
    strcpy(name, "\0");
    strcpy(capital, "\0");
    population = 0;
    area = 0;
 }

 // Parameterized Constructor
 state::state(const char* name, const char* capital, unsigned int population, float area) {
     std::cout << "\n\n\t Paremeterized Constructor called (class state)\n";
     strcpy(this->name, name);
     strcpy(this->capital, capital);
     this->population = population;
     this->area = area;
 }

 // Copy Constructor
 state::state(state& s) {
     std::cout << "\n\n\t Copy Constructor called (class state)\n";
     strcpy(name, s.name);
     strcpy(capital, s.capital);
     population = s.population;
     area = s.area;
 }

 // Overloading []
 state state::operator [] (state s) {
   std::cout << "\n\n\t [] ovrloaded function called \n\n";
   strcpy(name, s.name);
   strcpy(capital, s.capital);
   population = s.population;
   area = s.area;
   return s;
 }

 void Friend::display(state& s) {
     std::cout << "\n\n\t Name of the state : " << s.name;
     std::cout << "\n\t Capital : " << s.capital;
     std::cout << "\n\t Population : " << s.population;
     std::cout << "\n\t Area : " << s.area;
 }

#endif
