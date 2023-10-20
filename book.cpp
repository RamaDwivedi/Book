#include<iostream>
#include<string>
#include "Book.h"
using namespace std;
class Book
{

	public: Book(int bookid,string name,double price)
	{
	this->bookid=bookid;
	this->name=name;
	this->price=price;	
		 } 
		  void setId(int bookid)
		  {
		  	this->bookid=bookid;
			  } 
			  void setName(string name)
		  {
		  	this->name=name;
			  } 
			  void setPrice(double price)
		  {
		  	this->price=price;
			  }
			  
			  int getId()
			  {
			  	return bookid;
				  }
				  string getName()  
				  {
				  	return name;
					}  
					double getPrice()
					{
						return price;
					}
};
