#pragma once

#pragma comment(linker, "/STACK:268435456")

#define _CRT_SECURE_NO_WARNINGS

// C
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cassert>
// Containers
#include <string>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
// Streams
#include <iostream>
#include <sstream>
#include <iomanip>
#include <fstream>
// Other
#include <algorithm>
#include <functional>
#include <utility>
#include <memory>

//#include <boost/multiprecision/cpp_int.hpp>
//typedef boost::multiprecision::cpp_int ll;

typedef unsigned long long ull;
typedef long long ll;

using namespace std;

#include "../third_party/prettycc/pretty.hpp"
PRETTY_DEFAULT_DECORATION(std::vector<T>, "[", ", ", "]", class T)
PRETTY_DEFAULT_DECORATION(std::deque<T>, "[", ", ", "]", class T)
PRETTY_DEFAULT_DECORATION(std::set<T>, "{", ", ", "}", class T)
PRETTY_DEFAULT_DECORATION(std::unordered_set<T>, "{", ", ", "}", class T)
// TODO: Decorate maps.

#define PRINT(x) \
  cout << "  "#x": " << (x) << std::endl;
