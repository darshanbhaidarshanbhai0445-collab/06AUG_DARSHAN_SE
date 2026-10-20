 /* 
    Add a feature to delete a content item by its number from the list, update the file accordingly, and display the updated list to confirm deletion.
 */
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class content
{
    string titleLine;
    string platformLine;
    string viewsLine;
    string statusLine;
    string formatLine;

    int choice;
    string title, platform, status;
    int views = 0;
    bool hasEntry = false;

public:

    void menu()
    {
      cout << "|============ Console Menu ==========|" << endl;
      cout << "| Press 1 for Add new content ideas  |" << endl;
      cout << "| Press 2 for view your content ideas|" << endl;
      cout << "| Press 3 for save entry in file     |" << endl;
      cout << "| Press 4 for read data from file    |" << endl;
      cout << "| Press 5 for update data            |" << endl;
      cout << "| Press 6 for Delete Specific Record |" << endl;        
      cout << "| Press 7 for log out                |" << endl;
      cout << "|============ ************ ==========|" << endl;
    }

    void CHOICE()
    {
        while (1)
        {
            cout << "What is your choice? ---> ";
            cin >> choice;

            cout << "-------------------------" << endl;

            switch (choice)
            {
                case 1:
                {
                    cout << "What's Your Title? ---> ";
                    cin >> title;

                    cout << "What's Your Platform? ---> ";
                    cin >> platform;

                    cout << "How many views? ---> ";
                    cin >> views;

                    cout << "What's Your Status? ---> ";
                    cin >> status;

                    hasEntry = true;

                    cout << "Content idea added!" << endl;
                    break;
                }

                case 2:
                {
                    if (!hasEntry)
                    {
                        cout << "No content idea entered yet."
                             << endl;
                        break;
                    }

                    cout << "Title: " << title << endl;
                    cout << "Platform: " << platform << endl;
                    cout << "Views: " << views << endl;
                    cout << "Status: " << status << endl;

                    break;
                }

                case 3:
                {
                    if (!hasEntry)
                    {
                        cout << "Add a content idea first."
                             << endl;
                        break;
                    }

                    ofstream file("Content_list.txt", ios::app);

                    if (!file)
                    {
                        cout << "Unable to open file." << endl;
                        break;
                    }

                    file << "Title:-   " << title << endl;
                    file << "Platform:-" << platform << endl;
                    file << "Views:-   " << views << endl;
                    file << "Status:-  " << status << endl;
                    file << "-------------------------" << endl;

                    file.close();

                    cout << "Data saved successfully!" << endl;
                    break;
                }

                case 4:
                {
                    ifstream file("Content_list.txt");

                    if (!file)
                    {
                        cout << "Unable to open file." << endl;
                        break;
                    }

                    int L = 1;

                    while (
                        getline(file, titleLine) &&
                        getline(file, platformLine) &&
                        getline(file, viewsLine) &&
                        getline(file, statusLine) &&
                        getline(file, formatLine))
                    {
                        cout << L << ". " << titleLine << endl;
                        cout << "   " << platformLine << endl;
                        cout << "   " << viewsLine << endl;
                        cout << "   " << statusLine << endl;
                        cout << "-------------------------" << endl;

                        L++;
                    }

                    if (L == 1)
                    {
                        cout << "No available data." << endl;
                    }

                    file.close();
                    break;
                }

               case 5:
               {
                  const int SIZE = 100;

                  string titles[SIZE];
                  string platforms[SIZE];
                  string viewCounts[SIZE];
                  string statuses[SIZE];
                  string formats[SIZE];

                  int count = 0;

                  // STEP 1: Read all records into arrays
                  ifstream file("Content_list.txt");

                  if (!file)
                  {
                     cout << "Unable to open file." << endl;
                     break;
                  }

                  while (
                     count < SIZE &&
                     getline(file, titles[count]) &&
                     getline(file, platforms[count]) &&
                     getline(file, viewCounts[count]) &&
                     getline(file, statuses[count]) &&
                     getline(file, formats[count]))
                  {
                     count++;
                  }

                  file.close();

                  if (count == 0)
                  {
                     cout << "No content ideas available."
                           << endl;
                     break;
                  }

                  // STEP 2: Display all records with numbers
                  cout << "\n===== Content Ideas =====" << endl;

                  for (int i = 0; i < count; i++)
                  {
                     cout << "\nContent Idea " << i + 1 << endl;
                     cout << titles[i] << endl;
                     cout << platforms[i] << endl;
                     cout << viewCounts[i] << endl;
                     cout << statuses[i] << endl;
                     cout << formats[i] << endl;
                  }

                  // STEP 3: Ask which status to update
                  int L_choice;

                  cout << "\nEnter the content idea number to update: ";
                  cin >> L_choice;

                  if (L_choice < 1 || L_choice > count)
                  {
                     cout << "Invalid content idea number."
                           << endl;
                     break;
                  }

                  // STEP 4: Enter the new status
                  string newStatus;

                  cout << "Enter new status: ";
                  cin >> newStatus;

                  // STEP 5: Update the selected array element
                  statuses[L_choice - 1] =
                     "Status:-  " + newStatus;

                  // STEP 6: Overwrite the file with all records
                  ofstream outFile("Content_list.txt");

                  if (!outFile)
                  {
                     cout << "Unable to write to file."
                           << endl;
                     break;
                  }

                  for (int i = 0; i < count; i++)
                  {
                     outFile << titles[i] << endl;
                     outFile << platforms[i] << endl;
                     outFile << viewCounts[i] << endl;
                     outFile << statuses[i] << endl;
                     outFile << formats[i] << endl;
                  }

                  outFile.close();

                  cout << "Status updated successfully!"
                        << endl;

                  break;
            }
                
            case 6:
            {
               string t[100], p[100], v[100], s[100], f[100];
               int count = 0;                  
               ifstream file("Content_list.txt");

               while (count < 100 &&
                     getline(file, t[count]) &&
                     getline(file, p[count]) &&
                     getline(file, v[count]) &&
                     getline(file, s[count]) &&
                     getline(file, f[count]))
                  {
                     count++;
                  }

                  file.close();

                  for (int i = 0; i < count; i++)
                  {
                     cout << i + 1 << ". " << t[i] << endl;
                  }

                  int num;
                  cout << "Enter idea number to delete: ";
                  cin >> num;

                  if (num < 1 || num > count)
                  {
                     cout << "Invalid number!" << endl;
                     break;
                  }

                  ofstream out("Content_list.txt");

                  for (int i = 0; i < count; i++)
                  {
                     if (i == num - 1)
                           continue;

                     out << t[i] << endl;
                     out << p[i] << endl;
                     out << v[i] << endl;
                     out << s[i] << endl;
                     out << f[i] << endl;
                  }

                  out.close();

                  cout << "Content deleted successfully!" << endl;
                  break;
                  }

                case 7:
                {
                    cout << "Exited! See you again." << endl;
                    break;
                }

                default:
                {
                    cout << "INVALID CHOICE!" << endl;
                    break;
                }
            }

            if (choice == 7)
            {
                break;
            }
        }
    }
};

int main()
{
    content c;

    c.menu();
    c.CHOICE();
    
    return 0;
}