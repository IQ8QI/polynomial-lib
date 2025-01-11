#include <cmath>
#include <vector>
#include <stdexcept>

#include "polynomial.hpp"

using namespace std;

int poly::poly::get_base(){
        return base;
}

void poly::poly::set_base(int new_base){
        base = new_base;
}

vector<double> poly::poly::get_vector(){
        return values;
}

void poly::poly::set_vector(vector<double> new_vector){
        values = new_vector;
}

void poly::poly::set_common_base(poly& p1, poly& p2){
        int diff = p1.get_base() - p2.get_base();
        if(diff == 0){
                return;
        }

        if(diff > 0){
                while(diff > 0){
                        p1.values.insert(p1.values.begin(), 0);
                        p1.base--;
                        diff--;
                }
                return;
        }
        if(diff < 0){
                while(diff < 0){
                        p2.values.insert(p2.values.begin(), 0);
                        p2.base--;
                        diff++;
                }
                return;
        }
}

void poly::poly::balance_base(){
        //Remove zeros at the front and adjust base
        while(this->values[0] == 0){
                this->values.erase(this->values.begin());
                this->base++;
        }
        //Remove zeros at the back
        while(this->values[this->values.size() - 1] == 0){
                this->values.erase(this->values.end());
        }
}

poly::poly::poly(vector<double> arguments){
        values = arguments;
        base = 0;
}

poly::poly::poly(vector<double> arguments, int lowest_power){
        values = arguments;
        base = lowest_power;
}

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

bool is_valid_input(const char& c){
        string valid = ".*-+^()";
}

// TBD
poly::poly poly::poly::read(string input){
/*
        //6.000000-2.000000*X^(1)+48.000000*X^(2)
        //base 0
        //6, -2, 48
        vector<double> readed;
        int base;

        string buffer = "";
        for(const char& c : input){
                if(!is_valid_input(c)){
                        throw invalid_argument(c);
                }
        }

        return poly(readed, base);
*/
        return poly(vector<double>{1});
}

double poly::poly::get_value(double argument){
        double result = 0;
        for(size_t i = 0; i < values.size(); i++){
                result += values[i] * pow(argument, static_cast<int>(i) + base);
        }
        return result;
}

poly::poly poly::poly::operator+(poly other){
        
}

poly::poly poly::poly::operator+(double other){

}

poly::poly poly::poly::operator-(poly other){

}

poly::poly poly::poly::operator-(double other){

}

poly::poly poly::poly::operator*(poly other){

}

poly::poly poly::poly::operator*(double other){

}

poly::poly poly::poly::operator/(poly other){

}

poly::poly poly::poly::operator/(double other){

}

poly::poly poly::poly::derivative(){

}

poly::poly poly::poly::integral(){

}
