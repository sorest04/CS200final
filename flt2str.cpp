#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

string flt2str(float flt){
  ostringstream ss;
  ss<< flt;
  string s(ss.str());
  return s;
}

int main(int argc, char *argv[]){
  vector<float> vec;
  vec.push_back(1.12);
  vec.push_back(2.3);
  vec.push_back(6.66);

  for(int i=0; i<3;i++){
    string str = flt2str(vec[i]);
    cout<<str<<endl;
  }






  return 0;
}
