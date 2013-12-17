#include "stack.h"
#include <vector>
#include <string>
#include <iostream>
#include <sstream>

std::string flt2strn(float flt){
  std::ostringstream ss;
  ss<< flt;
  std::string s(ss.str());
  return s;
}

Stack::Stack() {

}

void Stack::push(float flt) {
 this->objs.push_back(flt);
}

float Stack::pop() {
  float flt = objs.back();
  objs.pop_back();
  return flt;
}

float Stack::peak() {
  return objs.back();
}

string Stack::getBack() {
  vector<float> back;
  int len;
  int size = objs.size();
  if(size<4) {
    len = size;
  }
  else {
    len = 4;
  }
  
  for(int x=0;x<len;x++){
    back.push_back(objs.back());
    objs.pop_back();
  }
 
  string str ="";
  for(int x=len-1;x>=0;x--){
    str+=flt2strn(back[x]);
    str+="  |  ";
  }

  for(int x=0;x<len;x++){
    objs.push_back(back.back());
    back.pop_back();
  }
  return str;
}

void Stack::clear() {
  objs.clear();
}
