/**
	Patch to Windows Kernel (ntoskrnl.exe) image.

  	This function applies a custom patch to modify the behavior of the Windows Kernel.

	@param[in]		ImageBase			A pointer to the base address of the loaded image.
	@param[in]		NtHeaders			A pointer to the NT headers of the loaded image.

	@retval			EFI_SUCCESS			The patch was successfully applied.
	@retval			other				An error occurs during the patching process.
**/

EFI_STATUS
EFIAPI
FunctionsWindowsKernel_PatchNtoskrnlExe(
	IN VOID* ImageBase,
	IN PEFI_IMAGE_NT_HEADERS NtHeaders
);
