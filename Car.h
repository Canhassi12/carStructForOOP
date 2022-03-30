#ifndef Car_h
#define Car_h

#include <iostream>
#include <string>
using namespace std;


class Car
{
    private:
        string color;
        string prefix;
        string model;
        int    age;
        double value;

    public:
        Car(string color, string prefix, string model, int age, double value)
        {
            this->color  = color;
            this->prefix = prefix;
            this->model  = model;
            this->age    = age;
            this->value  = value;
        }

     
                
        string getColor()
        {
            return this->color;
        }

        string getPrefix()
        {
            return this->prefix;
        }

        string getModel()
        {
            return this->model;
        }

        int getAge()
        {
            return this->age;
        }

        double getValue()
        {
            return this->value;
        }

        void printCar()
        {
            cout<<"\n"<<getPrefix()<<endl;
            cout<<getModel()<<endl;
            cout<<getColor()<<endl;
            cout<<getAge()<<endl;
            cout<<getValue()<<endl;
        } 
};
#endif
