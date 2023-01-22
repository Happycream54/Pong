#include <iostream>
#include <string>

using namespace std;

void Menu()
{
	int choice;
	do
	{
		cout << "0. Play\n1. Settings\n2. creits\n3. exit\n\n";
		cin >> choice;
		switch (choice)
		{
		case 0:
			
			break;
		case 1:
			cout << "Your in the settings\n";
			break;
		case 2:
			cout << "by appleninja360YT \n";
			break;
		case 3:
			cout << "Ok Bye\n";
			break;
		}


	} while (choice != 3);

}

int main()
{
	Menu();
}