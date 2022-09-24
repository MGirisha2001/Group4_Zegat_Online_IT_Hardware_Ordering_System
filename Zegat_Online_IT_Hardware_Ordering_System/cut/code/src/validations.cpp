/**********************************************************************************


FILENAME: validations.cpp
DESCRIPTION:This file is used for validations.

DATE            NAME              REASON
------------------------------------------------------------------
19/9/22         Group-4          This is done for validation purpose 	

 *********************************************************************************/
#ifndef VALIDATIONS
#define VALIDATIONS
#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>
using namespace std;

class validations
{

	public:

		/**********************************************************************************


			FUNCTIONNAME: check_string
			DESCRIPTION:This function  is used to check whehter given string is valid or not

		 *********************************************************************************/
		static bool check_string(string s)
		{
			int flag=0;
			for(int i=0;i<s.length();i++)
			{
				if(!isalpha(s[i]))
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}




		/**********************************************************************************


			FUNCTIONNAME: check_name
			DESCRIPTION:This function  is used to check whether given string is valid as name or not

		 *********************************************************************************/
		static bool check_name(string name)
		{
			if(name[0]==' '||(name[0]=='\t'))
			{
				return true;
			}
			int flag=0;
			for(int i=0;i<name.length();i++)
			{
				if(!isalpha(name[i])&&name[i]!=' ')
				{
					flag=1;
					break;
				}
			}
			if((flag==1)||(name.length()<4||name.length()>25))
			{
				return true;
			}
			else
			{
				return false;
			}
		}




		/**********************************************************************************


			FUNCTIONNAME: check address
			DESCRIPTION:This function  is used to check whether given string is valid as address or not

		 *********************************************************************************/
		static bool check_address(string address)
		{
			if(address[0]==' '||(address[0]=='\t')||address[0]=='\n')
			{
				return true;
			}
			if(address.length()<4||address.length()>40)
			{
				return true;
			}
			return false;
		}




		/**********************************************************************************


			FUNCTIONNAME: check_digit
			DESCRIPTION:This function  is used to check whether given string has only digits or not

		 *********************************************************************************/
		static bool check_digit(string d)
		{
			int flag=0;
			for(int i=0;i<d.length();i++)
			{
				if(!isdigit(d[i]))
				{
					flag=1;
					break;
				}
			}
			if(flag==1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}




		/**********************************************************************************


			FUNCTIONNAME: take_choice
			DESCRIPTION:This function  is used to input users choice and validate it

		 *********************************************************************************/
		static int take_choice()
		{
			int choice=0;
			string ch;
			while(1)
			{
				cout<<"\nEnter Choice: \n";
				cin>>ch;
				if(check_digit(ch))
				{
					cout<<"\nChoice can be digits only!!!\n"<<endl;
					continue;
				}
				else
				{
					choice=stoi(ch);
					break;
				}
			}
			return choice;
		}




		/**********************************************************************************


			FUNCTIONNAME: password_check
			DESCRIPTION:This function  is used to input a password and authenticate it.

		 *********************************************************************************/
		static bool password_check()
		{
			string pass;
			cout<<"\nEnter Password:\n";
			cin>>pass;
			if(pass.compare("ABC@123")==0)
			{
				return true;
			}
			return false;
		}



		/**********************************************************************************


			FUNCTIONNAME:take_supplier_id 
			DESCRIPTION:This function  is used to take supplier id as input and validate it 

		 *********************************************************************************/
		static int take_supplier_id()
		{
			int id=0;
			string check;
			while(1)
			{
				cout<<"\nEnter Supplier Id: \n";
				cin>>check;
				if(check_digit(check))
				{
					cout<<"\nSupplier Id can be digits only!!!\n"<<endl;
					continue;
				}
				else
				{
					id=stoi(check);
					break;
				}
			}
			return id;
		}



		/**********************************************************************************


			FUNCTIONNAME:take_customer_id 
			DESCRIPTION:This function  is used to take customer id as input and validate it 

		 *********************************************************************************/
		static int take_customer_id()
		{
			int id=0;
			string check;
			while(1)
			{
				cout<<"\nEnter Customer Id: \n";
				cin>>check;
				if(check_digit(check))
				{
					cout<<"\nCustomer Id can be digits only!!!\n"<<endl;
					continue;
				}
				else
				{
					id=stoi(check);
					break;
				}
			}
			return id;
		}
};
#endif






