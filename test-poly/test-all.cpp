#include <iostream>
#include <vector>

#include "./../polynomial-lib/polynomial.hpp"

using namespace std;
//using namespace poly;

template<typename T1, typename T2>
bool assert_eq(T1 ele1, T2 ele2, string failure){
        if(ele1 == ele2){
                return true;
        } else {
                cout << failure << endl;
                return false;
        }
}

void test_create_get_value(){
        string error = "ERROR in test_create_get_value()";
        poly::poly my_poly = poly::poly({6.0, -2.0, 4.0});
        assert_eq(my_poly.get_value(8), 246, error);
        assert_eq(my_poly.get_value(-2.7894), 42.7018, error);
        assert_eq(my_poly.get_value(42.7018), 7214.37, error);
        vector<double> values = {4, -2.67, 7.13, -3.987};
        my_poly = poly::poly(values);
        assert_eq(my_poly.get_value(42.7), -297516, error);
        assert_eq(my_poly.get_value(-3), 183.829, error);
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
