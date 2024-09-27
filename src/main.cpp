#include "app/app.hpp"

DWORD WINAPI MainThread(LPVOID lpParam) {
    while (!GetModuleHandleA("vscript.dll"))
        Sleep(500);

    App->Run();

    while (!GetAsyncKeyState(VK_F11))
        Sleep(500);

    App->Shutdown();

    FreeLibraryAndExitThread(static_cast<HINSTANCE>(lpParam), EXIT_SUCCESS);

    return 0;
}


BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved) {
    if (fdwReason == DLL_PROCESS_ATTACH) {
        if (auto hMainThread = CreateThread(0, 0, MainThread, hinstDLL, 0, 0)) {
            CloseHandle(hMainThread);
        }

    }
    return TRUE;
}
