#include <iostream>
using namespace std;

#pragma once

class CircularInt {
public:
	
	//Constructor
    CircularInt(int lower, int upper) {}
    
    //----Getters----//
	
	int getLower() {return 1;}						//Returns lower limit
	int getUpper() {return 1;}					//Returns upper limit
	int getValue() {return 1;}						//Returns value
	
	//----Unary operators----//
	
	CircularInt& operator++ () {CircularInt c(1,12); return c;}			//Prefix increment
	CircularInt operator++ (int) {CircularInt c(1,12); return c;}		//Postfix increment
	CircularInt& operator-- () {CircularInt c(1,12); return c;}			//Prefix decrement
	CircularInt operator-- (int) {CircularInt c(1,12); return c;}		//Postfix decrement
	CircularInt operator+ () const {CircularInt c(1,12); return c;}		//Unary plus
	CircularInt operator- () const {CircularInt c(1,12); return c;}		//Unary minus
	
	//----Binary operators----//
	
	//Addition
	CircularInt operator+ (const CircularInt& other) const {CircularInt c(1,12); return c;}
	CircularInt operator+ (int i) const {CircularInt c(1,12); return c;}			
	friend CircularInt operator+ (int i, const CircularInt& a) {CircularInt c(1,12); return c;}
	
	//Subtraction
	CircularInt operator- (const CircularInt& other) const {CircularInt c(1,12); return c;}
	CircularInt operator- (int i) const {CircularInt c(1,12); return c;}
	friend CircularInt operator- (int i, const CircularInt& a) {CircularInt c(1,12); return c;}
	
	//Multiplication
	CircularInt operator* (const CircularInt& other) const {CircularInt c(1,12); return c;}
	CircularInt operator* (int i) const {CircularInt c(1,12); return c;}
	friend CircularInt operator* (int i, const CircularInt& a) {CircularInt c(1,12); return c;}
	
	//Division
	CircularInt operator/ (const CircularInt& other) const {CircularInt c(1,12); return c;}	
	CircularInt operator/ (int i) const {CircularInt c(1,12); return c;} 
	friend CircularInt operator/ (int i, const CircularInt& a) {CircularInt c(1,12); return c;}
	
	//Modulo
	CircularInt operator% (const CircularInt& other) const {CircularInt c(1,12); return c;}	
	CircularInt operator% (int i) const {CircularInt c(1,12); return c;}
	friend CircularInt operator% (int i, const CircularInt& a) {CircularInt c(1,12); return c;}
	
	//----Bitwise operators----//
	
	//AND
	CircularInt operator& (const CircularInt& other) const {CircularInt c(1,12); return c;}			
	CircularInt operator& (int i) const {CircularInt c(1,12); return c;}						
	friend CircularInt operator& (int i, const CircularInt& a) {CircularInt c(1,12); return c;}

	//XOR
	CircularInt operator^ (const CircularInt& other) const {CircularInt c(1,12); return c;}		
	CircularInt operator^ (int i) const {CircularInt c(1,12); return c;}							
	friend CircularInt operator^ (int i, const CircularInt& a) {CircularInt c(1,12); return c;}

	//OR
	CircularInt operator| (const CircularInt& other) const {CircularInt c(1,12); return c;}		
	CircularInt operator| (int i) const {CircularInt c(1,12); return c;}						
	friend CircularInt operator| (int i, const CircularInt& a) {CircularInt c(1,12); return c;}

	//NOT
	CircularInt operator~ () const {CircularInt c(1,12); return c;}				
	
	//----Relational operators----//
	
	bool operator== (const CircularInt& other) {return true;}		//Equal to
	bool operator!= (const CircularInt& other) {return true;}		//Not equal to
	bool operator< (const CircularInt& other) {return true;}		//Lesser than
	bool operator> (const CircularInt& other) {return true;}		//Greater than
	bool operator<= (const CircularInt& other) {return true;}		//Lesser or equal
	bool operator>= (const CircularInt& other) {return true;}		//Greater or equal

    //----Assignment operators----//
    
    void operator=(const CircularInt& other);
    //Left shift
    CircularInt& operator<<=(const CircularInt& other) {CircularInt c(1,12); return c;}
    //Right shift
    CircularInt& operator>>=(const CircularInt& other) {CircularInt c(1,12); return c;}
    
    //Addition assignment
	CircularInt& operator+= (const CircularInt& other) {CircularInt c(1,12); return c;}	//circ + circ
    CircularInt& operator+= (int i) {CircularInt c(1,12); return c;}						//circ + int
    
    //Subtraction assignment
	CircularInt& operator-= (const CircularInt& other) {CircularInt c(1,12); return c;}		//circ - circ
    CircularInt& operator-= (int i) {CircularInt c(1,12); return c;}						//circ - int

	//Multiplication assignment
	CircularInt& operator*= (const CircularInt& other) {CircularInt c(1,12); return c;}		//circ * circ
    CircularInt& operator*= (int i) {CircularInt c(1,12); return c;}						//circ * int
    
	//Division assignment
	CircularInt& operator/= (const CircularInt& other) {CircularInt c(1,12); return c;}		//circ / circ
    CircularInt& operator/= (int i) {CircularInt c(1,12); return c;}						//circ / int
	
	//Modulo assignment
	CircularInt& operator%= (const CircularInt& other) {CircularInt c(1,12); return c;}		//circ % circ
    CircularInt& operator%= (int i) {CircularInt c(1,12); return c;}						//circ % int
    
    //AND assignment
	CircularInt& operator&= (const CircularInt& other) {CircularInt c(1,12); return c;}		//circ & circ
    CircularInt& operator&= (int i) {CircularInt c(1,12); return c;}						//circ & int
    
    //XOR assignment
	CircularInt& operator^= (const CircularInt& other) {CircularInt c(1,12); return c;}		//circ ^ circ
    CircularInt& operator^= (int i) {CircularInt c(1,12); return c;}						//circ ^ int
    
    //OR assignment
	CircularInt& operator|= (const CircularInt& other) {CircularInt c(1,12); return c;}		//circ | circ
    CircularInt& operator|= (int i) {CircularInt c(1,12); return c;}						//circ | int
    
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
