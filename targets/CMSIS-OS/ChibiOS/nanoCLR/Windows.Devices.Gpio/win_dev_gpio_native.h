//
// Copyright (c) 2017 The nanoFramework project contributors
// Portions Copyright (c) Microsoft Corporation.  All rights reserved.
// See LICENSE file in the project root for full license information.
//


#ifndef _WIN_DEV_GPIO_NATIVE_H_
#define _WIN_DEV_GPIO_NATIVE_H_

#include <nanoCLR_Interop.h>
#include <nanoCLR_Runtime.h>
#include <nanoCLR_Checks.h>


struct Library_win_dev_gpio_native_Windows_Devices_Gpio_GpioChangeCount
{
    static const int FIELD__Count = 1;
    static const int FIELD__RelativeTime = 2;


    //--//

};

struct Library_win_dev_gpio_native_Windows_Devices_Gpio_GpioChangeCounter
{
    static const int FIELD___Polarity = 1;


    //--//

};

struct Library_win_dev_gpio_native_Windows_Devices_Gpio_GpioChangeReader
{
    static const int FIELD___capacity = 1;
    static const int FIELD___isOverflowed = 2;
    static const int FIELD___isStarted = 3;
    static const int FIELD___length = 4;
    static const int FIELD___polarity = 5;


    //--//

};

struct Library_win_dev_gpio_native_Windows_Devices_Gpio_GpioChangeRecord
{
    static const int FIELD__Edge = 1;
    static const int FIELD__RelativeTime = 2;


    //--//

};

struct Library_win_dev_gpio_native_Windows_Devices_Gpio_GpioController
{
    static const int FIELD_STATIC__s_instance = 0;

    NANOCLR_NATIVE_DECLARE(get_PinCount___I4);

    //--//

};

struct Library_win_dev_gpio_native_Windows_Devices_Gpio_GpioPin
{
    static const int FIELD_STATIC__s_eventListener = 1;

    static const int FIELD___syncLock = 1;
    static const int FIELD___pinNumber = 2;
    static const int FIELD___driveMode = 3;
    static const int FIELD___debounceTimeout = 4;
    static const int FIELD___callbacks = 5;
    static const int FIELD___disposedValue = 6;

    NANOCLR_NATIVE_DECLARE(Read___WindowsDevicesGpioGpioPinValue);
    NANOCLR_NATIVE_DECLARE(Write___VOID__WindowsDevicesGpioGpioPinValue);
    NANOCLR_NATIVE_DECLARE(DisposeNative___VOID);
    NANOCLR_NATIVE_DECLARE(NativeIsDriveModeSupported___BOOLEAN__WindowsDevicesGpioGpioPinDriveMode);
    NANOCLR_NATIVE_DECLARE(NativeSetDriveMode___VOID__WindowsDevicesGpioGpioPinDriveMode);
    NANOCLR_NATIVE_DECLARE(NativeInit___BOOLEAN__I4);
    NANOCLR_NATIVE_DECLARE(NativeSetDebounceTimeout___VOID);

    //--//

};

struct Library_win_dev_gpio_native_Windows_Devices_Gpio_GpioPinEvent
{
    static const int FIELD__PinNumber = 3;
    static const int FIELD__Edge = 4;


    //--//

};

struct Library_win_dev_gpio_native_Windows_Devices_Gpio_GpioPinEventListener
{
    static const int FIELD___pinMap = 1;


    //--//

};

struct Library_win_dev_gpio_native_Windows_Devices_Gpio_GpioPinValueChangedEventArgs
{
    static const int FIELD___edge = 1;


    //--//

};

extern const CLR_RT_NativeAssemblyData g_CLR_AssemblyNative_Windows_Devices_Gpio;

#endif  //_WIN_DEV_GPIO_NATIVE_H_