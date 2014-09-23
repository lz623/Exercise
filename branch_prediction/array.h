#include <cstddef>

class Array
{
  public:
   Array( std::size_t s )
   {
      size = s;
      p_array = new int [size];
   }

   ~Array()
   {
      delete p_array;
   }

   void fill_sequential()
   {
      for(std::size_t i=0; i<size; ++i)
      {
	 p_array[i] = 0;
      }
   }

   void fill_random()
   {
      for(std::size_t i=0; i<size; ++i)
      {
	 p_array[i] = rand()%1;
      }            
   }

   void do_something()
   {
      for(std::size_t i=0; i<size; ++i)
      {
	 if(i == 1 )
	    p_array[i] = 0;
      }
   }
	 

   void print()
   {
      for(int i=0; i<10; ++i)
	 std::cout << p_array[i] << std::endl;
      std::cout << "......" << std::endl;
   }

  private:
   int* p_array;
   std::size_t size;
};
