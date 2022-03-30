#ifndef Car_h
#define Car_h

#include <iostream>
#include <string>
using namespace std;


class Car
{
    private:
        string color = "indefine";
        string prefix = "indefine";
        string model = "indefine";
        int age = 0;
        double value = 0;

    public:
        Car(string color, string prefix, string model, int age, double value)
        {
            this->color  = color;
            this->prefix = prefix;
            this->model  = model;
            this->age    = age;
            this->value  = value;
        }
        Car()
        {
           
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
