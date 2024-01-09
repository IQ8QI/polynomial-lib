# polynomial-lib
Library for working with polynomials writen in C++

# Instalation in your project
Place polynomial.cpp and polynomial.hpp from polynomial-lib in your projects include catalog.
After that You can simply do #include "libs/polynomial.hpp" to make library work in Your code.

# Usage and features
Create new polynomial</br>
```
poly::poly my_poly = poly::poly(3, 8, 9);
//my_poly holds polynomial 3+8x+9x^2
```
Show how polynomial looks
```
poly::poly my_poly = poly::poly(3, 8, 9);
cout << my_poly.show() << endl;
//returns string "3+8x+9x^2"
```
Create new polynomial when lowest power of x is not 0 using special_poly(*lowest power*, *values*...)
```
poly::poly my_poly = poly::special_poly
(-6, 4, 0, 0, 3, 0, 0, 0, 0, 8);
//my_poly now holds 4x^(-6)+3x^(-3)+8x^2
```

Create new polynomial from vector\<double\>
```
vector<double> vec = {5, 0, 4, -7};
poly::poly my_poly = poly::poly(vec);
//my_poly holds polynomial 5+4x^2-7x^3
```

Create new polynomial from vector\<double\> when lowest power of x is not 0 using special_poly(*lowest power*, *vector*)
```
vector<double> vec = {5, 0, 4, -7};
poly::poly my_poly = poly::special_poly(-2, vec);
//my_poly holds polynomial  5x^(-2)+4-7x
```

Get polynomial result for given argument</br>
```
poly::poly my_poly = poly::poly(8, -2, 7);
double result = my_poly.get_value(3);
//result holds value 65
```

Add polynomials</br>
```
poly::poly result = poly1 + poly2;
poly::poly result = poly1 + 4
```

Substract polynomials</br>
```
poly::poly result = poly1 - poly2;
poly::poly result = poly1 - 8;
```

Multiply polynomials</br>
```
poly::poly result = poly1 * poly2
poly::poly result = pol1 * 3
```

Divide polynomials</br>
```
poly::poly result = poly1 / poly2
poly::poly result = poly1 / 5
```

Create polynomial derivative</br>
```
poly::poly poly1 = poly(5, 9, -13);
//pol1 holds 5+9x-13x^2
poly1 = poly1.derivative();
//poly1 now holds 9-26x
```
Create integral of polynomial</br>
```
poly::poly my_poly = poly::poly(2, -4, 5, 3);
//my_poly now holds 2-4x+5x^2+3x^3
my_poly = my_poly.integral();
//my_poly now holds 2x-2x^2+5/3*x^3+3/4*x^4

```
