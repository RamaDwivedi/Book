
#include<iostream>
#include<string>
using namespace std;
class Book
{
	private: int bookid;
	         string name;
	         double price;
 public:
 	Book(int bookid, string name, double price);
 	void setId(int bookid);
 	void setName(string name);
 	void setPrice(double price);
 	 int getId();
 	  string getName();
 	  double getPrice();
 };
