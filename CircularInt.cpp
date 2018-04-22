#include <iostream>
#include "CircularInt.hpp"

using namespace std;
/*
//Constructor
CircularInt::CircularInt(int lower, int upper);

//----Getters----//
	
int CircularInt::getLower();						//Returns lower limit
int CircularInt::getUpper();						//Returns upper limit
int CircularInt::getValue();						//Returns value
	
//----Unary operators----//
	
CircularInt& CircularInt::operator++ ();			//Prefix increment
CircularInt CircularInt::operator++ (int);		    //Postfix increment
CircularInt& CircularInt::operator-- ();			//Prefix decrement
CircularInt CircularInt::operator-- (int);		    //Postfix decrement
CircularInt CircularInt::operator+ () const;		//Unary plus
CircularInt CircularInt::operator- () const;		//Unary minus

//----Binary operators----//
	
//Addition
CircularInt CircularInt::operator+ (const CircularInt& other) const; 	
CircularInt CircularInt::operator+ (int i) const; 				
CircularInt CircularInt::operator+ (int i, const CircularInt& a);
	
//Subtraction
CircularInt CircularInt::operator- (const CircularInt& other) const; 	
CircularInt CircularInt::operator- (int i) const; 
CircularInt CircularInt::operator- (int i, const CircularInt& a);
	
//Multiplication
CircularInt CircularInt::operator* (const CircularInt& other) const; 	
CircularInt CircularInt::operator* (int i) const; 
CircularInt CircularInt::operator* (int i, const CircularInt& a);
	
//Division
CircularInt CircularInt::operator/ (const CircularInt& other) const; 	
CircularInt CircularInt::operator/ (int i) const; 
CircularInt CircularInt::operator/ (int i, const CircularInt& a);
	
//Modulo
CircularInt CircularInt::operator% (const CircularInt& other) const; 	
CircularInt CircularInt::operator% (int i) const; 
CircularInt CircularInt::operator% (int i, const CircularInt& a);
	
//----Relational operators----//
	
bool CircularInt::operator== (const CircularInt& other);		//Equal to
bool CircularInt::operator!= (const CircularInt& other);		//Not equal to
bool CircularInt::operator< (const CircularInt& other);		    //Lesser than
bool CircularInt::operator> (const CircularInt& other);		    //Greater than
bool CircularInt::operator<= (const CircularInt& other);		//Lesser or equal
bool CircularInt::operator>= (const CircularInt& other);		//Greater or equal

//----Assignment operators----//
    
void CircularInt::operator=(const CircularInt& other);
//Left shift
CircularInt& CircularInt::operator<<=(const CircularInt& other); 
//Right shift
CircularInt& CircularInt::operator>>=(const CircularInt& other);
    
//Addition assignment
CircularInt& CircularInt::operator+= (const CircularInt& other);		//circ + circ
CircularInt& CircularInt::operator+= (int i);						    //circ + int
    
//Subtraction assignment
CircularInt& CircularInt::operator-= (const CircularInt& other);		//circ - circ
CircularInt& CircularInt::operator-= (int i);						    //circ - int

//Multiplication assignment
CircularInt& CircularInt::operator*= (const CircularInt& other);		//circ * circ
CircularInt& CircularInt::operator*= (int i);						    //circ * int
    
//Division assignment
CircularInt& CircularInt::operator/= (const CircularInt& other);		//circ / circ
CircularInt& CircularInt::operator/= (int i);						    //circ / int
	
//Modulo assignment
CircularInt& CircularInt::operator%= (const CircularInt& other);		//circ % circ
CircularInt& CircularInt::operator%= (int i);						    //circ % int
    
//AND assignment
CircularInt& CircularInt::operator&= (const CircularInt& other);		//circ & circ
CircularInt& CircularInt::operator&= (int i);						    //circ & int
    
//XOR assignment
CircularInt& CircularInt::operator^= (const CircularInt& other);		//circ ^ circ
CircularInt& CircularInt::operator^= (int i);						    //circ ^ int
    
//OR assignment
CircularInt& CircularInt::operator|= (const CircularInt& other);		//circ | circ
CircularInt& CircularInt::operator|= (int i);						    //circ | int

/*
//----Binary operators----//

//Addition
CircularInt operator+ (const CircularInt& a, const CircularInt& b);		//circ + circ
CircularInt operator+ (const CircularInt& a, const int& i );			//circ + int
CircularInt operator+ (const int& i, const CircularInt& a );			//int + circ

//Subtraction
CircularInt operator- (const CircularInt& a, const CircularInt& b);		//circ - circ
CircularInt operator- (const CircularInt& a, const int& i );			//circ - int
CircularInt operator- (const int& i, const CircularInt& a );			//int - circ

//Multiplication
CircularInt operator* (const CircularInt& a, const CircularInt& b);		//circ * circ
CircularInt operator* (const CircularInt& a, const int& i );			//circ * int
CircularInt operator* (const int& i, const CircularInt& a );			//int * circ

//Division
CircularInt operator/ (const CircularInt& a, const CircularInt& b);		//circ / circ
CircularInt operator/ (const CircularInt& a, const int& i );			//circ / int
CircularInt operator/ (const int& i, const CircularInt& a );			//int / circ

//Modulo
CircularInt operator% (const CircularInt& a, const CircularInt& b);		//circ % circ
CircularInt operator% (const CircularInt& a, const int& i );			//circ % int
CircularInt operator% (const int& i, const CircularInt& a );			//int % circ

//----Bitwise operators----//
	
//AND
CircularInt operator& (const CircularInt& a, const CircularInt& b);		//circ & circ
CircularInt operator& (const CircularInt& a, const int& i );			//circ & int
CircularInt operator& (const int& i, const CircularInt& a );			//int & circ

//XOR
CircularInt operator^ (const CircularInt& a, const CircularInt& b);		//circ ^ circ
CircularInt operator^ (const CircularInt& a, const int& i );			//circ ^ int
CircularInt operator^ (const int& i, const CircularInt& a );			//int ^ circ

//OR
CircularInt operator| (const CircularInt& a, const CircularInt& b);		//circ | circ
CircularInt operator| (const CircularInt& a, const int& i );			//circ | int
CircularInt operator| (const int& i, const CircularInt& a );			//int | circ

//NOT
CircularInt operator~ (const CircularInt& a);		//~circ

//Left shift
CircularInt operator<< (const CircularInt& a, const CircularInt& b); 
//Right shift
CircularInt operator<< (const CircularInt& a, const CircularInt& b); 

*/
