#include<iostream>
#include<bits/stdc++.h>

#include<fstream>
#include<string>
using namespace std;
void count_word();
int main()
{


     string operation;
    cout << "Hello user!" << endl;

    while (true)
    {
        cout << "\nWelcome to our Text Editior :)" << endl;



        cout << "\n1- Add new text to the end of the file\n" << "2- Display the content of the file\n" << "3- Empty the file\n" << "4- Encrypt the file content \n";
        cout << "5- Decrypt the file content\n" << "6- Merge another file\n" << "7- Count the number of words in the file.\n" << "8- Count the number of characters in the file\n";
        cout << "9- Count the number of lines in the file\n" << "10- Search for a word in the file\n" << "11- Count the number of times a word exists in the file\n" << "12- Turn the file content to upper case.\n";
        cout << "13- Turn the file content to lower case.\n"<<"14- Turn file content to 1st caps (1st char of each word is capital)\n";
        cout <<"15- Save\n"<< "16- Exit" << endl;
        cout << "Please select the number of edition you want to apply or 16 to exit : " ;
        // To choose which edition will be applied
        cin >> operation;
        if (operation == "1")
        {

        }
        if (operation == "2")
        {

        }
        else if (operation == "3")
        {


        }
        else if (operation == "4")
        {

        }
        else if (operation == "5")
        {

        }
        else if (operation == "6")
        {

        }
        else if (operation == "7")
        {

        }
        else if (operation == "8"){

            }
        else if (operation == "9")
        {

        }
        else if (operation == "10")
        {

        }
        else if (operation == "11")
        {

        }
        else if (operation == "12")
        {

        }
        else if (operation == "13")
        {

        }
        else if (operation == "14")
        {

        }
        else if (operation == "15")
        {

        }
        else if (operation == "16")
        {
            break;
        }


}
}

void count_word(){
int counter=0;
    string word;
    char name[100];
    string date;
    fstream datefile;
    cout<<"enter the name of the text :";
    cin>>name;
     datefile.open(name);
     char str[101];
     cout<<"Enter your word you want to count :";
     cin>>word;
     while(!datefile.eof()){
        datefile.getline(str , 100, '\n');
        date += str;
/*        for (string i : date){
        if (i==word)
            counter+=1;
        datefile.close();*/
     }}
