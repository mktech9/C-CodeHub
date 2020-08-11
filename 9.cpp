//9.	Find the cube of number using “INLINE” function.

// NAME :- DURANI MAHIRKHAN

// ENROLLMENT :- 190510101033   DIV:-A



#include<iostream>
using namespace std;

inline float cube(int a){
	return (a*a*a);
}

int main()
{
	int a;
	cout<<"Enter a Number: ";
	cin>>a;
	cout<<"The cube of "<<a<<" is "<<cube(a);
	return 0;
}
