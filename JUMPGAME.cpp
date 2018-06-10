#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

//메모이제이션

int n;
int board[100][100];
int cache[100][100];
/*
bool jump(int y, int x) {
	if(y >= n || x >= n)
		return false;

	if( y == n-1 && x == n-1)
		return true;
	
	return jump(y + board[y][x], x) || jump(y, x + board[y][x]);


}
*/

bool jump(int y, int x) {
	if(y >= n || x >= n)
		return false;

	if( y == n-1 && x == n-1)
		return true;

	if(cache[y][x] != -1) return cache[y][x];
	
	return cache[y][x] = jump(y + board[y][x], x) || jump(y, x + board[y][x]);
	
	/* 
	int& ret = cache[y][x];

	if(ret != -1) return ret;

	return ret = jump(y + board[y][x], x) || jump(y, x + board[y][x]);
	*/


}

int main() {

	int C;
	
	ios_base::sync_with_stdio(false);

	cin >> C;

	for(int test = 0; test < C; test++) {
		memset(cache, -1, sizeof(cache));

		cin >> n;


		for(int i = 0 ; i < n ; i++) {
			for(int j = 0; j < n ; j++)
				cin >> board[i][j];
		}

		if(jump(0,0))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	getchar();
	getchar();

	return 0;
}

