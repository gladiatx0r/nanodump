#pragma once
#include <windows.h>

#if _WIN64

#define IsWoW64 IsWoW64
__asm__("IsWoW64: \n\
	mov rax, 0 \n\
	ret \n\
");

#define ZwOpenProcess NtOpenProcess
__asm__("NtOpenProcess: \n\
	push rcx \n\
	push rdx \n\
	push r8 \n\
	push r9 \n\
	sub rsp, 0x28 \n\
	call GetSyscallAddress \n\
	add rsp, 0x28 \n\
	push rax \n\
	sub rsp, 0x28 \n\
	mov ecx, 0xCD9B2A0F \n\
	call SW2_GetSyscallNumber \n\
	add rsp, 0x28 \n\
	pop r11 \n\
	pop r9 \n\
	pop r8 \n\
	pop rdx \n\
	pop rcx \n\
	mov r10, rcx \n\
	jmp r11 \n\
");

#define ZwGetNextProcess NtGetNextProcess
__asm__("NtGetNextProcess: \n\
	push rcx \n\
	push rdx \n\
	push r8 \n\
	push r9 \n\
	sub rsp, 0x28 \n\
	call GetSyscallAddress \n\
	add rsp, 0x28 \n\
	push rax \n\
	sub rsp, 0x28 \n\
	mov ecx, 0xFFBF1A2F \n\
	call SW2_GetSyscallNumber \n\
	add rsp, 0x28 \n\
	pop r11 \n\
	pop r9 \n\
	pop r8 \n\
	pop rdx \n\
	pop rcx \n\
	mov r10, rcx \n\
	jmp r11 \n\
");

#define ZwReadVirtualMemory NtReadVirtualMemory
__asm__("NtReadVirtualMemory: \n\
	push rcx \n\
	push rdx \n\
	push r8 \n\
	push r9 \n\
	sub rsp, 0x28 \n\
	call GetSyscallAddress \n\
	add rsp, 0x28 \n\
	push rax \n\
	sub rsp, 0x28 \n\
	mov ecx, 0x118B7567 \n\
	call SW2_GetSyscallNumber \n\
	add rsp, 0x28 \n\
	pop r11 \n\
	pop r9 \n\
	pop r8 \n\
	pop rdx \n\
	pop rcx \n\
	mov r10, rcx \n\
	jmp r11 \n\
");

#define ZwClose NtClose
__asm__("NtClose: \n\
	push rcx \n\
	push rdx \n\
	push r8 \n\
	push r9 \n\
	sub rsp, 0x28 \n\
	call GetSyscallAddress \n\
	add rsp, 0x28 \n\
	push rax \n\
	sub rsp, 0x28 \n\
	mov ecx, 0x2252D33F \n\
	call SW2_GetSyscallNumber \n\
	add rsp, 0x28 \n\
	pop r11 \n\
	pop r9 \n\
	pop r8 \n\
	pop rdx \n\
	pop rcx \n\
	mov r10, rcx \n\
	jmp r11 \n\
");

#define ZwOpenProcessToken NtOpenProcessToken
__asm__("NtOpenProcessToken: \n\
	push rcx \n\
	push rdx \n\
	push r8 \n\
	push r9 \n\
	sub rsp, 0x28 \n\
	call GetSyscallAddress \n\
	add rsp, 0x28 \n\
	push rax \n\
	sub rsp, 0x28 \n\
	mov ecx, 0x8FA915A2 \n\
	call SW2_GetSyscallNumber \n\
	add rsp, 0x28 \n\
	pop r11 \n\
	pop r9 \n\
	pop r8 \n\
	pop rdx \n\
	pop rcx \n\
	mov r10, rcx \n\
	jmp r11 \n\
");

#define ZwQueryInformationProcess NtQueryInformationProcess
__asm__("NtQueryInformationProcess: \n\
	push rcx \n\
	push rdx \n\
	push r8 \n\
	push r9 \n\
	sub rsp, 0x28 \n\
	call GetSyscallAddress \n\
	add rsp, 0x28 \n\
	push rax \n\
	sub rsp, 0x28 \n\
	mov ecx, 0xBDBCBC20 \n\
	call SW2_GetSyscallNumber \n\
	add rsp, 0x28 \n\
	pop r11 \n\
	pop r9 \n\
	pop r8 \n\
	pop rdx \n\
	pop rcx \n\
	mov r10, rcx \n\
	jmp r11 \n\
");

#define ZwQueryVirtualMemory NtQueryVirtualMemory
__asm__("NtQueryVirtualMemory: \n\
	push rcx \n\
	push rdx \n\
	push r8 \n\
	push r9 \n\
	sub rsp, 0x28 \n\
	call GetSyscallAddress \n\
	add rsp, 0x28 \n\
	push rax \n\
	sub rsp, 0x28 \n\
	mov ecx, 0x0393E980 \n\
	call SW2_GetSyscallNumber \n\
	add rsp, 0x28 \n\
	pop r11 \n\
	pop r9 \n\
	pop r8 \n\
	pop rdx \n\
	pop rcx \n\
	mov r10, rcx \n\
	jmp r11 \n\
");

#define ZwAdjustPrivilegesToken NtAdjustPrivilegesToken
__asm__("NtAdjustPrivilegesToken: \n\
	push rcx \n\
	push rdx \n\
	push r8 \n\
	push r9 \n\
	sub rsp, 0x28 \n\
	call GetSyscallAddress \n\
	add rsp, 0x28 \n\
	push rax \n\
	sub rsp, 0x28 \n\
	mov ecx, 0x17AB1B32 \n\
	call SW2_GetSyscallNumber \n\
	add rsp, 0x28 \n\
	pop r11 \n\
	pop r9 \n\
	pop r8 \n\
	pop rdx \n\
	pop rcx \n\
	mov r10, rcx \n\
	jmp r11 \n\
");

#define ZwAllocateVirtualMemory NtAllocateVirtualMemory
__asm__("NtAllocateVirtualMemory: \n\
	push rcx \n\
	push rdx \n\
	push r8 \n\
	push r9 \n\
	sub rsp, 0x28 \n\
	call GetSyscallAddress \n\
	add rsp, 0x28 \n\
	push rax \n\
	sub rsp, 0x28 \n\
	mov ecx, 0x0595031B \n\
	call SW2_GetSyscallNumber \n\
	add rsp, 0x28 \n\
	pop r11 \n\
	pop r9 \n\
	pop r8 \n\
	pop rdx \n\
	pop rcx \n\
	mov r10, rcx \n\
	jmp r11 \n\
");

#define ZwFreeVirtualMemory NtFreeVirtualMemory
__asm__("NtFreeVirtualMemory: \n\
	push rcx \n\
	push rdx \n\
	push r8 \n\
	push r9 \n\
	sub rsp, 0x28 \n\
	call GetSyscallAddress \n\
	add rsp, 0x28 \n\
	push rax \n\
	sub rsp, 0x28 \n\
	mov ecx, 0x01932F05 \n\
	call SW2_GetSyscallNumber \n\
	add rsp, 0x28 \n\
	pop r11 \n\
	pop r9 \n\
	pop r8 \n\
	pop rdx \n\
	pop rcx \n\
	mov r10, rcx \n\
	jmp r11 \n\
");

#define ZwCreateFile NtCreateFile
__asm__("NtCreateFile: \n\
	push rcx \n\
	push rdx \n\
	push r8 \n\
	push r9 \n\
	sub rsp, 0x28 \n\
	call GetSyscallAddress \n\
	add rsp, 0x28 \n\
	push rax \n\
	sub rsp, 0x28 \n\
	mov ecx, 0x96018EB6 \n\
	call SW2_GetSyscallNumber \n\
	add rsp, 0x28 \n\
	pop r11 \n\
	pop r9 \n\
	pop r8 \n\
	pop rdx \n\
	pop rcx \n\
	mov r10, rcx \n\
	jmp r11 \n\
");

#define ZwWriteFile NtWriteFile
__asm__("NtWriteFile: \n\
	push rcx \n\
	push rdx \n\
	push r8 \n\
	push r9 \n\
	sub rsp, 0x28 \n\
	call GetSyscallAddress \n\
	add rsp, 0x28 \n\
	push rax \n\
	sub rsp, 0x28 \n\
	mov ecx, 0x24B22A1A \n\
	call SW2_GetSyscallNumber \n\
	add rsp, 0x28 \n\
	pop r11 \n\
	pop r9 \n\
	pop r8 \n\
	pop rdx \n\
	pop rcx \n\
	mov r10, rcx \n\
	jmp r11 \n\
");

#else

#define IsWoW64 IsWoW64
__asm__("IsWoW64: \n\
	mov eax, fs:[0xc0] \n\
	test eax, eax \n\
	jne wow64 \n\
	mov eax, 0 \n\
	ret \n\
	wow64: \n\
	mov eax, 1 \n\
	ret \n\
");

#define ZwOpenProcess NtOpenProcess
__asm__("NtOpenProcess: \n\
	call GetSyscallAddress \n\
	push eax \n\
	push 0xCD9B2A0F \n\
	call SW2_GetSyscallNumber \n\
	add esp, 4 \n\
	pop ebx \n\
	mov edx, esp \n\
	sub edx, 4 \n\
	call ebx \n\
	ret \n\
");

#define ZwGetNextProcess NtGetNextProcess
__asm__("NtGetNextProcess: \n\
	call GetSyscallAddress \n\
	push eax \n\
	push 0xFFBF1A2F \n\
	call SW2_GetSyscallNumber \n\
	add esp, 4 \n\
	pop ebx \n\
	mov edx, esp \n\
	sub edx, 4 \n\
	call ebx \n\
	ret \n\
");

#define ZwReadVirtualMemory NtReadVirtualMemory
__asm__("NtReadVirtualMemory: \n\
	call GetSyscallAddress \n\
	push eax \n\
	push 0x118B7567 \n\
	call SW2_GetSyscallNumber \n\
	add esp, 4 \n\
	pop ebx \n\
	mov edx, esp \n\
	sub edx, 4 \n\
	call ebx \n\
	ret \n\
");

#define ZwClose NtClose
__asm__("NtClose: \n\
	call GetSyscallAddress \n\
	push eax \n\
	push 0x2252D33F \n\
	call SW2_GetSyscallNumber \n\
	add esp, 4 \n\
	pop ebx \n\
	mov edx, esp \n\
	sub edx, 4 \n\
	call ebx \n\
	ret \n\
");

#define ZwOpenProcessToken NtOpenProcessToken
__asm__("NtOpenProcessToken: \n\
	call GetSyscallAddress \n\
	push eax \n\
	push 0x8FA915A2 \n\
	call SW2_GetSyscallNumber \n\
	add esp, 4 \n\
	pop ebx \n\
	mov edx, esp \n\
	sub edx, 4 \n\
	call ebx \n\
	ret \n\
");

#define ZwQueryInformationProcess NtQueryInformationProcess
__asm__("NtQueryInformationProcess: \n\
	call GetSyscallAddress \n\
	push eax \n\
	push 0xBDBCBC20 \n\
	call SW2_GetSyscallNumber \n\
	add esp, 4 \n\
	pop ebx \n\
	mov edx, esp \n\
	sub edx, 4 \n\
	call ebx \n\
	ret \n\
");

#define ZwQueryVirtualMemory NtQueryVirtualMemory
__asm__("NtQueryVirtualMemory: \n\
	call GetSyscallAddress \n\
	push eax \n\
	push 0x0393E980 \n\
	call SW2_GetSyscallNumber \n\
	add esp, 4 \n\
	pop ebx \n\
	mov edx, esp \n\
	sub edx, 4 \n\
	call ebx \n\
	ret \n\
");

#define ZwAdjustPrivilegesToken NtAdjustPrivilegesToken
__asm__("NtAdjustPrivilegesToken: \n\
	call GetSyscallAddress \n\
	push eax \n\
	push 0x17AB1B32 \n\
	call SW2_GetSyscallNumber \n\
	add esp, 4 \n\
	pop ebx \n\
	mov edx, esp \n\
	sub edx, 4 \n\
	call ebx \n\
	ret \n\
");

#define ZwAllocateVirtualMemory NtAllocateVirtualMemory
__asm__("NtAllocateVirtualMemory: \n\
	call GetSyscallAddress \n\
	push eax \n\
	push 0x0595031B \n\
	call SW2_GetSyscallNumber \n\
	add esp, 4 \n\
	pop ebx \n\
	mov edx, esp \n\
	sub edx, 4 \n\
	call ebx \n\
	ret \n\
");

#define ZwFreeVirtualMemory NtFreeVirtualMemory
__asm__("NtFreeVirtualMemory: \n\
	call GetSyscallAddress \n\
	push eax \n\
	push 0x01932F05 \n\
	call SW2_GetSyscallNumber \n\
	add esp, 4 \n\
	pop ebx \n\
	mov edx, esp \n\
	sub edx, 4 \n\
	call ebx \n\
	ret \n\
");

#define ZwCreateFile NtCreateFile
__asm__("NtCreateFile: \n\
	call GetSyscallAddress \n\
	push eax \n\
	push 0x96018EB6 \n\
	call SW2_GetSyscallNumber \n\
	add esp, 4 \n\
	pop ebx \n\
	mov edx, esp \n\
	sub edx, 4 \n\
	call ebx \n\
	ret \n\
");

#define ZwWriteFile NtWriteFile
__asm__("NtWriteFile: \n\
	call GetSyscallAddress \n\
	push eax \n\
	push 0x24B22A1A \n\
	call SW2_GetSyscallNumber \n\
	add esp, 4 \n\
	pop ebx \n\
	mov edx, esp \n\
	sub edx, 4 \n\
	call ebx \n\
	ret \n\
");

#endif
