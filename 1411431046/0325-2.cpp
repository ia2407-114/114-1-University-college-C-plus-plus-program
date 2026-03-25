#include <iostream>
#include <string> 
using namespace std;

class Pet
{
public:

	void setPetName(string name)
	{
		if (name.length() > 2 && name.length() < 5)
			PetName = name;
		else
			cout << "Name error!\n";
	}

	void setPetAge(int Age)
	{
		if (Age <= 20)
			PetAge = Age;
		else
			cout << "Age error!\n";
	}

	
	void getPetIn() const
	{
		char ans;
		cout << "Are you the owner? (Y/N): ";
		cin >> ans;

		if (ans == 'Y' || ans == 'y')
		{
			cout << "Pet Name: " << PetName << endl;
			cout << "Pet Age: " << PetAge << endl;
		}
		else
		{
			cout << "Access denied!\n";
		}
	}

private:
	string PetName = "amy";
	int PetAge = 1;
};


int main()
{
	string nameOfPet;
	Pet myPet;
	int ageOfPet;

	cout << "\nPlease enter the pet name:" << endl;
	getline(cin, nameOfPet);
	myPet.setPetName(nameOfPet);

	cout << "\nPlease enter the pet age:" << endl;
	cin >> ageOfPet;
	myPet.setPetAge(ageOfPet);

	cout << endl;
	myPet.getPetIn();   
}