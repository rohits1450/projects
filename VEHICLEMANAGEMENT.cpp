#include<iostream>

using namespace std;

class Vehicle{

	private:

		string make,model;

		int year;

	public:

		void inputData(){

			cout<<"Enter Company Name : ";

			cin>>make;

			cout<<"Enter Model :";

			cin>>model;

			cout<<"Enter Year :";

			cin>>year;			

		}

		void display(){

			cout<<"Make :"<<make<<endl;

			cout<<"Model :"<<model<<endl;

			cout<<"Year :"<<year<<endl;

		}

};

class Car : public Vehicle{

	private:

		int numDoor;

	public:

		void inputData(){

			Vehicle::inputData();

			cout<<"Enter Number of Door :";

			cin>>numDoor;

		}

		void display(){

			Vehicle::display();

			cout<<"Door :"<<numDoor<<endl;

		}

};

class BMWCar : public Car{

	private:

		string trimLevel;

	public:

		void inputData(){

			Car::inputData();

			cout<<"Enter Trim Level :";

			cin>>trimLevel;			

		}

		void display(){

			Car::display();

			cout<<"Trime Level :"<<trimLevel<<endl;

		}

};



main(){

	BMWCar myCar;

	cout<<"-------Input Car Info---------"<<endl;

	myCar.inputData();

	cout<<"-------Output Car Info--------"<<endl;

	myCar.display();

}


