#include<iostream>
#include<bits/stdc++.h>

#include<fstream>
#include<string>
using namespace std;
int main()
{
    int counter=0;
    char word[10];
    char name[100];
    string date;
    fstream datefile;
    cout<<"enter the name of the text :";
    cin>>name;
     datefile.open(name);
     char str[101];
     while(!datefile.eof()){
        datefile.getline(str , 100, '\n');
        date += str;
     }
     cout<<"Enter your word you want to count :";
     cin>>word;
     /*for (string i : date){
        if (i==word)
            counter+=1;
     }*/
     datefile.close();
}

