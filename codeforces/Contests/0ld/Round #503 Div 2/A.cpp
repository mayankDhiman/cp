// CodeSlayer612
// 612


using namespace std;
#include <bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define debug(x) cout << (#x) <<  " is " << (x) << endl
#define SPEED ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
#define f()
int main()
{
   ll n,h,a,b,k; cin >> n >> h >> a >> b >> k;
   for (ll K = 0; K < k; K ++)
   {
   		ll ta,fa,tb,fb; cin >> ta >> fa >> tb >> fb;
   		ll xa, xb, xc;
   		ll fa1;
   		xb = abs(tb - ta);
   		if ((fa >= a && fa <= b) || (ta == tb))
   		{
   			xa = 0;
   			fa1 = fa;	
   		}
   		else
   		{
   			xa = min(abs(a - fa), abs(b - fa));
   			if (abs(a - fa) < abs(b - fa))
   				fa1 = a;
   			else
   				fa1 = b;
   		}
   		xc = abs(fa1 - fb);

   		cout << xa + xb + xc << "\n";
   }
   return 0;
}