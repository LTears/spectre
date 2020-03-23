/*
 * This file is subject to the terms and conditions defined in
 * file 'LICENSE', which is part of this source code package.
 *
 * COPYRIGHT Bill Demirkapi 2020
 */
#pragma once
#include "common.h"
#include "FileObjHook.h"
#include "shared.h"

typedef class AfdHook
{
	static NTSTATUS HookAfdIoctl (
		_In_ DRIVER_DISPATCH OriginalFunction,
		_In_ PDEVICE_OBJECT DeviceObject,
		_Inout_ PIRP Irp
		);
	//
	// The FileObjHook instance used to intercept communication with the Afd.sys driver.
	//
	PFILE_OBJ_HOOK AfdDeviceHook;
public:
	AfdHook (
		VOID
		);



} AFD_HOOK, *PAFD_HOOK;

#define AFD_DEVICE_BASE_NAME L"Afd"
#define AFD_FILE_HOOK_TAG 'hFpS'