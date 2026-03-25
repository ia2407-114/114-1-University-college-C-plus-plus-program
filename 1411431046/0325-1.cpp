#include <iostream>
#include <string> 
using namespace std;

// GradeBook class definition
class Pet   // 改這裡：名稱統一
{
public:

	void setPetName(string name)
	{
		// 加入判斷：長度 >2 且 <5
		if (name.length() > 2 && name.length() < 5)
			PetName = name;
		else
			cout << "Name error!\n";
	}

	void setPetAge(int Age)
	{
		// 年齡 <=20
		if (Age <= 20)
			PetAge = Age;
		else
			cout << "Age error!\n";
	}

	string getPetName() const
	{
		return PetName;
	}

	int getPetAge() const 
	{
		return PetAge;
	}

	void displayMessage() const
	{
		cout << "Welcome to see my pet\n"
			<< getPetName() << " " << getPetAge() << "!"
			<< endl;
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

	cout << "Initial PET name is: " << myPet.getPetName() << endl;
	cout << "Initial PET age is: " << myPet.getPetAge() << endl;

	cout << "\nPlease enter the pet name:" << endl;
	getline(cin, nameOfPet);
	myPet.setPetName(nameOfPet);

	cout << "\nPlease enter the pet age:" << endl;
	cin >> ageOfPet;            
	myPet.setPetAge(ageOfPet);  

	cout << endl;
	myPet.displayMessage();
}