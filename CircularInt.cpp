#include <iostream>
#include "CircularInt.hpp"

using namespace std;

//Constructor
CircularInt::CircularInt(int lower, int upper){}

//----Getters----//
	
int CircularInt::getLower() {return 1;}						//Returns lower limit
int CircularInt::getUpper() {return 1;}						//Returns upper limit
int CircularInt::getValue() {return 1;}						//Returns value
	
//----Unary operators----//
	
CircularInt& CircularInt::operator++ () {return *this;}			//Prefix increment
CircularInt CircularInt::operator++ (int) {return *this;}		    //Postfix increment
CircularInt& CircularInt::operator-- () {return *this;}			//Prefix decrement
CircularInt CircularInt::operator-- (int) {return *this;}		    //Postfix decrement
CircularInt CircularInt::operator+ () const {return *this;}		//Unary plus
CircularInt CircularInt::operator- () const {return *this;}		//Unary minus

//----Binary operators----//
	
//Addition
CircularInt CircularInt::operator+ (const CircularInt& other) const {return *this;}	
CircularInt CircularInt::operator+ (int i) const {return *this;}				
	
//Subtraction
CircularInt CircularInt::operator- (const CircularInt& other) const {return *this;}	
CircularInt CircularInt::operator- (int i) const {return *this;}
	
//Multiplication
CircularInt CircularInt::operator* (const CircularInt& other) const {return *this;}
CircularInt CircularInt::operator* (int i) const {return *this;}
	
//Division
CircularInt CircularInt::operator/ (const CircularInt& other) const {return *this;}	
CircularInt CircularInt::operator/ (int i) const {return *this;}
	
//Modulo
CircularInt CircularInt::operator% (const CircularInt& other) const {return *this;}	
CircularInt CircularInt::operator% (int i) const {return *this;}

//----Bitwise operators----//
	
//AND
CircularInt CircularInt::operator& (const CircularInt& other) const {return *this;}				
CircularInt CircularInt::operator& (int i) const {return *this;}	

//XOR
CircularInt CircularInt::operator^ (const CircularInt& other) const {return *this;}			
CircularInt CircularInt::operator^ (int i) const {return *this;}		

//OR
CircularInt CircularInt::operator| (const CircularInt& other) const {return *this;}		
CircularInt CircularInt::operator| (int i) const {return *this;}	

//NOT
CircularInt CircularInt::operator~ () const{return *this;}
	
//----Relational operators----//
	
bool CircularInt::operator== (const CircularInt& other) {return true;}		//Equal to
bool CircularInt::operator!= (const CircularInt& other) {return true;}		//Not equal to
bool CircularInt::operator< (const CircularInt& other) {return true;}		//Lesser than
bool CircularInt::operator> (const CircularInt& other) {return true;}		//Greater than
bool CircularInt::operator<= (const CircularInt& other) {return true;}		//Lesser or equal
bool CircularInt::operator>= (const CircularInt& other) {return true;}		//Greater or equal

//----Assignment operators----//
    
void CircularInt::operator=(const CircularInt& other){}
//Left shift
CircularInt& CircularInt::operator<<=(const CircularInt& other) {return *this;} 
//Right shift
CircularInt& CircularInt::operator>>=(const CircularInt& other) {return *this;}
    
//Addition assignment
CircularInt& CircularInt::operator+= (const CircularInt& other) {return *this;}		//circ + circ
CircularInt& CircularInt::operator+= (int i) {return *this;}						    //circ + int
    
//Subtraction assignment
CircularInt& CircularInt::operator-= (const CircularInt& other) {return *this;}		//circ - circ
CircularInt& CircularInt::operator-= (int i) {return *this;}						    //circ - int

//Multiplication assignment
CircularInt& CircularInt::operator*= (const CircularInt& other) {return *this;}		//circ * circ
CircularInt& CircularInt::operator*= (int i) {return *this;}						    //circ * int
    
//Division assignment
CircularInt& CircularInt::operator/= (const CircularInt& other) {return *this;}		//circ / circ
CircularInt& CircularInt::operator/= (int i) {return *this;}						    //circ / int
	
//Modulo assignment
CircularInt& CircularInt::operator%= (const CircularInt& other) {return *this;}		//circ % circ
CircularInt& CircularInt::operator%= (int i) {return *this;}						    //circ % int
    
//AND assignment
CircularInt& CircularInt::operator&= (const CircularInt& other) {return *this;}		//circ & circ
CircularInt& CircularInt::operator&= (int i) {return *this;}						    //circ & int
    
//XOR assignment
CircularInt& CircularInt::operator^= (const CircularInt& other) {return *this;}		//circ ^ circ
CircularInt& CircularInt::operator^= (int i) {return *this;}						    //circ ^ int
    
//OR assignment
CircularInt& CircularInt::operator|= (const CircularInt& other) {return *this;}		//circ | circ
CircularInt& CircularInt::operator|= (int i) {return *this;}						    //circ | int

CircularInt CircularInt::operator- (int i, CircularInt& a) {return *this;}

