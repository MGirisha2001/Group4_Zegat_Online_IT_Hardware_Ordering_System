/**********************************************************************************


FILENAME: menu.cpp
DESCRIPTION:This file is used to display the main menu to the user.

DATE            NAME              REASON
------------------------------------------------------------------
21/9/22        Group-4          This is done for creation of menu  	

 *********************************************************************************/

#include <iostream>       //Including required Header files
#include <string>        //Includes string functions
#include <iomanip>
#include "header.hpp"
#include "validations.cpp"
#include <mutex>
#include <thread>
using namespace std;


/**********************************************************************************

FUNCTIONNAME: maintain_product()
DESCRIPTION:This function is used to maintain products by admin like add,edit,
delete and view products.

 *********************************************************************************/
int Admin::maintain_product()
{
	int choice=0;
	while(choice!=5)
	{         // Display maintain product menu.
		cout<<"\n-------------------------------------------\n";
		cout<<"               Maintain Product ";
		cout<<"\n-------------------------------------------\n";
		cout<<"\n\t1.Add Product\n\t2.Edit Product\n\t3.Remove Product\n\t4.View List of Product\n\t5.Exit";
		cout<<endl<<"\n\nEnter your choice: \n";
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
		switch(choice)
		{
			case 1: system("clear");
				ad.add_product();   //Calling add product function of admin.
				break;
			case 2: system("clear");
				ad.edit_product();   //Calling edit product function  of admin.
				break;
			case 3: system("clear");
				ad.remove_product();   //Calling remove product function  of admin.
				break;
			case 4: system("clear");
				ad.view_product_list();   //Calling view product function  of admin.
				break;
			case 5:
				system("clear");
				break;
			default:
				cout<<"\nInvalid choice!!!\n\n";

		}
	}
	return EXIT_SUCCESS;
}



/**********************************************************************************

FUNCTIONNAME: maintain_supplier()
DESCRIPTION:This function is used to maintain supplier by admin like add,edit,
delete and view supplier.

 *********************************************************************************/

int Admin::maintain_supplier()
{
	int choice=0;
	while(choice!=4)
	{        // Display maintain supplier menu
		cout<<"\n-------------------------------------------\n";
		cout<<"               Maintain Supplier ";
		cout<<"\n-------------------------------------------\n";
		cout<<"\n\t1.Edit Supplier\n\t2.Remove Supplier\n\t3.View Supplier List\n\t4.Exit"<<endl;
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
		switch(choice)
		{
			case 1: system("clear");
				ad.edit_supplier();   //Calling edit supplier function  of admin.
				break;
			case 2: system("clear");
				ad.remove_supplier();  //Calling remove supplier function  of  admin.
				break;
			case 3: system("clear");
				ad.view_supplier_list();  //Calling view supplier  list function  of admin.
				break;
			case 4:
				system("clear");
				break;
			default:
				cout<<"\n\nInvalid choice!!!\n\n";

		}
	}
	return EXIT_SUCCESS;
}



/**********************************************************************************

FUNCTIONNAME: maintain_customer)
DESCRIPTION:This function is used to maintain customer by admin like add,edit,
delete and view customer.

 *********************************************************************************/
int Admin::maintain_customer()
{

	int choice=0;
	while(choice!=4)
	{                    //Display maintain customer menu.
		cout<<"\n-------------------------------------------\n";
		cout<<"              Maintain Customer ";
		cout<<"\n-------------------------------------------\n";
		cout<<"\n\t1.Edit Customer\n\t2.Remove Customer\n\t3.View list\n\t4.Exit"<<endl;
		cout<<endl<<"\nEnter your choice:\n";
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
		switch(choice)
		{
			case 1: system("clear");
				ad.edit_customer();  //Calling edit customer function of admin.
				break;
			case 2: system("clear");
				ad.remove_customer();  //Calling remove customer function  of admin.
				break;
			case 3: system("clear");
				ad.view_customer_list();  //Calling view customer list function of admin.
				break;
			case 4:
				system("clear");
				break;

			default:
				cout<<"\nInvalid choice!!!\n\n";

		}
	}
	return EXIT_SUCCESS;
}



/**********************************************************************************

FUNCTIONNAME: admin_corner()
DESCRIPTION:This function is used to display various features that admin can perform.

 *********************************************************************************/
int admin_corner()
{

	int choice=0;
	while(choice!=8)
	{	
		//Displaying Main Menu of admin.
		cout<<"\n-------------------------------------------\n";
		cout<<"               Admin DashBoard ";
		cout<<"\n-------------------------------------------\n";
		cout<<"\n\t1.Maintain Supplier\n\t2.Maintain Customer\n\t3.Maintain Product\n\t4.Show Top 3 Selling Product\n\t5.Order Stock\n\t6.Show Stock Report\n\t7.Transaction report\n\t8.Logout";

		cout<<endl<<"\n\nEnter your choice: \n";
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
		switch(choice)
		{
			case 1: system("clear");
				ad.maintain_supplier();  //Calling maintain supplier function of admin.
				break;
			case 2:	system("clear");
				ad.maintain_customer();	 //Calling maintain customer function  of admin.
				break;
			case 3: system("clear");
				ad.maintain_product();   //Calling maintain product function of admin.
				break;
			case 4: system("clear");
				ad.top_three_product();     //Calling top 3 product function of admin.
				break;
			case 5: system("clear");
				ad.order_stock();      //Calling order stock function of admin.
				break;
			case 6: system("clear");
				ad.stock_report();     //Calling stock report function of admin.
				break;
			case 7: system("clear");
				ad.view_transactions();  //Calling view transactions function of admin.
				break;
			case 8: 
				system("clear");
				break;
			default: 
				cout<<"\n\nInvalid choice!!!\n\n";
		}
	}

	return EXIT_SUCCESS;
}



/**********************************************************************************

FUNCTIONNAME: supplier_corner()
DESCRIPTION:This function is used to display supplier corner menu

 *********************************************************************************/
int supplier_corner()
{                     
	int choice=0;
	supplier s;
	while(choice!=3)
	{   //Display supplier corner menu.
		cout<<"\n-------------------------------------------\n";
		cout<<"              Supplier Corner ";
		cout<<"\n-------------------------------------------\n";
		cout<<"\n\t1.Supplier Registration\n\t2.login\n\t3.Exit";
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
		switch(choice)
		{
			case 1:	system("clear");
				s.register_supplier();      //Calling Register supplier funcion
				break;	
			case 2:	system("clear");
				s.login_supplier();        //Calling Login supplier function
				break;
			case 3:
				system("clear");
				break;
			default:
				cout<<"\n\nInvalid choice!!!\n\n";

		}
	}
	return EXIT_SUCCESS;
}





/**********************************************************************************

FUNCTIONNAME: customer_corner()
DESCRIPTION:This function is used to display customer corner menu

 *********************************************************************************/
int customer_corner()
{
	int choice=0;
	customer c;
	while(choice!=3)
	{  //display customer menu.
		cout<<"\n-------------------------------------------\n";
		cout<<"              Customer Corner ";
		cout<<"\n-------------------------------------------\n";
		cout<<"\n\t1.Customer Registration\n\t2.login\n\t3.Exit";
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
		switch(choice)
		{
			case 1:	system("clear");
				c.register_customer();      //Calling Register customer funcion
				break;	
			case 2:	system("clear");
				c.login_customer();        //Calling Login customer function
				break;
			case 3:
				system("clear");
				break;
			default:
				cout<<"\n\nInvalid choice!!!\n\n";
		}
	}
	return EXIT_SUCCESS;
}



/**********************************************************************************

FUNCTIONNAME: login_supplier()
DESCRIPTION:This function is used to login supplier

 *********************************************************************************/
int supplier::login_supplier()
{
	int choice=0;
	int id;
	int flag=0;
	if(sup.empty())  //Checking if supplier list is empty.
	{
		cout<<"\nSupplier List is empty!!!\n";
		return EXIT_FAILURE;
	}
	id=validations::take_supplier_id();
	system("clear");
	list<supplier>::iterator it=sup.begin();
	for(;it!=sup.end();it++)
	{
		if(it->get_supplier_id()==id)
		{
			int flag=1;
			while(choice!=6)
			{	
				//Displaying Main Menu of supplier.
				cout<<"\n-------------------------------------------\n";
				cout<<"              Supplier DashBoard ";
				cout<<"\n-------------------------------------------\n";
				cout<<"       Welcome, Supplier: "<<it->get_supplier_name()<<"\n";
				cout<<"\n\t1.View Details\n\t2.Edit Details\n\t3.Add Product\n\t4.Edit Supplied Product\n\t5.View Product Supplied\n\t6.Exit";
				choice=validations::take_choice();
				switch(choice)
				{
					case 1:	system("clear");
						it->view_supplier(); //Calling view supplier function of supplier.
						break;	
					case 2:	system("clear");
						it->edit_supplier_details();  //Calling edit supplier details function of supplier. 
						break;
					case 3:	system("clear");
						it->add_product();  //Calling add product function of supplier.
						break;
					case 4: system("clear");
						it->edit_product(); //Calling edit product function of supplier.
						break;
					case 5: system("clear");
						it->products_supplied();  //Calling products supplied function of supplier.
						break;
					case 6: 
						system("clear");
						break;
					default: 
						cout<<"\n\nInvalid choice!!!\n\n";
				}
			}
			break;
		}
	}
	if(flag==0 && choice!=6)
	{
		cout<<"\n\nYou have entered Incorrect Supplier ID: "<<id<<"\n\n";
	}
	return EXIT_SUCCESS;
}



/**********************************************************************************

FUNCTIONNAME: login_customer()
DESCRIPTION:This function is used to login customer

 *********************************************************************************/
int customer::login_customer()
{
	int choice=0;
	int id;
	int flag=0;
	if(cust.empty()) //Checking if customer list is empty
	{
		cout<<"\nCustomer List is empty!!!\n";
		return EXIT_FAILURE;
	}
	id=validations::take_customer_id();
	system("clear");
	list<customer>::iterator it=cust.begin();
	for(;it!=cust.end();it++)
	{
		if(it->get_customer_id()==id)
		{
			int flag=1;
			while(choice!=6)
			{	 //Display main menu of customer
				cout<<"\n-------------------------------------------\n";
				cout<<"               Customer DashBoard ";
				cout<<"\n-------------------------------------------\n";
				cout<<"\n       Welcome, Customer: "<<it->get_customer_name()<<"\n";
				cout<<"\n\t1.View Products\n\t2.Place order\n\t3.View Transacion history\n\t4.View Your Details\n\t5.Edit Details\n\t6.Exit";
				choice=validations::take_choice();
				customer *ptr=new customer();

				switch(choice)
				{
					case 1: system("clear");
						it->view_items(); //Calling view item function of customer.
						break;
					case 3: system("clear");
						it->view_transaction_history(); //Calling view transaction history function  of customer.
						break;
					case 4: system("clear");
						it->view_customer();  //Calling view customer function of customer.
						break;
					case 5: system("clear");
						it->edit_customer_details(); //Calling edit customer details function of customer.
						break;
					case 6: 
						system("clear");
						break;
					default: 
						cout<<"\nInvalid choice!!!\n\n";

					case 2:	system("clear");
						ptr->customer_id=it->get_customer_id();
						thread t1(&customer::place_order,ptr);  // Calling place order function of customer.
						t1.join();
						break;
				}
			}
			break;
		}
	}
	if(flag==0 && choice!=6)
	{
		cout<<"\n\nYou have entered Incorrect Customer ID: "<<id<<"\n\n";
	}
	return EXIT_SUCCESS;
}
