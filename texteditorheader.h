#ifndef TEXTEDITORHEADER_H_INCLUDED
#define TEXTEDITORHEADER_H_INCLUDED


#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
#include<string>
using namespace std;
void add_newtext();
void Display_the_content();
void Empty_file();
void Encrypt_file_content ();    
void decryptfile ();
void tolowercase(string& word );
void touppercase(string& word );
void tofirstupper(string& word , string& content);
void load_file(fstream& filemodified, string& file_name);
void count_word_reptition(fstream& file, string file_name);
void turn_uppercase(fstream& file, string file_name);
void turn_lowercase(fstream& file, string file_name);
void turn_first_caps(fstream& file, string file_name);
void save(fstream& file,fstream& filemodified ,string file_name);
void mergefiles(); 
void num_word();
void countchar();
void countline();  
void find_word();
#endif // TEXTEDITORHEADER_H_INCLUDED
