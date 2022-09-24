#include <iostream>
#include <string>      //Includes string functions
#include <iomanip>
#include <limits>
#include "header.hpp"
#include "validations.cpp"
#include <fstream>
fstream f1;
fstream f2;


/**********************************************************************************


FUNCTIONNAME:customer_list_to_file()
DESCRIPTION:This function  is used to store 

*********************************************************************************/
int customer_list_to_file()
{
	if(cust.empty())
	{
		return EXIT_FAILURE;
	}
	f1.open("Customer_file",ios::out | ios::binary);
	for(auto t:cust)
	{
		f1.write((char *)&t,sizeof(customer));
	}
	f1.close();
	return EXIT_FAILURE;
}



/**********************************************************************************


FUNCTIONNAME:customer_file_to_list()
DESCRIPTION:This function  is used to generate customer list from customer file 

*********************************************************************************/
int customer_file_to_list()
{
	customer c;
	f2.open("Customer_file",ios::in | ios::binary);
	if(!f2)
	{
		return EXIT_FAILURE;
	}
	else
	{
		int temp=sizeof(c);
		f2.read((char *)&c,temp);
		std::cout<<c.customer_name<<"  "<<c.customer_id<<endl<<endl<<endl;
		while(!f2.eof())
		{
			cust.push_back(c);
			f2.read((char *)&c,temp);
		}
		f2.close();
		return EXIT_FAILURE;
	}
}



/**********************************************************************************


FUNCTIONNAME:product_list_to_file()
DESCRIPTION:This function  is used to store product list in product file

*********************************************************************************/
int product_list_to_file()
{
	if(prod.empty())
	{
		return EXIT_FAILURE;
	}
	f1.open("Product_file",ios::out | ios::binary);
	for(list<product> :: iterator t=prod.begin();t!=prod.end();t++)
	{
		f1.write((char *)&t,sizeof(product));
	}
	f1.close();
	return EXIT_FAILURE;
}



/**********************************************************************************


FUNCTIONNAME:product_file_to_list()
DESCRIPTION:This function  is used to generate product list from product file

*********************************************************************************/
int product_file_to_list()
{
	product pr;
	f2.open("Product_file",ios::in | ios::binary);
	if(!f2)
	{
		return EXIT_FAILURE;
	}
	else
	{
		int temp=sizeof(pr);
		f2.read((char *) &pr,temp);
		while(!f2.eof())
		{
			prod.push_back(pr);
			f2.read((char *) &pr,temp);
		}
		f2.close();
		return EXIT_FAILURE;
	}
}



/**********************************************************************************


FUNCTIONNAME:transaction_list_to_file()
DESCRIPTION:This function  is used to store transaction list in transaction file

*********************************************************************************/
int transaction_list_to_file()
{
	f1.open("Transaction_file",ios::out | ios::binary);
	for(list<transaction> :: iterator t=trans.begin();t!=trans.end();t++)
	{
		f1.write((char *) &t,sizeof(transaction));
	}
	f1.close();
	return EXIT_FAILURE;
}




/**********************************************************************************


FUNCTIONNAME:transaction_file_to_list()
DESCRIPTION:This function  is used to generate transaction list from transaction file

*********************************************************************************/
int transaction_file_to_list()
{
	if(trans.empty())
	{
		return EXIT_FAILURE;
	}
	transaction tr;
	f2.open("Transaction_file",ios::in | ios::binary);
	if(!f2)
	{
		return EXIT_FAILURE;
	}
	else
	{
		int temp=sizeof(tr);
		f2.read((char *) &tr,temp);
		while(!f2.eof())
		{
			trans.push_back(tr);
			f2.read((char *) &tr,temp);
		}
		f2.close();
		return EXIT_FAILURE;
	}
}


/**********************************************************************************


FUNCTIONNAME:supplier_list_to_file()
DESCRIPTION:This function  is used to store supplier list in supplier file

*********************************************************************************/
int supplier_list_to_file()
{
	if(sup.empty())
	{
		return EXIT_FAILURE;
	}
	f1.open("Supplier_file",ios::out | ios::binary);
	for(list<supplier> :: iterator t=sup.begin();t!=sup.end();t++)
	{
		f1.write((char *) &t,sizeof(supplier));
	}
	f1.close();
	return EXIT_FAILURE;
}



/**********************************************************************************


FUNCTIONNAME:supplier_file_to_list()
DESCRIPTION:This function  is used to generate supplier list from supplier file

*********************************************************************************/
int supplier_file_to_list()
{
	supplier su;
	f2.open("Supplier_file",ios::in | ios::binary);
	if(!f2) 
	{
		return EXIT_FAILURE;
	}
	else
	{
		int temp=sizeof(su);
		f2.read((char *) &su,temp);
		while(!f2.eof())
		{
			sup.push_back(su);
			f2.read((char *) &su,temp);
		}
		f2.close();
		return EXIT_FAILURE;
	}
}
