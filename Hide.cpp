#include <stdio.h>
#include <windows.h>

int main(int argc, char* argv[]){
 	HWND hwnd=GetForegroundWindow(),
    hTaskBar=FindWindow("Shell_TrayWnd",NULL),
    hDeskIcon=FindWindow("Progman",NULL),
    hwndDesk=GetDesktopWindow();
    ShowWindow(hwnd,false);
    ShowWindow(hTaskBar,SW_HIDE);
    ShowWindow(hDeskIcon,SW_HIDE);
}

