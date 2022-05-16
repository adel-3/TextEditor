#ifndef TEXTEDITORHEADER_H_INCLUDED
#define TEXTEDITORHEADER_H_INCLUDED


#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
#include<string>
using namespace std;
void add_newtext(fstream& file, string file_name);
void Display_the_content(fstream& file, string file_name);
void Empty_file(fstream& file, string file_name);
void Encrypt_file_content (fstream& file, string file_name);
void decryptfile (fstream& file, string file_name);
void mergefiles(fstream& file, string file_name);
void num_word(fstream& file, string file_name);
void countchar(fstream& file, string file_name);
void countline(fstream& file, string file_name);
void find_word(fstream& file, string file_name);
void tolowercase(string& word );
void touppercase(string& word );
void tofirstupper(string& word , string& content);
void load_file(fstream& filemodified, string& file_name);
void count_word_reptition(fstream& file, string file_name);
void turn_uppercase(fstream& file, string file_name);
void turn_lowercase(fstream& file, string file_name);
void turn_first_caps(fstream& file, string file_name);
void save(fstream& file,fstream& filemodified ,string file_name);

#endif // TEXTEDITORHEADER_H_INCLUDED
