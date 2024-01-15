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

bool assert_eq(double x1, double x2, int precision, string& failure, size_t& test_no){
        ++test_no;
        if(compare_double(x1, x2, precision)){
                return true;
        } else {
                cout << failure << "in test no " << test_no << endl;
                cout << x1 << " does not equal " << x2 << endl;
                return false;
        }
}

void test_create_get_value(){
        string error = "ERROR in test_create_get_value()";
        size_t no = 1;
        poly::poly my_poly = poly::poly({6.0, -2.0, 4.0});
        assert_eq(my_poly.get_value(8), 246, 0, error, no);
        assert_eq(my_poly.get_value(-2.7894), 42.7018, 4, error, no);
        assert_eq(my_poly.get_value(42.7018), 7214.37, 2, error, no);
        vector<double> values = {4, -2.67, 7.13, -3.987};
        my_poly = poly::poly(values);
        assert_eq(my_poly.get_value(42.7), -297516, 0, error, no);
        assert_eq(my_poly.get_value(-3), 183.829, 3, error, no);
}
void test_show_read(){
        string error = "ERROR in test_create_get_value()";

}
void test_add(){

}
void test_subtract(){

}
void test_multiply(){

}
void test_divide(){

}
void test_derviative(){

}
void test_integral(){

}


int main(){
        test_create_get_value();
        test_show_read();
        test_add();
        test_subtract();
        test_multiply();
        test_divide();
        test_derviative();
        test_integral();
}
