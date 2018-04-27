#include <iostream>
#include <list>
#include <string>

using namespace std;

string ss;
list<char> editor;
int n;

int main() {

	cin >> ss;

	for (int i = 0; i < ss.size(); i++)
		editor.push_back(ss[i]);

	cin >> n;

	list<char>::iterator cursor = editor.end();


	for (int i = 0; i < n; i++) {
		char operate;
		cin >> operate;

		if (operate == 'P') {
			char c;
			cin >> c;
			//editor.resize(editor.size()+1);
			editor.insert(cursor, c);
		}

		else if (operate == 'L') {
			if(cursor != editor.begin())
			--cursor;
		}
		else if (operate == 'D') {
			if(cursor != editor.end())
			++cursor;
		}
		else if (operate == 'B') {
			if (cursor != editor.begin())
				--cursor;
			else continue;
			cursor = editor.erase(cursor);
			//editor.remove(ss[cursor2]);
		}
		
	}

	for (list<char>::iterator it = editor.begin(); it != editor.end(); it++) 
		cout << *it;
	cout << endl;

	getchar();
	getchar();

	return 0;
}
