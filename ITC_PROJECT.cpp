#include<iostream>
using namespace std;

int main()
{
	int const size = 100;
	int choice, temp1, itr, num, std = 0,
		rol[size] = { 87, 4, 18, 16, 55, 49, 10, 39, 2, 9, 13, 95, 72, 58, 21, 14, 38, 59, 93, 80, 64, 44, 22, 41, 32, 77, 92, 27, 8, 35 },
		classes[size] = { 2, 8, 3, 1, 5, 10, 7, 1, 7, 2, 8, 3, 10, 5, 4, 9, 8, 10, 4, 6, 2, 3, 4, 6, 7, 10, 5, 8, 3, 10 };
	float temp2,
		mids[size] = { 49, 23.5, 45, 23, 45.5, 42, 34, 45, 23, 40, 35, 30.5, 46, 37, 46, 45, 43, 42, 39, 21, 42, 19.5, 22, 18, 14, 36, 29, 48, 12, 14 },
		finals[size] = { 99, 87.5, 67, 56, 67, 45, 43, 45, 67.5, 87, 65, 78, 89, 72, 78, 79, 56.5, 45, 41, 21, 73, 45, 32, 23, 23.5, 47, 68, 97.5, 67, 82 };
	char grad[size], grade;

	for (int i = 0; rol[i] != 0; i++)
	{
		std++;
	}

	for (int i = 0; i < std; i++)
	{
		if (finals[i] < 50)
		{
			grad[i] = 'F';
		}
		else if (finals[i] >= 50 && finals[i] <= 59)
		{
			grad[i] = 'D';
		}
		else if (finals[i] >= 60 && finals[i] <= 72)
		{
			grad[i] = 'C';
		}
		else if (finals[i] >= 73 && finals[i] <= 85)
		{
			grad[i] = 'B';
		}
		else if (finals[i] >= 86)
		{
			grad[i] = 'A';
		}
	}

	cout << endl;
	cout << "               *****  *******   *****        ****   ****    ***   *******  *****   *****  *******" << endl;
	cout << "                 *       *     *             *   *  *   *  *   *     *     *      *          *   " << endl;
	cout << "                 *       *     *             ****   ****   *   *     *     ****   *          *   " << endl;
	cout << "                 *       *     *             *      * *    *   *     *     *      *          *   " << endl;
	cout << "               *****     *      *****        *      *  *    ***   * *      *****   *****     *   " << endl << endl;
	cout << "Task 1, 5, 8, 9, 10, 12, 14, 15, 17                             Task 2, 3, 4, 6, 7, 11, 13, 16, 18" << endl;
	cout << "Done By Roman Farooq-L1F20BSCS0338                              Done By Mohammad Showaiq Murtaza-L1F20BSCS0035" << endl << endl;
	cout << "*******************************************************************************************************************" << endl;
	cout << "*  Press 1  --> Display all records in Ascending order based on Roll Number.                                      *" << endl;
	cout << "*  Press 2  --> Display all records in Descending order based on Roll Number.                                     *" << endl;
	cout << "*  Press 3  --> Display all records in Ascending order based on marks in Midterm.                                 *" << endl;
	cout << "*  Press 4  --> Display all records in Descending order based on marks in Midterm.                                *" << endl;
	cout << "*  Press 5  --> Display all records in Ascending order based on marks in Finals.                                  *" << endl;
	cout << "*  Press 6  --> Display all records in Descending order based on marks in Finals.                                 *" << endl;
	cout << "*  Press 7  --> Display all records in Ascending order based on Grade.                                            *" << endl;
	cout << "*  Press 8  --> Display all records in Descending order based on Grade.                                           *" << endl;
	cout << "*  Press 9  --> Add a new entry of a student.                                                                     *" << endl;
	cout << "*  Press 10 --> Delete a student record based on his roll number.                                                 *" << endl;
	cout << "*  Press 11 --> Display all records in Descending order greater than ENTERD VALUE marks in final exam.            *" << endl;
	cout << "*  Press 12 --> Display all records in Ascending order greater than ENTERD VALUE marks in final exam.             *" << endl;
	cout << "*  Press 13 --> Display all records in Descending order less than or equal to ENTERED VALUE marks in final exam.  *" << endl;
	cout << "*  Press 14 --> Display all records in Ascending order less than or equal to ENTERED VALUE marks in final exam.   *" << endl;
	cout << "*  Press 15 --> Display all records in Descending order greater than ENTERED VALUE grade.                         *" << endl;
	cout << "*  Press 16 --> Display all records in Ascending order greater than ENTERED VALUE grade.                          *" << endl;
	cout << "*  Press 17 --> Display all records in Descending order less than or equal to ENTERED VALUE grade.                *" << endl;
	cout << "*  Press 18 --> Display all records in Ascending order less than or equal to ENTERED VALUE grade.                 *" << endl;
	cout << "*  Press 19 --> To Stop The Program                                                                               *" << endl;
	cout << "*******************************************************************************************************************" << endl;

	do
	{
		cout << endl << "Enter Choice : ";
		cin >> choice;

		while (choice < 1 || choice > 19)
		{
			cout << endl << "Invalid Input...\nEnter choices from 1 to 19  : ";
			cin >> choice;
		}

		itr = 0;

		cout << endl;

		if (choice == 1)
		{
			for (int i = 0; i < std; i++)
			{
				for (int j = i + 1; j < std; j++)
				{
					if (rol[i] > rol[j])
					{
						temp1 = rol[i];
						rol[i] = rol[j];
						rol[j] = temp1;

						temp1 = classes[i];
						classes[i] = classes[j];
						classes[j] = temp1;

						temp1 = grad[i];
						grad[i] = grad[j];
						grad[j] = temp1;

						temp2 = mids[i];
						mids[i] = mids[j];
						mids[j] = temp2;

						temp2 = finals[i];
						finals[i] = finals[j];
						finals[j] = temp2;
					}
				}
			}
			cout << "\t\t\t*********************************" << endl;
			cout << "\t\t\t*  ROLL NUMBER Ascending order  * " << endl;
			cout << "\t\t\t*********************************" << endl << endl;
			cout << "--------------------------------------------------------------------------------- " << endl;
			cout << "|    ROLL NO.   | MIDTERM MARKS |  FINALS MARKS |     CLASS     |     GRADE     |" << endl;
			cout << "|               |  (OUT OF 50)  |  (OUT OF 100) |               |               |" << endl;
			cout << "---------------------------------------------------------------------------------" << endl;
			for (int i = 0; i < std; i++)
			{
				cout << "|\t" << rol[i] << "\t|\t" << mids[i] << "\t|\t" << finals[i] << "\t|\t" << classes[i] << "\t|\t" << grad[i] << "\t|" << endl;
			}
			cout << "---------------------------------------------------------------------------------" << endl;
		}
		else if (choice == 2)
		{
			for (int i = 0; i < std; i++)
			{
				for (int j = i + 1; j < std; j++)
				{
					if (rol[i] < rol[j])
					{
						temp1 = rol[i];
						rol[i] = rol[j];
						rol[j] = temp1;

						temp1 = classes[i];
						classes[i] = classes[j];
						classes[j] = temp1;

						temp1 = grad[i];
						grad[i] = grad[j];
						grad[j] = temp1;

						temp2 = mids[i];
						mids[i] = mids[j];
						mids[j] = temp2;

						temp2 = finals[i];
						finals[i] = finals[j];
						finals[j] = temp2;
					}
				}
			}
			cout << "\t\t\t********************************" << endl;
			cout << "\t\t\t* ROLL NUMBER Descending order * " << endl;
			cout << "\t\t\t********************************" << endl << endl;
			cout << "--------------------------------------------------------------------------------- " << endl;
			cout << "|    ROLL NO.   | MIDTERM MARKS |  FINALS MARKS |     CLASS     |     GRADE     |" << endl;
			cout << "|               |  (OUT OF 50)  |  (OUT OF 100) |               |               |" << endl;
			cout << "---------------------------------------------------------------------------------" << endl;
			for (int i = 0; i < std; i++)
			{
				cout << "|\t" << rol[i] << "\t|\t" << mids[i] << "\t|\t" << finals[i] << "\t|\t" << classes[i] << "\t|\t" << grad[i] << "\t|" << endl;
			}
			cout << "---------------------------------------------------------------------------------" << endl;
		}
		else if (choice == 3)
		{
			for (int i = 0; i < std; i++)
			{
				for (int j = i + 1; j < std; j++)
				{
					if (mids[i] > mids[j])
					{
						temp2 = mids[i];
						mids[i] = mids[j];
						mids[j] = temp2;

						temp2 = finals[i];
						finals[i] = finals[j];
						finals[j] = temp2;

						temp1 = rol[i];
						rol[i] = rol[j];
						rol[j] = temp1;

						temp1 = classes[i];
						classes[i] = classes[j];
						classes[j] = temp1;

						temp1 = grad[i];
						grad[i] = grad[j];
						grad[j] = temp1;
					}
				}
			}
			cout << "\t\t\t*********************************" << endl;
			cout << "\t\t\t* MIDTERM MARKS Ascending order * " << endl;
			cout << "\t\t\t*********************************" << endl << endl;
			cout << "--------------------------------------------------------------------------------- " << endl;
			cout << "|    ROLL NO.   | MIDTERM MARKS |  FINALS MARKS |     CLASS     |     GRADE     |" << endl;
			cout << "|               |  (OUT OF 50)  |  (OUT OF 100) |               |               |" << endl;
			cout << "---------------------------------------------------------------------------------" << endl;
			for (int i = 0; i < std; i++)
			{
				cout << "|\t" << rol[i] << "\t|\t" << mids[i] << "\t|\t" << finals[i] << "\t|\t" << classes[i] << "\t|\t" << grad[i] << "\t|" << endl;
			}
			cout << "---------------------------------------------------------------------------------" << endl;
		}
		else if (choice == 4)
		{
			for (int i = 0; i < std; i++)
			{
				for (int j = i + 1; j < std; j++)
				{
					if (mids[i] < mids[j])
					{
						temp2 = mids[i];
						mids[i] = mids[j];
						mids[j] = temp2;

						temp2 = finals[i];
						finals[i] = finals[j];
						finals[j] = temp2;

						temp1 = rol[i];
						rol[i] = rol[j];
						rol[j] = temp1;

						temp1 = classes[i];
						classes[i] = classes[j];
						classes[j] = temp1;

						temp1 = grad[i];
						grad[i] = grad[j];
						grad[j] = temp1;
					}
				}
			}
			cout << "\t\t\t**********************************" << endl;
			cout << "\t\t\t* MIDTERM MARKS Descending order * " << endl;
			cout << "\t\t\t**********************************" << endl << endl;
			cout << "--------------------------------------------------------------------------------- " << endl;
			cout << "|    ROLL NO.   | MIDTERM MARKS |  FINALS MARKS |     CLASS     |     GRADE     |" << endl;
			cout << "|               |  (OUT OF 50)  |  (OUT OF 100) |               |               |" << endl;
			cout << "---------------------------------------------------------------------------------" << endl;
			for (int i = 0; i < std; i++)
			{
				cout << "|\t" << rol[i] << "\t|\t" << mids[i] << "\t|\t" << finals[i] << "\t|\t" << classes[i] << "\t|\t" << grad[i] << "\t|" << endl;
			}
			cout << "---------------------------------------------------------------------------------" << endl;
		}
		else if (choice == 5 || choice == 8 || choice == 12 || choice == 14 || choice == 15 || choice == 17)
		{
			for (int i = 0; i < std; i++)
			{
				for (int j = i + 1; j < std; j++)
				{
					if (finals[i] > finals[j])
					{
						temp2 = mids[i];
						mids[i] = mids[j];
						mids[j] = temp2;

						temp2 = finals[i];
						finals[i] = finals[j];
						finals[j] = temp2;

						temp1 = rol[i];
						rol[i] = rol[j];
						rol[j] = temp1;

						temp1 = classes[i];
						classes[i] = classes[j];
						classes[j] = temp1;

						temp1 = grad[i];
						grad[i] = grad[j];
						grad[j] = temp1;
					}
				}
			}

			if (choice == 5)
			{
				cout << "\t\t\t********************************" << endl;
				cout << "\t\t\t* FINALS MARKS Ascending order * " << endl;
				cout << "\t\t\t********************************" << endl << endl;
			}
			else if (choice == 8)
			{
				cout << "\t\t\t*********************************" << endl;
				cout << "\t\t\t*    GRADES Descending order    * " << endl;
				cout << "\t\t\t*********************************" << endl << endl;
			}
			else if (choice == 12)
			{
				cout << "\t*****************************************************************" << endl;
				cout << "\t*   FINALS MARKS Greater Than Entered Vlaue (Ascending order)   *" << endl;
				cout << "\t*****************************************************************" << endl << endl;

				cout << "Enter Number : ";
				cin >> num;

				while (num < 0 || num > 100)
				{
					cout << endl << "Invalid Input...\nEnter Number from 0 to 100  : ";
					cin >> num;
				}

				for (int i = 0; i < std; i++)
				{
					if (finals[i] > num)
					{
						itr++;
					}
				}
			}
			else if (choice == 14)
			{
				cout << "\t**********************************************************************" << endl;
				cout << "\t* FINALS MARKS Less Than Or Equal to Entered Vlaue (Ascending order) *" << endl;
				cout << "\t**********************************************************************" << endl << endl;

				cout << "Enter Number : ";
				cin >> num;

				while (num < 0 || num > 100)
				{
					cout << endl << "Invalid Input...\nEnter Number from 0 to 100  : ";
					cin >> num;
				}

				for (int i = 0; i < std; i++)
				{
					if (finals[i] <= num)
					{
						itr++;
					}
				}
			}
			else if (choice == 15)
			{
				cout << "\t************************************************************" << endl;
				cout << "\t*   GRADES Greater Than Entered grade (Descending order)   *" << endl;
				cout << "\t************************************************************" << endl << endl;

				cout << "Enter Grade : ";
				cin >> grade;

				if (grade >= 'a' && grade <= 'f')
				{
					grade -= 32;
				}

				while (grade < 'A' || grade > 'F')
				{
					cout << endl << "Invalid Input...\nEnter Grade Again From A to F : ";
					cin >> grade;

					if (grade >= 'a' && grade <= 'f')
					{
						grade -= 32;
					}
				}

				for (int i = 0; i < std; i++)
				{
					if (grad[i] < grade)
					{
						itr++;
					}
				}
			}
			else if (choice == 17)
			{
				cout << "\t***********************************************************************" << endl;
				cout << "\t*    GRADES Less Than Or Equal to Entered grade (Descending order)    *" << endl;
				cout << "\t***********************************************************************" << endl << endl;

				cout << "Enter Grade : ";
				cin >> grade;

				if (grade >= 'a' && grade <= 'f')
				{
					grade -= 32;
				}

				while (grade < 'A' || grade > 'F')
				{
					cout << endl << "Invalid Input...\nEnter Grade Again From A to F : ";
					cin >> grade;

					if (grade >= 'a' && grade <= 'f')
					{
						grade -= 32;
					}
				}

				for (int i = 0; i < std; i++)
				{
					if (grad[i] >= grade)
					{
						itr++;
					}
				}
			}

			cout << "--------------------------------------------------------------------------------- " << endl;
			cout << "|    ROLL NO.   | MIDTERM MARKS |  FINALS MARKS |     CLASS     |     GRADE     |" << endl;
			cout << "|               |  (OUT OF 50)  |  (OUT OF 100) |               |               |" << endl;
			cout << "---------------------------------------------------------------------------------" << endl;

			if (choice == 5 || choice == 8)
			{
				for (int i = 0; i < std; i++)
				{
					cout << "|\t" << rol[i] << "\t|\t" << mids[i] << "\t|\t" << finals[i] << "\t|\t" << classes[i] << "\t|\t" << grad[i] << "\t|" << endl;
				}
			}
			else if (choice == 12 || choice == 15)
			{
				for (int i = std - itr; i < std; i++)
				{
					cout << "|\t" << rol[i] << "\t|\t" << mids[i] << "\t|\t" << finals[i] << "\t|\t" << classes[i] << "\t|\t" << grad[i] << "\t|" << endl;
				}
			}
			else if (choice == 14 || choice == 17)
			{
				for (int i = 0; i < itr; i++)
				{
					cout << "|\t" << rol[i] << "\t|\t" << mids[i] << "\t|\t" << finals[i] << "\t|\t" << classes[i] << "\t|\t" << grad[i] << "\t|" << endl;
				}
			}
			cout << "---------------------------------------------------------------------------------" << endl;
		}
		else if (choice == 6 || choice == 7 || choice == 11 || choice == 13 || choice == 16 || choice == 18)
		{
			for (int i = 0; i < std; i++)
			{
				for (int j = i + 1; j < std; j++)
				{
					if (finals[i] < finals[j])
					{
						temp2 = mids[i];
						mids[i] = mids[j];
						mids[j] = temp2;

						temp2 = finals[i];
						finals[i] = finals[j];
						finals[j] = temp2;

						temp1 = rol[i];
						rol[i] = rol[j];
						rol[j] = temp1;

						temp1 = classes[i];
						classes[i] = classes[j];
						classes[j] = temp1;

						temp1 = grad[i];
						grad[i] = grad[j];
						grad[j] = temp1;
					}
				}
			}

			if (choice == 6)
			{
				cout << "\t\t\t*********************************" << endl;
				cout << "\t\t\t* FINALS MARKS Descending order * " << endl;
				cout << "\t\t\t*********************************" << endl << endl;
			}
			else if (choice == 7)
			{
				cout << "\t\t\t********************************" << endl;
				cout << "\t\t\t*    GRADES Ascending order    * " << endl;
				cout << "\t\t\t********************************" << endl << endl;
			}
			else if (choice == 11)
			{
				cout << "\t******************************************************************" << endl;
				cout << "\t*   FINALS MARKS Greater Than Entered Vlaue (Descending order)   *" << endl;
				cout << "\t******************************************************************" << endl << endl;

				cout << "Enter Number : ";
				cin >> num;

				while (num < 0 || num > 100)
				{
					cout << endl << "Invalid Input...\nEnter Number from 0 to 100  : ";
					cin >> num;
				}

				for (int i = 0; i < std; i++)
				{
					if (finals[i] > num)
					{
						itr++;
					}
				}
			}
			else if (choice == 13)
			{
				cout << "\t***********************************************************************" << endl;
				cout << "\t* FINALS MARKS Less Than Or Equal to Entered Vlaue (Descending order) *" << endl;
				cout << "\t***********************************************************************" << endl << endl;

				cout << "Enter Number : ";
				cin >> num;

				while (num < 0 || num > 100)
				{
					cout << endl << "Invalid Input...\nEnter Number from 0 to 100  : ";
					cin >> num;
				}

				for (int i = 0; i < std; i++)
				{
					if (finals[i] <= num)
					{
						itr++;
					}
				}
			}
			else if (choice == 16)
			{
				cout << "\t***********************************************************" << endl;
				cout << "\t*   GRADES Greater Than Entered grade (Ascending order)   *" << endl;
				cout << "\t***********************************************************" << endl << endl;

				cout << "Enter Grade : ";
				cin >> grade;

				if (grade >= 'a' && grade <= 'f')
				{
					grade -= 32;
				}

				while (grade < 'A' || grade > 'F')
				{
					cout << endl << "Invalid Input...\nEnter Grade Again From A to F : ";
					cin >> grade;

					if (grade >= 'a' && grade <= 'f')
					{
						grade -= 32;
					}
				}

				for (int i = 0; i < std; i++)
				{
					if (grad[i] < grade)
					{
						itr++;
					}
				}
			}
			else if (choice == 18)
			{
				cout << "\t**********************************************************************" << endl;
				cout << "\t*    GRADES Less Than Or Equal to Entered grade (Ascending order)    *" << endl;
				cout << "\t**********************************************************************" << endl << endl;

				cout << "Enter Grade : ";
				cin >> grade;

				if (grade >= 'a' && grade <= 'f')
				{
					grade -= 32;
				}

				while (grade < 'A' || grade > 'F')
				{
					cout << endl << "Invalid Input...\nEnter Grade Again From A to F : ";
					cin >> grade;

					if (grade >= 'a' && grade <= 'f')
					{
						grade -= 32;
					}
				}

				for (int i = 0; i < std; i++)
				{
					if (grad[i] >= grade)
					{
						itr++;
					}
				}
			}

			cout << "--------------------------------------------------------------------------------- " << endl;
			cout << "|    ROLL NO.   | MIDTERM MARKS |  FINALS MARKS |     CLASS     |     GRADE     |" << endl;
			cout << "|               |  (OUT OF 50)  |  (OUT OF 100) |               |               |" << endl;
			cout << "---------------------------------------------------------------------------------" << endl;

			if (choice == 6 || choice == 7)
			{
				for (int i = 0; i < std; i++)
				{
					cout << "|\t" << rol[i] << "\t|\t" << mids[i] << "\t|\t" << finals[i] << "\t|\t" << classes[i] << "\t|\t" << grad[i] << "\t|" << endl;
				}
			}
			else if (choice == 11 || choice == 16)
			{
				for (int i = 0; i < itr; i++)
				{
					cout << "|\t" << rol[i] << "\t|\t" << mids[i] << "\t|\t" << finals[i] << "\t|\t" << classes[i] << "\t|\t" << grad[i] << "\t|" << endl;
				}
			}
			else if (choice == 13 || choice == 18)
			{
				for (int i = std - itr; i < std; i++)
				{
					cout << "|\t" << rol[i] << "\t|\t" << mids[i] << "\t|\t" << finals[i] << "\t|\t" << classes[i] << "\t|\t" << grad[i] << "\t|" << endl;
				}
			}

			cout << "---------------------------------------------------------------------------------" << endl;
		}
		else if (choice == 9)
		{
			bool complete = true;

			cout << "\t\t\t********************************" << endl;
			cout << "\t\t\t* Add a New Entry of a Student * " << endl;
			cout << "\t\t\t********************************" << endl << endl;

			for (int i = 0; i < size; i++)
			{
				if (rol[i] == 0)
				{
					complete = false;
					itr = i;

					cout << "Enter Roll Number of student: ";
					cin >> rol[i];

					for (int j = 0; j < itr; j++)
					{
						while (rol[i] == rol[j] || rol[i] == 0)
						{
							if (rol[i] == 0)
							{
								cout << endl << "Roll Number cannot be Zero, Please Enter Again : ";
							}
							else
							{
								cout << endl << "Roll Number is already there, Please Enter Again : ";
							}
							cin >> rol[i];
							j = 0;
						}
					}
					break;
				}
			}

			if (complete)
			{
				cout << "Array is Full" << endl;
			}
			else
			{
				cout << endl << "Enter Mids Marks : ";
				cin >> mids[itr];

				while (mids[itr] < 0 || mids[itr] > 50)
				{
					cout << endl << "Invalid Input...\nEnter Mids Number from 0 to 50  : ";
					cin >> mids[itr];
				}

				cout << endl << "Enter Finals Marks : ";
				cin >> finals[itr];

				while (finals[itr] < 0 || finals[itr] > 100)
				{
					cout << endl << "Invalid Input...\nEnter Finals Number from 0 to 100  : ";
					cin >> finals[itr];
				}

				cout << endl << "Enter Student Class : ";
				cin >> classes[itr];

				while (classes[itr] < 1 || classes[itr] > 10)
				{
					cout << endl << "Invalid Input...\nEnter Class from 1 to 10  : ";
					cin >> classes[itr];
				}

				if (finals[itr] < 50)
				{
					grad[itr] = 'F';
				}
				else if (finals[itr] >= 50 && finals[itr] <= 59)
				{
					grad[itr] = 'D';
				}
				else if (finals[itr] >= 60 && finals[itr] <= 72)
				{
					grad[itr] = 'C';
				}
				else if (finals[itr] >= 73 && finals[itr] <= 85)
				{
					grad[itr] = 'B';
				}
				else if (finals[itr] >= 86)
				{
					grad[itr] = 'A';
				}

				std++;

				cout << "--------------------------------------------------------------------------------- " << endl;
				cout << "|    ROLL NO.   | MIDTERM MARKS |  FINALS MARKS |     CLASS     |     GRADE     |" << endl;
				cout << "|               |  (OUT OF 50)  |  (OUT OF 100) |               |               |" << endl;
				cout << "---------------------------------------------------------------------------------" << endl;
				for (int i = 0; i < std; i++)
				{
					cout << "|\t" << rol[i] << "\t|\t" << mids[i] << "\t|\t" << finals[i] << "\t|\t" << classes[i] << "\t|\t" << grad[i] << "\t|" << endl;
				}
				cout << "---------------------------------------------------------------------------------" << endl;
			}
		}
		else if (choice == 10)
		{
			bool present = false;

			cout << "\t\t\t*******************************" << endl;
			cout << "\t\t\t*   Delete a Student Record   * " << endl;
			cout << "\t\t\t*******************************" << endl << endl;

			cout << "Enter Roll Number to delete the entry : ";
			cin >> num;

			do
			{
				for (int i = 0; i < std; i++)
				{
					if (num == rol[i])
					{
						itr = i;
						present = true;
						break;
					}
				}

				if (present)
				{
					for (int i = itr; i < std; i++)
					{
						rol[i] = rol[i + 1];

						mids[i] = mids[i + 1];

						finals[i] = finals[i + 1];

						classes[i] = classes[i + 1];

						grad[i] = grad[i + 1];
					}

					std--;

					cout << "--------------------------------------------------------------------------------- " << endl;
					cout << "|    ROLL NO.   | MIDTERM MARKS |  FINALS MARKS |     CLASS     |     GRADE     |" << endl;
					cout << "|               |  (OUT OF 50)  |  (OUT OF 100) |               |               |" << endl;
					cout << "---------------------------------------------------------------------------------" << endl;
					for (int i = 0; i < std; i++)
					{
						cout << "|\t" << rol[i] << "\t|\t" << mids[i] << "\t|\t" << finals[i] << "\t|\t" << classes[i] << "\t|\t" << grad[i] << "\t|" << endl;
					}
					cout << "---------------------------------------------------------------------------------" << endl;
				}
				else
				{
					cout << endl << "Roll Number is NOT there, Please Enter Again : ";
					cin >> num;
				}

			} while (present == false);

		}
		else if (choice == 19)
		{
			cout << endl;
			cout << "           *******  *     *      *      *     *  *   *        *       *   ***   *    *" << endl;
			cout << "              *     *     *     * *     * *   *  * *            *   *    *   *  *    *" << endl;
			cout << "              *     * * * *    *   *    *  *  *  **               *      *   *  *    *" << endl;
			cout << "              *     *     *   * * * *   *   * *  * *              *      *   *  *    *" << endl;
			cout << "              *     *     *  *       *  *     *  *   *            *       ***    **** " << endl << endl;
		}

	} while (choice != 19);

	return 0;
}