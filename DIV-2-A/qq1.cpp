#include<bits/stdc++.h>
using namespace std;

long func (int n, int m, vector <int> h, vector <int> v) {

	/*

	The trick is to find the length of maximum gaps horizontally and vertically

	and multiply it to get the area.

	*/

	vector <bool> x(n+1, 1);

	vector <bool> y(m+1, 1);

	int cx = 0,ox = INT_MIN, cy = 0, oy = INT_MIN;

	for (int i = 0;i < h.size();i++){
		x[h[i]] = 0;  //x has 1 where there is a bar, 0 when the bar is removed
	}

	for (int i = 0;i < v.size();i++){
		y[v[i]] = 0;//y has 1 where there is a bar, 0 when the bar is removed
	}		

	for (int i = 1;i <= n;i++) {   //loop to find the maximum gap horizontally

		if (x[i]){
			cx = 0;
		}
		else {

			cx++;
			ox = max(ox, cx);

		}

	}	

	for (int i = 1;i <= m;i++) {//loop to find the maximum gap horizontally

		if (y[i]){
			
			cy = 0;
		
		}else {
			
			cy++;
			oy = max(oy, cy);
		}
	}

	return (ox+1) * (oy+1);

}