# polynomial-lib
Library for working with polynomials writen in C++

# Usage
Place polynomial.cpp and polynomial.hpp from polynomial-lib in your projects include catalog.
After that You can simply do #include "libs/polynomial.hpp" to make library work in Your code.

# Features
Create new polynomial</br>
`poly my_poly = poly::poly(3, 8, 9);`</br>
creates polynomial 3+8x+9x^2

Get polynomial result for given value</br>
`double result = my_poly.get_value(3);`</br>
assigns 108 to result

Add polynomials</br>
`poly result = poly1 + poly2;`
`poly result = poly1 + 4`

Substract polynomials</br>
`poly result = poly1 - poly2;`
`poly result = poly1 - 8;`

Multiply polynomials</br>
`poly result = poly1 * poly2`</br>
`poly result = pol1 * 3`

Divide polynomials</br>
`poly result = poly1 / poly2`</br>
`poly result = poly1 / 5`</br>
