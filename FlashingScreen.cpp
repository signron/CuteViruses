#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

int main(){
	while(SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM) 2));
}
