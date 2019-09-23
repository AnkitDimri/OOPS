#include <iostream>
#include <cstring>
#ifndef _NATION_H
#define _NATION_H

// Class Definition
class nation {

      char name[20];
      char capital[20];
      unsigned int rank;

    public:

      // Constructors
      nation();  // Default Constructor
      nation(const char*, const char*, unsigned int); // Parameterized Constructor

      // Destructor
      virtual ~nation() { std::cout << "\n\n\t vritual Destructor called (class nation)\n\n";}
      //~nation() { std::cout << " \n\n\t Destructor called (class nation)\n\n" << '\n';}

      /* Getters */
      virtual char* get_name() { return name;}
      char* get_capital() { return capital;}
      unsigned int get_rank() { return rank;}

      /* Setters */
      virtual void set_name(const char* name) { strcpy(this->name, name);}
      void set_capital(const char* capital) { strcpy(this->capital, capital);}
      void set_rank(unsigned int rank) { this->rank = rank;}

};

 nation::nation() {
   std::cout << "\n\n\t Default constructor called (class nation)\n";
   strcpy(name, "India");
   strcpy(capital, "delhi");
   rank = 1;
 }

 nation::nation(const char* name, const char* capital, unsigned int rank) {
   std::cout << "\n\n\t Parameterized constructor called (class nation) \n" << '\n';
   strcpy(this->name, name);
   strcpy(this->capital, capital);
   this->rank = rank;
 }


#endif
