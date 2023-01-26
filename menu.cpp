#include <iostream>
#include <string>
#include <fstream>


using namespace std;
void Menu()
{
	
	int choice;
	do
	{
		cout << "0. Play\n1. difficulty\n2. exit\n\n";
		cin >> choice;
		switch (choice)
		{
		case 0: {
			system("testing.exe");
		}break;
		case 1: {
			cout << "What level of difficulty would you like to play? (1-10)\n";
			int num;
			cin >> num;
			if (num > 10)num = 10;
			else num = num;
			ofstream outFile;
			outFile.open("file.txt");
			outFile.write((char*)&num, sizeof(num));
			outFile.close();

		}break;
		case 2: {
			cout << "Thanks for playing!\n";
		}break;


		}


	} while (choice != 2);

}

int main()
{
	Menu();
}