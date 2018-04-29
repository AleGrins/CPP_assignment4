#include <iostream>
#include "CircularInt.hpp"

using namespace std;

//Constructor
CircularInt::CircularInt(int lower, int upper)
{
    lowerLimit = lower;
    upperLimit = upper;
    value = lower;
} 

//Manually set the value
void CircularInt::setValue(int v) { value = v; }
    
//----Getters----//
	
int CircularInt::getLower() { return lowerLimit; }				//Returns lower limit
int CircularInt::getUpper() { return upperLimit; }				//Returns upper limit
int CircularInt::getValue() { return value; }					//Returns value
	
//----Unary operators----//
	
CircularInt& CircularInt::operator++ ()			//Prefix increment
{  
	if(value == upperLimit) value = lowerLimit;
	else value++;
	return *this;  
} 

CircularInt CircularInt::operator++ (int)       //Postfix increment
{  
	CircularInt temp = *this;  
	++*this;  
	return temp;  
}

CircularInt& CircularInt::operator-- ()		   	//Prefix decrement
{  
	if(value == lowerLimit) value = upperLimit;
	else value--;
	return *this;  
}

CircularInt CircularInt::operator-- (int)	    //Postfix decrement
{  
	CircularInt temp = *this;  
	--*this;  
	return temp;  
}

CircularInt CircularInt::operator- () const     //Unary minus: 
{
	CircularInt temp = *this;
	int a = (temp.getValue() - temp.getLower()) + 1;
	int b = temp.getUpper() - temp.getValue();
	bool notUpper = temp.getValue() != temp.getUpper();
		
	if(a < b && notUpper) temp.setValue(upperLimit - a);
	else if(a > b && notUpper) temp.setValue(lowerLimit + (b - 1));
	return temp;
}

//----Relational operators----//
	
bool CircularInt::operator== (const CircularInt& other)		//Equal to
    { return (value == other.value); }
		
bool CircularInt::operator!= (const CircularInt& other)		//Not equal to
	{ return !(*this == other); }
		
bool CircularInt::operator< (const CircularInt& other)		//Lesser than
	{ return (value < other.value); }
			
bool CircularInt::operator> (const CircularInt& other)		//Greater than
	{ return (value > other.value); }
			
bool CircularInt::operator<= (const CircularInt& other)		//Lesser or equal
	{ return ((*this == other) || (*this < other)); }
			
bool CircularInt::operator>= (const CircularInt& other)		//Greater or equal
	{ return ((*this == other) || (*this > other)); }

//----Assignment operators----//
    
//Copy assignment
CircularInt& CircularInt::operator=(const CircularInt& other)
{
    if(this != &other){ //Self-assignment check
	   	lowerLimit = other.lowerLimit;
	   	upperLimit = other.upperLimit;
	   	value = other.value;
    }
    return *this;
	
}

//Left shift
CircularInt& CircularInt::operator<<=(const CircularInt& other)
{
	int range = upperLimit - lowerLimit + 1;
	value <<= other.value;
	if(value > upperLimit || value < lowerLimit) value %= range;
	fixValue();
	return *this;
}
CircularInt& CircularInt::operator<<=(int i)
{
	int range = upperLimit - lowerLimit + 1;
	value <<= i;
	if(value > upperLimit || value < lowerLimit) value %= range;
	fixValue();
	return *this;
}

//Right shift
CircularInt& CircularInt::operator>>=(const CircularInt& other)		//circ >> circ
{
	int range = upperLimit - lowerLimit + 1;
	value >>= other.value;
	if(value > upperLimit || value < lowerLimit) value %= range;
	fixValue();
	return *this;
}
CircularInt& CircularInt::operator>>=(int i)		//circ >> int
{
	int range = upperLimit - lowerLimit + 1;
	value >>= i;
	if(value > upperLimit || value < lowerLimit) value %= range;
	fixValue();
	return *this;
}
    
//Addition assignment
CircularInt& CircularInt::operator+= (const CircularInt& other)     //circ + circ
{
	int range = upperLimit - lowerLimit + 1;
	if(other.value == range || other.value == -range) return *this; //no actions needed
	if(other.value < 0) {*this -= other; return *this;} //adding negative = subtracting positive
	value += other.value;
	fixValue();
    return *this;
}
CircularInt& CircularInt::operator+= (int i)        //circ + int
{
	int range = upperLimit - lowerLimit + 1;
	if(i == range || i == -range) return *this; //no actions needed
	if(i < 0) {*this -= i; return *this;} //adding negative = subtracting positive		
	value += i;
	fixValue();
    return *this;
}
    
//Subtraction assignment
CircularInt& CircularInt::operator-= (const CircularInt& other)		//circ - circ
{
	int range = upperLimit - lowerLimit + 1;
	if(other.value == range || other.value == -range) return *this; //no actions needed
	if(other.value < 0) {*this += other; return *this;} //subtracting negative = adding positive
	value -= other.value;
	fixValue();
	return *this;
}
CircularInt& CircularInt::operator-= (int i)		//circ - int
{
	int range = upperLimit - lowerLimit + 1;
	if(i == range || i == -range) return *this; //no actions needed
	if(i < 0) {*this += i; return *this;} //subtracting negative = adding positive
	value -= i;
	fixValue();
    return *this;
}

//Multiplication assignment
CircularInt& CircularInt::operator*= (const CircularInt& other)     //circ * circ
{
	if(other.value == 1) return *this;
	value *= other.value;
	fixValue();
	return *this;
}
    
CircularInt& CircularInt::operator*= (int i)        //circ * int
{
	if(i == 1) return *this;
	value *= i;
	fixValue();
	return *this;
}
    
//Division assignment
CircularInt& CircularInt::operator/= (const CircularInt& other)		//circ / circ
{
	if(other.value == 1) return *this;
	for(int i = lowerLimit; i <= upperLimit; i++){
		if(i*other.value == value){
			value = i;
			return *this;
		}
	}
}
CircularInt& CircularInt::operator/= (int i)						    //circ / int
{
	if(i == 1) return *this;
	for(int j = lowerLimit; j <= upperLimit; j++){
		if(j*i == value){
			value = j;
			return *this;
		}
	}
}

//Modulo assignment
CircularInt& CircularInt::operator%= (const CircularInt& other)		//circ % circ
{
	value %= other.value;
	fixValue();
    return *this;
}
CircularInt& CircularInt::operator%= (int i)						    //circ % int
{
	value %= i;
	fixValue();
    return *this;
}

//AND assignment
CircularInt& CircularInt::operator&= (const CircularInt& other)		//circ & circ
{
	int range = upperLimit - lowerLimit + 1;
	value &= other.value;
	if(value > upperLimit || value < lowerLimit) value %= range;
	fixValue();
	return *this;
}
CircularInt& CircularInt::operator&= (int i)						    //circ & int
{
	int range = upperLimit - lowerLimit + 1;
	value &= i;
	if(value > upperLimit || value < lowerLimit) value %= range;
	fixValue();
	return *this;
}

//XOR assignment
CircularInt& CircularInt::operator^= (const CircularInt& other)		//circ ^ circ
{
	int range = upperLimit - lowerLimit + 1;
	value ^= other.value;
	if(value > upperLimit || value < lowerLimit) value %= range;
	fixValue();
	return *this;
}
CircularInt& CircularInt::operator^= (int i)						    //circ ^ int
{
	int range = upperLimit - lowerLimit + 1;
	value ^= i;
	if(value > upperLimit || value < lowerLimit) value %= range;
	fixValue();
	return *this;
}

//OR assignment
CircularInt& CircularInt::operator|= (const CircularInt& other)		//circ | circ
{
	int range = upperLimit - lowerLimit + 1;
	value |= other.value;
	if(value > upperLimit || value < lowerLimit) value %= range;
	fixValue();
	return *this;
}
CircularInt& CircularInt::operator|= (int i)						    //circ | int
{
	int range = upperLimit - lowerLimit + 1;
	value |= i;
	if(value > upperLimit || value < lowerLimit) value %= range;
	fixValue();
	return *this;
}

//----Binary operators----//
	
//Addition
CircularInt CircularInt::operator+ (const CircularInt& other) const
	{ CircularInt temp = *this; return temp += other; }	
CircularInt CircularInt::operator+ (int i) const
	{ CircularInt temp = *this; return temp += i; }
CircularInt operator+ (int i, const CircularInt& a)
	{ CircularInt temp = a; return temp += i; }
	
//Subtraction
CircularInt CircularInt::operator- (const CircularInt& other) const
	{ CircularInt temp = *this; return temp -= other; }	
CircularInt CircularInt::operator- (int i) const
	{ CircularInt temp = *this; return temp -= i; }
CircularInt operator- (int i, const CircularInt& a)
	{ CircularInt temp = a; temp.setValue(i - temp.getValue()); return temp; }
	
//Multiplication
CircularInt CircularInt::operator* (const CircularInt& other) const
	{ CircularInt temp = *this; return temp *= other; }	
CircularInt CircularInt::operator* (int i) const
	{ CircularInt temp = *this; return temp *= i; }
CircularInt operator* (int i, const CircularInt& a)
	{ CircularInt temp = a; return temp *= i; }
	
//Division
CircularInt CircularInt::operator/ (const CircularInt& other) const
	{ CircularInt temp = *this; return temp /= other; }
CircularInt CircularInt::operator/ (int i) const
	{ CircularInt temp = *this; return temp /= i; }
CircularInt operator/ (int i, const CircularInt& a)
	{ 
		CircularInt temp = a; 
		for(int j = a.lowerLimit; j <= a.upperLimit; j++){
			if(j*a.value == i){
				temp.setValue(j);
				return temp;
			}
		}
	}
	
//Modulo
CircularInt CircularInt::operator% (const CircularInt& other) const
	{ CircularInt temp = *this; return temp %= other; }
CircularInt CircularInt::operator% (int i) const
	{ CircularInt temp = *this; return temp %= i; }
CircularInt operator% (int i, const CircularInt& a)
	{ 
		CircularInt temp = a;
		temp.setValue(i%a.value);
		temp.fixValue();
		return temp;
	}

//----Bitwise operators----//
	
//AND
CircularInt CircularInt::operator& (const CircularInt& other) const
	{ CircularInt temp = *this; return temp &= other; }	
CircularInt CircularInt::operator& (int i) const
	{ CircularInt temp = *this; return temp &= i; }
CircularInt operator& (int i, const CircularInt& a)
	{ CircularInt temp = a; return temp &= i; }

//XOR
CircularInt CircularInt::operator^ (const CircularInt& other) const
	{ CircularInt temp = *this; return temp ^= other; }
CircularInt CircularInt::operator^ (int i) const
	{ CircularInt temp = *this; return temp ^= i; }
CircularInt operator^ (int i, const CircularInt& a)
	{ CircularInt temp = a; return temp ^= i; }

//OR
CircularInt CircularInt::operator| (const CircularInt& other) const	
	{ CircularInt temp = *this; return temp |= other; }
CircularInt CircularInt::operator| (int i) const
	{ CircularInt temp = *this; return temp |= i; }
CircularInt operator| (int i, const CircularInt& a)
	{ CircularInt temp = a; return temp |= i; }

//NOT
CircularInt CircularInt::operator~ () const
	{ 
		CircularInt temp = *this; 
		temp.setValue(~temp.getValue());
		temp.fixValue();
		return temp; 
	}	


