#include <iostream>

using namespace std;

int main()
{
   int h1,m1,s1,h2,m2,s2,o,p;
   cin >>h1 >> m1 >> s1;
   o=h1*3600+m1*60+s1;
   cin >> h2 >> m2 >> s2;
   p=h2*3600+m2*60+s2;

   if (o>p)
   {
       p+=24*60*60;
   }
   cout << p-o;
    return 0;
}
