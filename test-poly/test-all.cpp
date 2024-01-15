#include <iostream>
#include <vector>
#include <cmath>

#include "./../polynomial-lib/polynomial.hpp"

using namespace std;
//using namespace poly;

bool compare_double(double x1, double x2, int precision){
        double difference = pow(10, -precision);
        return abs(x1 - x2) < difference;
}

bool assert_double_eq(double x1, double x2, int precision, string& failure, size_t& test_no){
        if(compare_double(x1, x2, precision)){
                return true;
        } else {
                cout << failure << "in test no " << test_no << endl;
                cout << x1 << " does not equal " << x2 << endl;
                return false;
        }
        ++test_no;
}

template<typename T>
bool assert_eq(T x1,T x2, string& failure, size_t& test_no){
        if(x1 == x2){
                return true;
        } else {
                cout << failure << "in test no " << test_no << endl;
                cout << x1 << " does not equal " << x2 << endl;
                return false;
        }
        ++test_no;
}

void test_create_get_value(){
        string error = "ERROR in test_create_get_value()";
        size_t test_no = 1;
        poly::poly my_poly = poly::poly({6.0, -2.0, 4.0});
        assert_double_eq(my_poly.get_value(8), 246, 0, error, test_no);
        assert_double_eq(my_poly.get_value(-2.7894), 42.7018, 4, error, test_no);
        assert_double_eq(my_poly.get_value(42.7018), 7214.37, 2, error, test_no);
        vector<double> values = {4, -2.67, 7.13, -3.987};
        my_poly = poly::poly(values);
        assert_double_eq(my_poly.get_value(42.7), -297516, 0, error, test_no);
        assert_double_eq(my_poly.get_value(-3), 183.829, 3, error, test_no);
}

void test_show_read(){
        string error = "ERROR in test_create_get_value()";
        size_t test_no = 1;
        poly::poly my_poly = poly::poly({6, -2, 48});
        string expected = "6.000000-2.000000*X^(1)+48.000000*X^(2)";
        assert_eq(my_poly.show(), expected, error, test_no);
}

void test_add_subtract(){

}

void test_multiply_divide(){

}

void test_derviative_integral(){

}


int main(){
        test_create_get_value();
        cout << "test_create_get_value() done" << endl;

        test_show_read();
        cout << "test_show_read() done" << endl;

        test_add_subtract();
        cout << "test_add_subtract() done" << endl;

        test_multiply_divide();
        cout << "test_multiply_divide() done" << endl;

        test_derviative_integral();
        cout << "test_derviative_integral() done" << endl;
}
