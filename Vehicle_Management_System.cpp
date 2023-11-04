/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class vehicle{
    private:
    string make,model;
    int year;
    
    public:
    void inputData(){
        cout<<"Enter Company Name: ";
        cin>>make;
        cout<<"Enter Model: ";
        cin>>model;
        cout<<"Enter Year: ";
        cin>>year;
        
    }
    
    void display(){
        cout<<"Make: "<<make<<endl;
        cout<<"Model "<<model<<endl;
        cout<<"Year "<<year<<endl;
    }
    
    
};

class Car: public vehicle{
    private: int numdoor;
    public:
    void inputData()
    {
        vehicle::inputData();
        cout<<"Enter Number of Doors: ";
        cin>>numdoor;
    }
    void display()
    {
        vehicle::display();
        cout<<"Doors: "<<numdoor<<endl;
    }
};

class ToyotaCar: public Car{
    private:
    string trimLevel;
    public:
    void inputData(){
        Car::inputData();
        cout<<"Enter Trim Level:";
        cin>>trimLevel;
    }
    void display(){
        Car::display();
        cout<<"Trim level"<<trimLevel<<endl;
    }
};

int main()
{
    ToyotaCar mycar;
    cout<<"-------------Input Car Info-----------"<<endl;
    mycar.inputData();
    cout<<"-------------Output Car Info-----------"<<endl;
    mycar.display();

    return 0;
}
