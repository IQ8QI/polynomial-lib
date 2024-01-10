#include <cstdarg>

#include "polynomial.hpp"

using namespace std;

//Create polynomial using just numbers
//template<typename... double>
poly::poly::poly(double arguments...){
        va_list args;
        va_start(args, arguments);

        size_t arg_no = sizeof(arguments);
        for(size_t i = 0; i < arg_no; i++){
                values[i] = va_arg(args, double);
        }

        va_end(args);
}

//Create polynomial using vector<double>
poly::poly::poly(vector<double> arguments){
        values = arguments;
}
/*
//Create polynomial with non-zero base
poly::poly::poly(int base, double values...);

//Create polynomial with non-zero base and vector
poly::poly::poly(int base, vector<double> values);
*/

//Return text representation of given polynomial
string poly::poly::show(){
        string result = "";
        for(size_t i = 0; i < values.size(); i++){
                if(values[i] == 0){
                        continue;
                }
                if(values[i] > 0 && i > 0){
                        result += "+";
                }
                //result += static_cast<string>(values[i]);
                result += to_string(values[i]);
                if(base + i != 0){
                        result += "*X^(";
                        //result += static_cast<string>(i + base);
                        result += to_string(i + base);
                        result += ")";
                }
        }
        return result;
}

/*
//Create polynomial from string formated like result of show()
static poly read(string input);

//Calculate value of polynomial for given argument
double poly::get_value(double argument);

//Add polynomial with something
poly poly::operator+(poly other);
poly poly::operator+(double other);

//Subtract poynomial with something
poly poly::operator-(poly other);
poly poly::operator-(double other);

//Multiply poynomial with something
poly poly::operator*(poly other);
poly poly::operator*(double other);

//Divide poynomial with something
poly poly::operator/(poly other);
poly poly::operator/(double other);

//Calculate derivative of polynomial
void poly::derivative();

//Calculate integral of polynomial
void poly::integral();
*/
