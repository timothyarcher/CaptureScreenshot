// CaptureScreenshot.cpp : This code is a C++ code that captures the screen and saves it as a JPEG file. 
// The code uses the Windows API to capture the screen and GDI+ to save the image as a JPEG file. 
// The code first gets the desktop device context and creates a device context to use itself. 
// Then it creates a bitmap with the same size as the screen and selects it into the device context. 
// It then copies from the desktop device context to the bitmap device context using BitBlt function. 
// After that, it creates a CImage object and attaches it to the HBITMAP object. 
// Finally, it saves the image as a JPEG file and deletes the bitmap used to capture frames.
// The software saves the JPEG to the Windows temp folder and returns a path so that it can be used for
// further processing.
//

#include <iostream>
#include "Screenshot.h"

int main()
{
    CScreenshot ScreenShotter;
    wchar_t* szwFilename = (wchar_t*)ScreenShotter.CaptureScreen();
    std::wcout << L"Screenshot saved at path " << szwFilename << L"\n";
    free(szwFilename);
}
