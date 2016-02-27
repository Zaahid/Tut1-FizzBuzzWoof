#include<iostream>
using  namespace std;

class Fraction
{
private:
	int num1;                    // creating variables
	int num2;



public:
	Fraction(){             //creating a  default constructor
	
		num1 =0;
		num2 = 0;
	}
	  

	~Fraction() {};           //creating default destructor
	
	

	void setNumdenom(int denom, int numer)      //creating set function
	{
		num1 = numer;
		num2 = denom;
	}


	int  getnumdenom()                 //creating  get function
	{
		return(num1, num2);
	}


	float add()                //creating add function
	{
	
		return(num1 + num2);

	}



	float subtract()       //creating substract function
	{
	
		return (num1 - num2);
	
	}


	float multiply()            //creating multiply  function
	{
		return(num1*num2);
	}


	float divide()           //creating divide function
	{
		return(num1 / num2);
	}


	float print()        // outputing fraction 
	{
		int remainder;
		int num3;

			remainder = num1%num2;
			num3 = num1 / num2;



			return(num3, remainder);
	}




};

