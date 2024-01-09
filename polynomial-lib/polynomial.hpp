#ifndef POLYNOMIAL
#define POLYNOMIAL

#include <vector>
#include <string>

using namespace std;

namespace poly{
        class poly{
        private:
                int base = 0;
                vector<double> values;
        public:
                //Create polynomial using just numbers
                poly(double values...);

                //Create polynomial using vector<double>
                poly(vector<double> values);

                //Return text representation of given polynomial
                string show();

                //Calculate value of polynomial for given argument
                double get_value(double argument);

                //Add polynomial with something
                poly operator+(poly other);
                poly operator+(double other);

                //Subtract poynomial with something
                poly operator-(poly other);
                poly operator-(double other);

                //Multiply poynomial with something
                poly operator*(poly other);
                poly operator*(double other);

                //Divide poynomial with something
                poly operator/(poly other);
                poly operator/(double other);

                //Calculate derivative of polynomial
                void derivative();

                //Calculate integral of polynomial
                void integral();
        };

        //Create polynomial with non-zero base
        poly special_poly(int base, double values...);

        //Create polynomial with non-zero base and vector
        poly special_poly(int base, vector<double> values);
}

#endif