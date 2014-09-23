#include <cstdlib>  // provides rand()
#include <iostream>
#include "array.h"
#include <ctime>

int main()
{
   Array a(1000000);
   //a.fill_sequential();
   a.fill_random();
   a.print();

   std::clock_t start = std::clock();
   a.do_something();
   std::clock_t end = std::clock();
   std::clock_t duration = end - start;
   a.print();
   std::cout << "duration\t" << duration << std::endl;
}
