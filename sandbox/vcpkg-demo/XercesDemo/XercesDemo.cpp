// XercesDemo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <xercesc/util/PlatformUtils.hpp>

// Other include files, declarations, and non-Xerces-C++ initializations.
using namespace xercesc;

int main()
{
	try {
		XMLPlatformUtils::Initialize();
	}
	catch (const XMLException& toCatch) {
		// Do your failure processing here
		return 1;
	}

	// Do your actual work with Xerces-C++ here.

	XMLPlatformUtils::Terminate();

    return 0;
}

