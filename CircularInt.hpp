#include <iostream>
using namespace std;

#pragma once

class CircularInt {
public:
	
	//Constructor
    CircularInt(int lower, int upper);
    
    //----Getters----//
	
	int getLower();						//Returns lower limit
	int getUpper();						//Returns upper limit
	int getValue();						//Returns value
	
	//----Unary operators----//
	
	CircularInt& operator++ ();			//Prefix increment
	CircularInt operator++ (int);		//Postfix increment
	CircularInt& operator-- ();			//Prefix decrement
	CircularInt operator-- (int);		//Postfix decrement
	CircularInt operator+ () const;		//Unary plus
	CircularInt operator- () const;		//Unary minus
	
	//----Binary operators----//
	
	//Addition
	CircularInt operator+ (const CircularInt& other) const; 	
	CircularInt operator+ (int i) const; 				
	friend CircularInt operator+ (int i, const CircularInt& a) {return *this;}
	
	//Subtraction
	CircularInt operator- (const CircularInt& other) const; 	
	CircularInt operator- (int i) const; 
	friend CircularInt operator- (int i, const CircularInt& a) {return *this;}
	
	//Multiplication
	CircularInt operator* (const CircularInt& other) const; 	
	CircularInt operator* (int i) const; 
	friend CircularInt operator* (int i, const CircularInt& a) {return *this;}
	
	//Division
	CircularInt operator/ (const CircularInt& other) const; 	
	CircularInt operator/ (int i) const; 
	friend CircularInt operator/ (int i, const CircularInt& a) {return *this;}
	
	//Modulo
	CircularInt operator% (const CircularInt& other) const; 	
	CircularInt operator% (int i) const; 
	friend CircularInt operator% (int i, const CircularInt& a) {return *this;}
	
	//----Bitwise operators----//
	
	//AND
	CircularInt operator& (const CircularInt& other) const;				
	CircularInt operator& (int i) const;						
	friend CircularInt operator& (int i, const CircularInt& a) {return *this;}

	//XOR
	CircularInt operator^ (const CircularInt& other) const;			
	CircularInt operator^ (int i) const;							
	friend CircularInt operator^ (int i, const CircularInt& a) {return *this;}

	//OR
	CircularInt operator| (const CircularInt& other) const;			
	CircularInt operator| (int i) const;							
	friend CircularInt operator| (int i, const CircularInt& a) {return *this;}

	//NOT
	CircularInt operator~ () const;					
	
	//----Relational operators----//
	
	bool operator== (const CircularInt& other);		//Equal to
	bool operator!= (const CircularInt& other);		//Not equal to
	bool operator< (const CircularInt& other);		//Lesser than
	bool operator> (const CircularInt& other);		//Greater than
	bool operator<= (const CircularInt& other);		//Lesser or equal
	bool operator>= (const CircularInt& other);		//Greater or equal

    //----Assignment operators----//
    
    void operator=(const CircularInt& other);
    //Left shift
    CircularInt& operator<<=(const CircularInt& other); 
    //Right shift
    CircularInt& operator>>=(const CircularInt& other);
    
    //Addition assignment
	CircularInt& operator+= (const CircularInt& other);		//circ + circ
    CircularInt& operator+= (int i);						//circ + int
    
    //Subtraction assignment
	CircularInt& operator-= (const CircularInt& other);		//circ - circ
    CircularInt& operator-= (int i);						//circ - int

	//Multiplication assignment
	CircularInt& operator*= (const CircularInt& other);		//circ * circ
    CircularInt& operator*= (int i);						//circ * int
    
	//Division assignment
	CircularInt& operator/= (const CircularInt& other);		//circ / circ
    CircularInt& operator/= (int i);						//circ / int
	
	//Modulo assignment
	CircularInt& operator%= (const CircularInt& other);		//circ % circ
    CircularInt& operator%= (int i);						//circ % int
    
    //AND assignment
	CircularInt& operator&= (const CircularInt& other);		//circ & circ
    CircularInt& operator&= (int i);						//circ & int
    
    //XOR assignment
	CircularInt& operator^= (const CircularInt& other);		//circ ^ circ
    CircularInt& operator^= (int i);						//circ ^ int
    
    //OR assignment
	CircularInt& operator|= (const CircularInt& other);		//circ | circ
    CircularInt& operator|= (int i);						//circ | int
    
    friend ostream& operator<< (ostream &output, const CircularInt& C) 
    { 
         output << C.value;
         return output;            
    }
	
private:
	int lowerLimit;
	int upperLimit;
	int value;
	
	void fixValue();
};
