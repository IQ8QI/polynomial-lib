#ifndef POLYNOMIAL_HPP
#define POLYNOMIAL_HPP

#include <vector>
#include <string>

using namespace std;

namespace poly{
        class poly{
        private:
                int base = 0;
                vector<double> values;
        public:
                //Create polynomial using vector<double>
                poly(vector<double> arguments);

                //Create polynomial with non-zero base and vector
                poly(vector<double> arguments, int lowest_power);

                //Return text representation of given polynomial
                string show();

                //Create polynomial from string formated like result of show()
                static poly read(string input);

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

                //Divide polynomial with something
                poly operator/(poly other);
                poly operator/(double other);

                //Calculate derivative of polynomial
                poly derivative();

                //Calculate integral of polynomial
                poly integral();
        };
}

#endif //POLYNOMIAL_HPP
