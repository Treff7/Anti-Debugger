#include <iostream>
#include <Windows.h>

int main()
{
    BOOL bDebugger = 0;
    CheckRemoteDebuggerPresent(GetCurrentProcess(), &bDebugger);
    if (bDebugger)
    {
        // if debugger was detected by the code above, code in this brace will be executed.
        ExitProcess(0);

    }
    std::cout << "";


    return 0;
}
