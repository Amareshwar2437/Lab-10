//Include all necessary libraries
#include<iostream>
#include<cstring>
class rect
{	
	public:
		double l,b; 	//Set the length n breadth of the rectangle and declare variables accordingly
//l- Represents Length
//b- Represents breadth
		double area(double l, double b); //Commit for area calc
		double perimeter(double l, double b); //Commit for per calc 
}
		double rect::area( double l,double b) { 
	
		return l*b;//Formula for Area
	}
		double rect::perimeter(double l, double b){  
	
		return 2*(l+b);//Formula for Perimeter
	}
//Now declare the main function and use class and even call the function as per ur need	
int main()
{ 
	rect delta; //1st Rectangle
  	rect gamma;  //2nd rectangle
  	double area,perimeter;
  	area=delta.area(3.7,7.3);//Do Calculation
  	perimeter=delta.per(3.7,7.3);//alling the function and mentioning data type

 	cout<<"The area of the 1st Rectangle is:"<<area<<endl;
  	cout<<"The perimter of the 1st Rectangle is:"<<perimeter<<endl;
  	
	area=gamma.area(4.2,2.4);
  	per=gamma.perimeter(4.2,2.4);
  	
	cout<<"The area of the 2nd Rectangle is:"<<area<<endl;
  	cout<<"The perimeter of the 2ND Rectangle is:"<<perimeter<<endl;

	return 0;
}

//The shield will return again
//Spear, Curb stomp, DDT
//Obsessed with WWE
