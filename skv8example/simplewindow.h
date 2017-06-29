#pragma once

#include <SkWindow.h>

class SimpleWindow 
	: public SkOSWindow 
{
public:
	SimpleWindow(void* hwnd, int argc, char** argv) :SkOSWindow(hwnd) {}
	virtual ~SimpleWindow() {}
};