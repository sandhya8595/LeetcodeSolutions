// Last updated: 24/03/2026, 14:28:35
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
     double  Kelvin = celsius + 273.15; 
     double Fahrenheit = celsius * 1.80 + 32.00;
     return{Kelvin,Fahrenheit};// use here curly bracket bcz we return the vector type value
    }
};