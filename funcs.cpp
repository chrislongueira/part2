/*
Author: Christopher Longueira
Course: CSCI-136
Instructor: Professor Mike Zamansky
Assignment: Lab 8
*/

#include <iostream>
#include <cctype>
using namespace std;

string removeLeadingSpaces(string line){
  string result = "";
  for (int i = 0; i < line.size(); i++){
    if (!isspace(line[i])){
      result += line.substr(i);
    }
  }
  return result;
}

int countChar(string line, char c){
  int result = 0;
  for (int i = 0; i < line.size(); i++){
    char pre = (char) line[i];
    if (curr == c){
      result += 1;
    }
  }
  return result;
}

string unindent(string line){
  return removeLeadingSpaces(line);

}

string indent(){
  string line;
  string result = "";
  int count = 0;
  while (getline(cin,line)){
    line = unindent(line);
    count -= countChar(line, '}');
    for (int i = 0; i < count; i++){
      result += '\t';
    }
    result += line + "\n";
    count += countChar(line, '{');
  }
  return result;
}
