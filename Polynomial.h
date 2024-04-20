#include <iostream>
#include <vector>
#include <string>

/* Note: here coff and pow and parallel arrays, which means
     that for example: coff : [3,-1,2,1] and pow : [7,9,2,0] then
      it represents 3x^7 - x^9 + 2x^2 + 1  */

// 333x^ 9 - 42x^12 + 1      
// coff : [3,-42,1]
// pow :  [9,12,0]


class Polynomial
{
    private:
        std::vector<double> coff;   // represents coeffecients of the polynomial
        std::vector<double> pow;    // represent corresponding powers
           
    public:
        Polynomial();   // default constructor
        Polynomial(int* pow,double* coff,int pow_size);   // parametrized ctor, intialize Polynomial with given values
        Polynomial(std::string equation);  
        void display(); // prints polynomial
        double evaluate(double x0); // evaluates polynomial at x = x0
        void test();
        

};