/**********************************************************************************


FILENAME: main.cpp
DESCRIPTION:This file is used to display the main menu to the user.

DATE            NAME              REASON
------------------------------------------------------------------
20/9/22         Group-4          This is done for creation of menu  	

 *********************************************************************************/

#include <iostream>       //Including required Header files
#include <string>      //Includes string functions
#include <iomanip>
#include "menu.cpp"
#include "func1.cpp"
#include "func2.cpp"
#include "header.hpp"
#include "validations.cpp"
using namespace std;


int main()        
{
	product_file_to_list();
	transaction_file_to_list();
	customer_file_to_list();
	supplier_file_to_list();	
	int choice=0;
	int (*option[3])()={admin_corner,supplier_corner,customer_corner};      //Using Pointer to Function
	while(choice!=4)
	{	
		//Displaying Main Menu
		cout<<"\n-----------------------------------------------\n";
		cout<<"               Welcome to ZOIHO";
		cout<<"\n-----------------------------------------------\n";
		cout<<"\n\t1.Admin Corner\n\t2.Supplier Corner\n\t3.Customer Corner\n\t4.Exit";
		cout<<endl<<"\nEnter your choice: \n";
		cin>>temp;
		try 
		{
			choice=stoi(temp);
		}
	  	catch(exception& ex)
		{
			cout<<endl<<"\nChoice can be digits only!!!\n"<<endl;
			continue;
		}
		if(choice>0 && choice<4)     
		{
			if(choice==1)
			{
				if(validations::password_check())   //Calling password check to take password as input and validate it
				{
					system("clear");
					option[choice-1]();
				}
				else
				{
					system("clear");
					cout<<"\nYou have entered Wrong Password!!!\n";
					continue;
				}
			}
			else
				system("clear");
				option[choice-1]();
		}
		else if(choice==4)
		{
			break;
		}
		else
		{
			system("clear");
			cout<<"\nInvalid choice!\n"<<endl;
			continue;

		}
	}
	supplier_list_to_file();
	customer_list_to_file();
	product_list_to_file();
	transaction_list_to_file();
	cout<<endl<<"\nThank You!\nVisit us Again!!!"<<endl<<endl;
	return EXIT_SUCCESS;
}



