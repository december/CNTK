//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.md file in the project root for full license information.
//
// EvalWrapperAssemblyInfo.cpp -- Provides Strong Name for EvalWrapper assembly.
// 
// Note that the key pair (including secret key) is stored in the same folder as this source file.
// The Strong Name serves for identity puposes and for the applications that require it.
// The Strong Name does NOT enable trust scenario. Use the compiled and Authenticode signed dll version of this assembly
// provided with the CNTK NuGet package if you need trust. See CNTK Releases web page for NuGet package name and location:
// https://github.com/Microsoft/CNTK/releases
//

#include "stdafx.h"

using namespace System;
using namespace System::Reflection;

[assembly:AssemblyKeyFile("EvalWrapperKeyPair.snk")];