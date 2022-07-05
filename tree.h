#include <iostream>
#include <vector>
using namespace std;



struct var{
  string name;
  string type;
  int isArray;
  int size;
  vector<int> values;
};

struct func{
  string name;
  string type;
  vector<string> arguments;
};

struct expression{
  string type;
  int value;
};

struct loc{
  string type;
  int *value;
};