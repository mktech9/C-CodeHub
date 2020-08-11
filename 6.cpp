//6.	Swapping of two number using “call by Reference”.

// NAME :- DURANI MAHIRKHAN

// ENROLLMENT :- 190510101033   DIV:-A


#include<iostream>
using namespace std;

void swapping(int &no1,int &no2){
	int temp=no2;
	no2=no1;
	no1=temp;
	cout<<"After Swap:"<<endl;
	cout<<"Number 1: "<<no1<<endl;
	cout<<"Number 2: "<<no2<<endl;
}

int main(){
	int no1,no2;
	cout<<"Enter Number 1:";
	cin>>no1;
	cout<<"Enter Number 2:";
	cin>>no2;
	cout<<"Before Swap:"<<endl;
	cout<<"Number 1: "<<no1<<endl;
	cout<<"Number 2: "<<no2<<endl;
	swapping(no1,no2);
	return 0;
}
