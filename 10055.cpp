//
//  10055.cpp
//  
//
//  Created by Mahfuz Ahmed on 11/21/18.
//

#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define br std::cout << std::endl;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	#if 0
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout)
	#endif
    
    lli x,y;
    
    while(cin >> x >> y){
        lli ans = abs(x-y);
        cout << ans;br;
    }


	return 0;
}
