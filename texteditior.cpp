#include<iostream>
#include<bits/stdc++.h>

#include<fstream>
#include<string>
#include"texteditorheader.h"
using namespace std;
 string sourcedata, line;


 void add_newtext()
{

   cout<<"enter name of file :";
     string name;
     cin>>name;
    string text;
    cout<<"Add new text : "<<endl;
    cin.ignore();
    getline(cin, text);
    ofstream myfile; // write
    myfile.open(name,ios::app);
    myfile<<text<<endl;
    myfile.close();
}
 void Display_the_content()
{

   char fname[100];
     char line[100];
     cout<<"Enter filename: ";
     cin>>fname;
     ifstream fin;
     fin.open(fname,ios::in);
     if(!fin){

         cout<<"file does not exist\n";
     }
     else
     {
         cout<<"contents of"<<fname<<"file..\n";
         while(fin.eof()==0){
             fin.getline(line,sizeof(line));
             cout<<line<<"\n";
         }
     }

     fin.close();


}

void Empty_file()
{
    cout<<"enter name of file :";
     string name;
     cin>>name;
    ofstream myfile; // write
    myfile.open(name,ios::trunc);
    myfile<<" ";
    myfile.close();

}

void Encrypt_file_content ()
{

    char c;
    string myFile;
    ifstream inputFile;
    cout << "please enter file name: ";
    cin >> myFile;
    inputFile.open(myFile.c_str(), ios::binary);
    ofstream outFile;
    inputFile.get(c);
    outFile.open(myFile.c_str(), ios::binary);
    while (inputFile)
    {
        int temp = (c + 1);
        char ch = char(temp);
        outFile << ch;
        inputFile.get(c);
    }
    outFile.close();
}

void decryptfile ()
{

    char b;
    string myFile;
    ifstream inputFile;
    cout << "please enter file name: ";
    cin >> myFile;
    inputFile.open(myFile.c_str(), ios::binary);
    ofstream outFile;
    inputFile.get(b);
    outFile.open(myFile.c_str(), ios::binary);
    while (inputFile)
    {
        int temp = (b - 1);
        char ch = char(temp);
        outFile << ch;
        inputFile.get(b);
    }
    outFile.close();
}







void tolowercase(string& word ){
    for(int i=0;i<word.size();i++)
        word[i]=tolower(word[i]);
}
void touppercase(string& word ){
    for(int i=0;i<word.size();i++)
        word[i]=toupper(word[i]);
}
void tofirstupper(string& word , string& content){
    string word2=word;
    word2 = word.substr(1 , word.size());  tolowercase(word2);
    word = toupper(word[0]);  word += word2;
    content += word + " ";
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
        filemodified.open(file_name,ios::in );
        cout << "This File Already Exists\n";
        while(getline(filemodified, line)){
         sourcedata+=line + "\n";

        }

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
void turn_lowercase(fstream& file, string file_name){
    file.open(file_name,ios::in );  string content, line;
    while(getline(file, line)){
         content+=line + "\n";

        }
        file.close();
        tolowercase(content);
        file.open(file_name, ios::out);
        file<<content;
        file.close();


            cout<<"the file has changed to lowercase letter\n\n\n";
cout<<"---------------------------------------------------------------------------------------";

     }
void turn_first_caps(fstream& file, string file_name){
    file.open(file_name,ios::in );  string content, line,word;
    while(getline(file, line) ){
        istringstream iss;
        iss.str(line);
        while(iss.good()){
            iss>>word;
            tofirstupper(word, content);
        }
        content += "\n";
        }
        file.close();
        file.open(file_name, ios::out);
        file<<content;
        file.close();
            cout<<"the file has been updated after edit\n\n\n";
cout<<"---------------------------------------------------------------------------------------";

     }
void save(fstream& file,fstream& filemodified, string file_name){
     string content, line;
    file.open(file_name, ios::in);
        while(getline(file, line)){
         content+=line + "\n";
         }file.close();

    char opr;  fstream savefile;
    cout<<"are you want to save the content in the same file or in another file?\n"<<"to save in the same file enter \" s \"to save in another file enter \" a \" :";
    cin >>opr;
    if (opr=='s'){

        cout<<"the file has been saved";
    }else if (opr == 'a'){
        string filename;
        cout<<"enter the name of the file :";
        cin>>filename;
        filename=filename+".txt";
        savefile.open(filename, ios::out);

        savefile<<content;
        file.close();
        filemodified.open(file_name, ios::out);
        filemodified<<sourcedata;

    }
cout<<"the file has been saved successfully\n\n\n";
cout<<"---------------------------------------------------------------------------------------";

}
