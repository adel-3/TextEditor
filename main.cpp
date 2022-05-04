#include<iostream>
#include<bits/stdc++.h>

#include<fstream>
#include<string>
using namespace std;
void tolowercase(string& word ){
for(int i=0;i<word.size();i++)
    word[i]=tolower(word[i]);
}
void touppercase(string& word ){
for(int i=0;i<word.size();i++)
    word[i]=toupper(word[i]);
}

void load_file(fstream& filemodified, string& file_name)
{
    cout << "please enter the file name to deal with" << endl;
    getline(cin, file_name);
    //to check if the name of function ends by .txt or not.

    if (file_name.size() < 4) {
        file_name += ".txt";
    }
    else {
        if (file_name.substr(file_name.size() - 4, file_name.size() - 1) != ".txt") {
            file_name += ".txt";
        }
    }
    //to test if the name of file exist or not.
    filemodified.open(file_name);
    //if the name of file doesn't exist then will create a file in the same folder of main and stored in filecreated.
    if (filemodified.fail()) {

        filemodified.open(file_name, ios::out);
        filemodified.close();
        cout << "This is a new file. I created it for you\n";
    }
    else {
        //if the file name exists then will store it in filecreated
        cout << "This File Already Exists\n";
        filemodified.close();
    }
}
//-----------------------------------------------------------------------------------------------------------------------------------
void count_word_reptition(fstream& file, string file_name){

file.open(file_name,ios::in);  int counter=0;   string line,wordsearch,word;
                cout<<"Enter the word you want to count :";
                cin>>wordsearch;  tolowercase(wordsearch);
                //transform(wordsearch.begin(),wordsearch.end(),wordsearch.begin(),::tolower);
     while(getline(file, line)){
        istringstream iss;
        iss.str(line);
        while(iss.good()){
            iss>>word; tolowercase(word);
            //transform(word.begin(),word.end(),word.begin(),::tolower);
            if (word == wordsearch){
                counter ++;
            }
        }
     }
     file.close();
            cout<<"The word "<<"\""<<wordsearch<<"\""<<" was found "<<counter<<" times in the file.\n\n\n";
            cout<<"---------------------------------------------------------------------------------";

}

void turn_uppercase(fstream& file, string file_name){
    file.open(file_name,ios::in );  string content, line;
    while(getline(file, line)){
         content+=line + "\n";

        }
        file.close();
        touppercase(content);
        file.open(file_name, ios::out);
        file<<content;
        file.close();


            cout<<"the file has changed to uppercase letter\n\n\n";
cout<<"---------------------------------------------------------------------------------------";

     }

int main()
{
fstream filemodified; string file_name;
load_file(filemodified, file_name);
     string operation;
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
        cout <<"15- Save\n"<< "0- Exit" << endl;
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

            count_word_reptition(filemodified, file_name);

        }
        else if (operation == "12")
        {
            turn_uppercase(filemodified, file_name);

        }
        else if (operation == "13")
        {
            turn_lowercase(filemodified, file_name);

        }
        else if (operation == "14")
        {

        }
        else if (operation == "15")
        {

        }
        else if (operation == "0")
        {
            break;
        }


}
}

