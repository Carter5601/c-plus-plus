#include <iostream>
using namespace std;

int main() {
   char triangleChar = ' ';
   int triangleHeight = 0;

   cout << "Enter a character: " << endl;
   cin >> triangleChar;

   cout << "Enter triangle height: " << endl;
   cin >> triangleHeight;

   while (triangleHeight == 3) {
   cout <<triangleChar << " " << endl;
   cout << triangleChar << " " <<triangleChar << " " << endl;
   cout << triangleChar << " " << triangleChar << " " << triangleChar << " " << endl;
   break;
      while (triangleHeight == 4) {
      cout << triangleChar << " " << triangleChar << " " << triangleChar << " " << triangleChar << " " << endl;
   }
}
   return 0;
}