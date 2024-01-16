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
                /**
                 * @brief Set the common base for 2 polies of potentialy
                 * different bases, polies are edited in the process
                 * 
                 * @param p1 1st poly
                 * @param p2 2nd poly
                 */
                static void set_common_base(poly p1, poly p2);

                /**
                 * @brief If poly underling vector have zeros in the beggining or ending,
                 * they are deleted and the base of poly is changed to keep the same meaning of poly.
                 * 
                 * @param p1 poly to be balanced
                 */
                static void balance_base(poly p1);
        public:
                /**
                 * @brief Construct a new poly object with values of vector and base 0
                 * 
                 * @param values values of vector
                 */
                poly(vector<double> values);

                /**
                 * @brief Construct a new poly object with value of vector and base of lowest_power
                 * 
                 * @param arguments values of vector
                 * @param lowest_power base of poly
                 */
                poly(vector<double> arguments, int lowest_power);

                /**
                 * @brief Return text representation of given polynomial
                 * 
                 * @return string
                 */
                string show();

                /**
                 * @brief Create polynomial from string formated like result of show()
                 * 
                 * @param input string from witch poly is created
                 * @return poly resulting poly
                 */
                static poly read(string input);

                /**
                 * @brief Calculate value of polynomial for given X
                 * 
                 * @param argument polynomial X value
                 * @return double
                 */
                double get_value(double argument);

                /**
                 * @brief Add 2 polynomials creating new polynomial
                 * 
                 * @param other
                 * @return poly 
                 */
                poly operator+(poly other);

                /**
                 * @brief Add double to polynomial creating new polynomial
                 * 
                 * @param other value to add
                 * @return poly 
                 */
                poly operator+(double other);

                /**
                 * @brief Subtract polynomial with different poynomial creating new poly
                 * 
                 * @param other
                 * @return poly 
                 */
                poly operator-(poly other);

                /**
                 * @brief Subtract double from polynomial creating new poly
                 * 
                 * @param other 
                 * @return poly 
                 */
                poly operator-(double other);

                /**
                 * @brief Multiply 2 polys creating new poly
                 * 
                 * @param other 
                 * @return poly 
                 */
                poly operator*(poly other);

                /**
                 * @brief Multiply poly with double creating new poly
                 * 
                 * @param other 
                 * @return poly 
                 */
                poly operator*(double other);

                /**
                 * @brief Divide poly with other poly creating new poly
                 * 
                 * @param other 
                 * @return poly 
                 */
                poly operator/(poly other);

                /**
                 * @brief Divide poly with double creating new poly
                 * 
                 * @param other 
                 * @return poly 
                 */
                poly operator/(double other);

                /**
                 * @brief Calculate poly derivative creating new poly
                 * 
                 * @return poly 
                 */
                poly derivative();

                /**
                 * @brief Calculate integral of poly creating new poly
                 * 
                 * @return poly 
                 */
                poly integral();
        };
}

#endif //POLYNOMIAL_HPP
