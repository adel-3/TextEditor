#include<iostream>
#include<bits/stdc++.h>

#include<fstream>
#include<string>
#include"texteditorheader.h"
using namespace std;

int main()
{
fstream filemodified; string file_name;
load_file(filemodified, file_name);
     int operation;
    cout << "Hello user!" << endl;

    while (true)
    {
        cout << "\nWelcome to our Text Editior :)" << endl;



        cout << "\n1- Add new text to the end of the file\n" << "2- Display the content of the file\n" << "3- Empty the file\n" << "4- Encrypt the file content \n";
        cout << "5- Decrypt the file content\n" << "6- Merge another file\n" ;
        cout << "7- Count the number of words in the file.\n" << "8- Count the number of characters in the file\n";
        cout << "9- Count the number of lines in the file\n" << "10- Search for a word in the file\n" ;
        cout << "11- Count the number of times a word exists in the file\n" << "12- Turn the file content to upper case.\n";
        cout << "13- Turn the file content to lower case.\n"<<"14- Turn file content to 1st caps (1st char of each word is capital)\n";
        cout <<"15- Save\n"<< "16- Exit" << endl;
        cout << "Please select the number of edition you want to apply or 16 to exit : " ;
        // To choose which edition will be applied
        cin >> operation;
        if (operation == 1)
        {
            add_newtext(filemodified, file_name);
        }
        if (operation == 2)
        {
             Display_the_content(filemodified, file_name);
        }
        else if (operation == 3)
        {
            Empty_file(filemodified, file_name);

        }
        else if (operation == 4)
        {
             Encrypt_file_content (filemodified, file_name);
        }
        else if (operation == 5)
        {
               decryptfile (filemodified, file_name);
        }
       else if (operation == 6)
        {
            mergefiles(filemodified, file_name);
        }
        else if (operation == 7)
        {
            num_word(filemodified, file_name);
        }
        else if (operation == 8){
            countchar(filemodified, file_name);
            }
        else if (operation == 9)
        {
            countline(filemodified, file_name);
        }
        else if (operation == 10)
        {
             find_word(filemodified, file_name);
        }
        else if (operation == 11)
        {

            count_word_reptition(filemodified, file_name);

        }
        else if (operation == 12)
        {
            turn_uppercase(filemodified, file_name);

        }
        else if (operation == 13)
        {
            turn_lowercase(filemodified, file_name);

        }
        else if (operation == 14)
        {
            turn_first_caps(filemodified, file_name);

        }
        else if (operation == 15)
        {
            save(filemodified,filemodified, file_name);

        }
        else if (operation == 16)
        {
            cout<<"thanks for using our app :)";
            break;
        }


}
}

