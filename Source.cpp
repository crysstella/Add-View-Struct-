#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct address
{
	string city;
	string state;
	string zip;
};

struct customerAccount
{
	string name;
	address address;
	string phoneNum;
	int purchaseNum;
};



int main()
{
	vector<customerAccount> customer;
	string userInput;
	
	do
	{
		customerAccount newCustomer;
		address AddressCustomer;
		
		cout << "(a)dd a new Customer, (v)iew all Customers, or (q)uit: ";
		getline(cin, userInput);

		if (userInput == "a")
		{
			cout << "Enter customer's name: " << endl;
			getline(cin, newCustomer.name);

			cout << "Enter city, state, and zip for customer's address: " << endl;
			getline(cin, AddressCustomer.city);
			getline(cin, AddressCustomer.state);
			getline(cin, AddressCustomer.zip);
			
			newCustomer.address = AddressCustomer;

			cout << "Enter his/her phone number: " << endl;
			getline(cin, newCustomer.phoneNum);
			
			cout << "Enter the number of Purchases: " << endl;
			cin >> newCustomer.purchaseNum;
			cin.ignore();
			customer.push_back(newCustomer);
			cout << "A new customer is added!" << endl;
			
		}
		else if (userInput == "v")
		{
			if (customer.empty())
			{
				cout << "No customer has been added!" << endl;
			}
			else
			{
				for (int i = 0; i < customer.size(); i++)
				{
					cout << endl << "Name: " << customer[i].name << endl;
					cout << "Address: " << customer[i].address.city << " " << customer[i].address.state << ", " << customer[i].address.zip << endl;
					cout << "Phone #: " << customer[i].phoneNum << endl;
					cout << "Number of Purchases: " << customer[i].purchaseNum << endl;
				}
			}
			
			
		}
		cout << endl; 
	} while (userInput != "q");
	
}