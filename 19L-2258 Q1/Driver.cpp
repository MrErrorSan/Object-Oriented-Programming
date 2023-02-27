//Header Files go here
//#include<iostream>
#include"Pharmacy.h"

using namespace std;
int main()
{
	int itemCount = 4; 
	Pharmacy ph (itemCount); //ph has a list of 4 items here 
	//assume that itemcount will not change during the run.

	Item * iptr = new Permanent("glucometer",5000, 15, 11, 2020);
	// a glucometer of price 5000 and entry date 15 Nov 2020

	iptr->print();	//Print all information i.e. name, actual price, entry date, Passed days, current price.
	
	ph.AddItem(iptr);
	
	iptr = new Perishable("Panadol", 20, 16, 01, 2021,500);
	// 500mg Panadol tablet of price 20, expiry date 16 Jan 2021
	
	iptr->print();	//Prints name, current price(depends on expiry  date), quantity and expiry date. 
	ph.AddItem(iptr);
	iptr = new Bulk_Item( "Gloves", 500, 12, 10, 2020, "Glove box for doctors" , true); 		
	// glovesbox of cost 500 Rs. With entry date 12 Oct 2020
	iptr->print(); 	
	//prints name, actual price, entry date, Passed days, current price, description and if it is part of set or not.

	ph.AddItem(iptr);
	iptr = new Bulk_Item("5CC Syringe", 90, 15, 5, 2020, "For Injections only" , false);
	// Syring of cost 90 Rs. each with entry date 15 May 2020
	ph.AddItem(iptr);
	ph.DisplayItems();
	// this function should print complete information of items in list
	system("pause");
	return 0;
}