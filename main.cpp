# include <iostream>
using namespace std;
int main()
{
	
	const int size = 10;
	int fillsize = 5;
	int RollNumber[size] = { 0 };
	float MidtermMarks[size] = { 0.0 };
	float FinalMarks[size] = { 0.0 };
	int ClassNo[size] = { 0 };
	char Grades[size] = { '\0' };

	int intTemp = 0;
	float  floatTemp = 0.0;
	char charTemp = '\0';

	for (int i = 0; i < fillsize; i++)
	{
		RollNumber[i] = (rand() % 1000) + 1000;
		ClassNo[i] = rand() % 9 + 1;
		FinalMarks[i] = rand() % 101;
		MidtermMarks[i] = rand() % 51;

		
		if (FinalMarks[i] >= 86) Grades[i] = 'A';
		else if (FinalMarks[i] >= 73 && FinalMarks[i] < 86)Grades[i] = 'B';
		else if (FinalMarks[i] >= 60 && FinalMarks[i] < 73)Grades[i] = 'C';
		else if (FinalMarks[i] >= 50 && FinalMarks[i] < 60)Grades[i] = 'D';
		else Grades[i] = 'F';
	}
		while (1)
		{
			char menuoption = '\0';
			cout << "Enter 1 to display all records in ascending  order based on marks in Midterm " << endl;
			cout << "Enter 2 to display all records in descending order based on marks in Midterm " << endl;
			cout << "Enter 3 to display all records in ascending  order based on marks in  Final " << endl;
			cout << "Enter 4 to display all records in descending order based on marks in  Final " << endl;
			cout << "Enter 5 to display all records in ascending  order based on Grade " << endl;
			cout << "Enter 6 to display all records in descending order based on Grade " << endl;
			cout << "Enter 7 to Add a new entry of a student " << endl;
			cout << "Enter 8 to Delete a student record based on his Roll Number" << endl;
			cout << "Type your option : ";
			cin >> menuoption;
			if (menuoption == '1')

			{
				cout << "___________________________________________________________________________________" << endl;
				cout << "Roll Number\t" << "|" << "MidTerm(50 marks)\t" << "|" << "Final(100 marks)\t" << "|" << "Class\t" << "|" << "Grade" << "    |" << endl;
				cout << "         \t" << "|" << "                     \t" << "|" << "               \t" << "|" << "   \t" << "|" << "         |" << endl;
				cout << "________________|_______________________|_______________________|_______|_________|" << endl;
				for (int i = 0; i < fillsize - 1; i++)
				{
					for (int j = i + 1; j < fillsize; j++)
					{
						if (MidtermMarks[i]>MidtermMarks[j])
						{
							floatTemp = MidtermMarks[i];
							MidtermMarks[i] = MidtermMarks[j];
							MidtermMarks[j] = floatTemp;

							floatTemp = FinalMarks[i];
							FinalMarks[i] = FinalMarks[j];
							FinalMarks[j] = floatTemp;

							charTemp = Grades[i];
							Grades[j] = Grades[i];
							Grades[i] = charTemp;

							intTemp = RollNumber[i];
							RollNumber[i] = RollNumber[j];
							RollNumber[j] = intTemp;

							intTemp = ClassNo[i];
							ClassNo[i] = ClassNo[j];
							ClassNo[j] = intTemp;

						}
					}
				}

				for (int i = 0; i < fillsize; i++){

					cout << RollNumber[i] << "\t\t" << "|" << MidtermMarks[i] << "\t\t\t|" << FinalMarks[i] << "\t\t        |" << ClassNo[i] << " \t|" << Grades[i] << "        |" << endl;
					cout << "         \t" << "|" << "                \t" << "|" << "                \t" << "|" << "      \t" << "|         " << "|" << endl;
					cout << "________________|_______________________|_______________________|_______|_________|" << endl;

				}

			}
			
			else if (menuoption == '2')
			{
				cout << "___________________________________________________________________________________" << endl;
				cout << "Roll Number\t" << "|" << "MidTerm(50 marks)\t" << "|" << "Final(100 marks)\t" << "|" << "Class\t" << "|" << "Grade" << "    |" << endl;
				cout << "         \t" << "|" << "                     \t" << "|" << "               \t" << "|" << "   \t" << "|" << "         |" << endl;
				cout << "________________|_______________________|_______________________|_______|_________|" << endl;
				for (int i = 0; i < fillsize - 1; i++)
				{
					for (int j = i + 1; j < fillsize; j++)
					{
						if (MidtermMarks[i]<MidtermMarks[j])
						{
							floatTemp = MidtermMarks[i];
							MidtermMarks[i] = MidtermMarks[j];
							MidtermMarks[j] = floatTemp;

							floatTemp = FinalMarks[i];
							FinalMarks[i] = FinalMarks[j];
							FinalMarks[j] = floatTemp;

							charTemp = Grades[i];
							Grades[j] = Grades[i];
							Grades[i] = charTemp;

							intTemp = RollNumber[i];
							RollNumber[i] = RollNumber[j];
							RollNumber[j] = intTemp;

							intTemp = ClassNo[i];
							ClassNo[i] = ClassNo[j];
							ClassNo[j] = intTemp;

						}
					}
				}

				for (int i = 0; i < fillsize; i++){

					cout << RollNumber[i] << "\t\t" << "|" << MidtermMarks[i] << "\t\t\t|" << FinalMarks[i] << "\t\t        |" << ClassNo[i] << " \t|" << Grades[i] << "        |" << endl;
					cout << "         \t" << "|" << "                \t" << "|" << "                \t" << "|" << "      \t" << "|         " << "|" << endl;
					cout << "________________|_______________________|_______________________|_______|_________|" << endl;

				}
			}

			else if (menuoption == '3')
			{
				cout << "___________________________________________________________________________________" << endl;
				cout << "Roll Number\t" << "|" << "MidTerm(50 marks)\t" << "|" << "Final(100 marks)\t" << "|" << "Class\t" << "|" << "Grade" << "    |" << endl;
				cout << "         \t" << "|" << "                     \t" << "|" << "               \t" << "|" << "   \t" << "|" << "         |" << endl;
				cout << "________________|_______________________|_______________________|_______|_________|" << endl;
				for (int i = 0; i < fillsize - 1; i++)
				{
					for (int j = i + 1; j < fillsize; j++)
					{
						if (FinalMarks[i]>FinalMarks[j])
						{
							floatTemp = MidtermMarks[i];
							MidtermMarks[i] = MidtermMarks[j];
							MidtermMarks[j] = floatTemp;

							floatTemp = FinalMarks[i];
							FinalMarks[i] = FinalMarks[j];
							FinalMarks[j] = floatTemp;

							charTemp = Grades[i];
							Grades[j] = Grades[i];
							Grades[i] = charTemp;

							intTemp = RollNumber[i];
							RollNumber[i] = RollNumber[j];
							RollNumber[j] = intTemp;

							intTemp = ClassNo[i];
							ClassNo[i] = ClassNo[j];
							ClassNo[j] = intTemp;

						}
					}
				}

				for (int i = 0; i < fillsize; i++){

					cout << RollNumber[i] << "\t\t" << "|" << MidtermMarks[i] << "\t\t\t|" << FinalMarks[i] << "\t\t        |" << ClassNo[i] << " \t|" << Grades[i] << "        |" << endl;
					cout << "         \t" << "|" << "                \t" << "|" << "                \t" << "|" << "      \t" << "|         " << "|" << endl;
					cout << "________________|_______________________|_______________________|_______|_________|" << endl;

				}
			}
				
			else if (menuoption == '4')
			{
				cout << "___________________________________________________________________________________" << endl;
				cout << "Roll Number\t" << "|" << "MidTerm(50 marks)\t" << "|" << "Final(100 marks)\t" << "|" << "Class\t" << "|" << "Grade" << "    |" << endl;
				cout << "         \t" << "|" << "                     \t" << "|" << "               \t" << "|" << "   \t" << "|" << "         |" << endl;
				cout << "________________|_______________________|_______________________|_______|_________|" << endl;
				for (int i = 0; i < fillsize - 1; i++)
				{
					for (int j = i + 1; j < fillsize; j++)
					{
						if (FinalMarks[i] < FinalMarks[j])
						{
							floatTemp = MidtermMarks[i];
							MidtermMarks[i] = MidtermMarks[j];
							MidtermMarks[j] = floatTemp;

							floatTemp = FinalMarks[i];
							FinalMarks[i] = FinalMarks[j];
							FinalMarks[j] = floatTemp;

							charTemp = Grades[i];
							Grades[j] = Grades[i];
							Grades[i] = charTemp;

							intTemp = RollNumber[i];
							RollNumber[i] = RollNumber[j];
							RollNumber[j] = intTemp;

							intTemp = ClassNo[i];
							ClassNo[i] = ClassNo[j];
							ClassNo[j] = intTemp;

						}
					}
				}

				for (int i = 0; i <fillsize; i++){

					cout << RollNumber[i] << "\t\t" << "|" << MidtermMarks[i] << "\t\t\t|" << FinalMarks[i] << "\t\t        |" << ClassNo[i] << " \t|" << Grades[i] << "        |" << endl;
					cout << "         \t" << "|" << "                \t" << "|" << "                \t" << "|" << "      \t" << "|         " << "|" << endl;
					cout << "________________|_______________________|_______________________|_______|_________|" << endl;

				}
			}
			else if (menuoption == '5')
			{
				cout << "___________________________________________________________________________________" << endl;
				cout << "Roll Number\t" << "|" << "MidTerm(50 marks)\t" << "|" << "Final(100 marks)\t" << "|" << "Class\t" << "|" << "Grade" << "    |" << endl;
				cout << "         \t" << "|" << "                     \t" << "|" << "               \t" << "|" << "   \t" << "|" << "         |" << endl;
				cout << "________________|_______________________|_______________________|_______|_________|" << endl;
				for (int i = 0; i < fillsize - 1; i++)
				{
					for (int j = i + 1; j < fillsize; j++)
					{
						if (Grades[i] >Grades[j])
						{
							intTemp = RollNumber[i];
							RollNumber[i] = RollNumber[j];
							RollNumber[j] = intTemp;

							floatTemp = MidtermMarks[i];
							MidtermMarks[i] = MidtermMarks[j];
							MidtermMarks[j] = floatTemp;

							floatTemp = FinalMarks[i];
							FinalMarks[i] = FinalMarks[j];
							FinalMarks[j] = floatTemp;

							intTemp = ClassNo[i];
							ClassNo[i] = ClassNo[j];
							ClassNo[j] = intTemp;

							charTemp = Grades[i];
							Grades[i] = Grades[j];
							Grades[j] = charTemp;

						}
					}
				}

				for (int i = 0; i < fillsize; i++)
				{

					cout << RollNumber[i] << "\t\t" << "|" << MidtermMarks[i] << "\t\t\t|" << FinalMarks[i] << "\t\t        |" << ClassNo[i] << " \t|" << Grades[i] << "        |" << endl;
					cout << "         \t" << "|" << "                \t" << "|" << "                \t" << "|" << "      \t" << "|         " << "|" << endl;
					cout << "________________|_______________________|_______________________|_______|_________|" << endl;
				}

			}
			else if (menuoption == '6')
			{
				cout << "___________________________________________________________________________________" << endl;
				cout << "Roll Number\t" << "|" << "MidTerm(50 marks)\t" << "|" << "Final(100 marks)\t" << "|" << "Class\t" << "|" << "Grade" << "    |" << endl;
				cout << "         \t" << "|" << "                     \t" << "|" << "               \t" << "|" << "   \t" << "|" << "         |" << endl;
				cout << "________________|_______________________|_______________________|_______|_________|" << endl;
				for (int i = 0; i < fillsize - 1; i++)
				{
					for (int j = i + 1; j < fillsize; j++)
					{
						if (Grades[i] <Grades[j])
						{
							intTemp = RollNumber[i];
							RollNumber[i] = RollNumber[j];
							RollNumber[j] = intTemp;

							floatTemp = MidtermMarks[i];
							MidtermMarks[i] = MidtermMarks[j];
							MidtermMarks[j] = floatTemp;

							floatTemp = FinalMarks[i];
							FinalMarks[i] = FinalMarks[j];
							FinalMarks[j] = floatTemp;

							intTemp = ClassNo[i];
							ClassNo[i] = ClassNo[j];
							ClassNo[j] = intTemp;

							charTemp = Grades[i];
							Grades[i] = Grades[j];
							Grades[j] = charTemp;

						}
					}
				}

				for (int i = 0; i < fillsize; i++)
				{

					cout << RollNumber[i] << "\t\t" << "|" << MidtermMarks[i] << "\t\t\t|" << FinalMarks[i] << "\t\t        |" << ClassNo[i] << " \t|" << Grades[i] << "        |" << endl;
					cout << "         \t" << "|" << "                \t" << "|" << "                \t" << "|" << "      \t" << "|         " << "|" << endl;
					cout << "________________|_______________________|_______________________|_______|_________|" << endl;

				}

			}
			if (menuoption == '7')
			{
				if (fillsize >= 10)
				{
					cout << "Delete data before adding new entry";
					continue;
				}
				cout << "Enter Roll No of  student ";
				cin >> RollNumber[fillsize];
				for (int i = 0; i < fillsize; i++)
				{
					while (RollNumber[fillsize] == RollNumber[i])
					{
						cout << "Roll No already exist " << endl;
						cout << "Enter new Roll No : ";
						cin >> RollNumber[fillsize];
					}
				}
				cout << "Enter Midterm Marks : ";
				cin >> MidtermMarks[fillsize];

				cout << "Enter Final Term Marks : ";
				cin >> FinalMarks[fillsize];

				cout << "Enter Class No : ";
				cin >> ClassNo[fillsize];

				if (FinalMarks[fillsize] >= 86) Grades[fillsize] = 'A';
				else if (FinalMarks[fillsize] >= 73 && FinalMarks[fillsize] < 86)Grades[fillsize] = 'B';
				else if (FinalMarks[fillsize] >= 60 && FinalMarks[fillsize] < 73)Grades[fillsize] = 'C';
				else if (FinalMarks[fillsize] >= 50 && FinalMarks[fillsize] < 60)Grades[fillsize] = 'D';
				else Grades[fillsize] = 'F';

				fillsize++;

			}
			else if (menuoption == '8')
			{
				if (fillsize <= 0)
				{
					cout << "No enteries found , please enter new enteries for deletion";
					continue;
				}
				int deleteinput = 0;
				bool isfound = false;

				cout << "Enter the roll number you wanted to delete : ";
				cin >> deleteinput;

				for (int i = 0; i < fillsize; i++)
				{
					if (deleteinput == RollNumber[i])
					{
						isfound = true;
						for (int j = i + 1; j < fillsize; j++)
						{
							MidtermMarks[i] = MidtermMarks[j];
							FinalMarks[i] = FinalMarks[j];
							ClassNo[i] = ClassNo[j];
							Grades[i] = Grades[j];
						}
						fillsize--;
						cout << "Roll No deleted " << endl;
					}
				}
				if (isfound == false) cout << "Roll No not found " << endl;
				
			}

			
			else if (menuoption == 'e' || menuoption == 'E')
				break;

		}


	



	system("pause");
	return 0;
}