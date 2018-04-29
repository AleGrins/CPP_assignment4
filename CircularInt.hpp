#include <iostream>
using namespace std;

#pragma once

class CircularInt {
public:
	
	//Constructor
    CircularInt(int lower, int upper);
    
    void setValue(int v);
    
    //----Getters----//
	
	int getLower();						//Returns lower limit
	int getUpper();						//Returns upper limit
	int getValue();						//Returns value
	
	//----Unary operators----//
	
	CircularInt& operator++ ();			//Prefix increment
	CircularInt operator++ (int);		//Postfix increment
	CircularInt& operator-- ();			//Prefix decrement
	CircularInt operator-- (int);		//Postfix decrement
	CircularInt operator- () const;		//Unary minus
	
	//----Relational operators----//
	
	//Equal to
	bool operator== (const CircularInt& other);		
	bool operator== (int i)
	//Not equal to
	bool operator!= (const CircularInt& other);
	//Lesser than
	bool operator< (const CircularInt& other);
	//Greater than
	bool operator> (const CircularInt& other);	
	//Lesser or equal
	bool operator<= (const CircularInt& other);	
	//Greater or equal
	bool operator>= (const CircularInt& other);	

    //----Assignment operators----//
    
    //Copy assignment
    CircularInt& operator=(const CircularInt& other);
    
    //Left shift
    CircularInt& operator<<=(const CircularInt& other); 
    CircularInt& operator<<=(int i);
    
    //Right shift
    CircularInt& operator>>=(const CircularInt& other);
    CircularInt& operator>>=(int i);
    
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
    
    //----Binary operators----//
	
	//Addition
	CircularInt operator+ (const CircularInt& other) const; 	
	CircularInt operator+ (int i) const; 				
	friend CircularInt operator+ (int i, const CircularInt& a);
	
	//Subtraction
	CircularInt operator- (const CircularInt& other) const; 	
	CircularInt operator- (int i) const; 
	friend CircularInt operator- (int i, const CircularInt& a);
	
	//Multiplication
	CircularInt operator* (const CircularInt& other) const; 	
	CircularInt operator* (int i) const; 
	friend CircularInt operator* (int i, const CircularInt& a);
	
	//Division
	CircularInt operator/ (const CircularInt& other) const; 	
	CircularInt operator/ (int i) const; 
	friend CircularInt operator/ (int i, const CircularInt& a);
	
	//Modulo
	CircularInt operator% (const CircularInt& other) const; 	
	CircularInt operator% (int i) const; 
	friend CircularInt operator% (int i, const CircularInt& a);
	
	//----Bitwise operators----//
	
	//AND
	CircularInt operator& (const CircularInt& other) const;				
	CircularInt operator& (int i) const;						
	friend CircularInt operator& (int i, const CircularInt& a);

	//XOR
	CircularInt operator^ (const CircularInt& other) const;			
	CircularInt operator^ (int i) const;							
	friend CircularInt operator^ (int i, const CircularInt& a);

	//OR
	CircularInt operator| (const CircularInt& other) const;			
	CircularInt operator| (int i) const;							
	friend CircularInt operator| (int i, const CircularInt& a);

	//NOT
	CircularInt operator~ () const;			
    
    friend ostream& operator<< (ostream &output, const CircularInt& C) 
    { 
         output << C.value;
         return output;            
    }
	
private:
	int lowerLimit;
	int upperLimit;
	int value;
	
	void fixValue()
	{
		int range = upperLimit - lowerLimit + 1;
		if(value > upperLimit){
			int temp = value - upperLimit;
			temp %= range;
			value = lowerLimit + temp - 1;
		} 
		else if(value < lowerLimit){
			int temp = (lowerLimit - value) - 1;
			temp %= range;
			value = upperLimit - temp;
		}
	}
};

