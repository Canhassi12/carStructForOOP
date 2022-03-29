#ifndef carro_h
#define carro_h

#include <iostream>
#include <string>
using namespace std;


class carro
{
    private:
        string color;
        string prefix;
        string model;
        int age;
        double value;

    public:
        void setColor(string Color)
        {
            this->color = Color;
        }
        string getColor()
        {
            return this->color;
        }

        void setPrefix(string Prefix)
        {
            this->prefix = Prefix;
        }
        string getPrefix()
        {
            return this->prefix;
        }

        void setMolel(string Model)
        {
            this->model = Model;
        }
        string getModel()
        {
            return this->model;
        }

        void setAge(int Age)
        {
            this->age = Age;
        }
        int getAge()
        {
            return this->age;
        }

        void setValue(double Value)
        {
            this->value = Value;
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