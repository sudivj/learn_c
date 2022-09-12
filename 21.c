#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
   const int    N      = 12;
   const int    SIZE   = 21;
   const char * SYMBOL = "123456789ABC";
   const double PI     = 4 * atan( 1.0 );

   double dtheta = 2.0 * PI / N;
   vector<string> grid( SIZE, string( SIZE, ' ' ) );

   for ( int t = 0; t < N; t++ )
   {
      double theta = PI - ( t + 1 ) * dtheta;
      int i = 0.5 * ( 1 + cos( theta ) ) * ( SIZE - 1 ) + 0.5;
      int j = 0.5 * ( 1 + sin( theta ) ) * ( SIZE - 1 ) + 0.5;
      grid[i][j] = SYMBOL[t];
   }

   for ( string s : grid ) cout << s << '\n';
}