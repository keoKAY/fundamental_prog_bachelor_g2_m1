section .data
    msg db "Hello, world!", 0xa ; Our message string with a newline character (0xa)
    len equ $ - msg           ; Length of the message string

section .text
    global _start             ; Must be declared for the linker

_start:                       ; Program entry point
    ; Call sys_write (syscall number 1)
    mov eax, 1                ; System call number for sys_write
    mov edi, 1                ; File descriptor 1 (stdout)
    mov rsi, msg              ; Address of the message to write
    mov rdx, len              ; Message length
    syscall                   ; Call the kernel

    ; Call sys_exit (syscall number 60)
    mov eax, 60               ; System call number for sys_exit
    xor edi, edi              ; Exit status 0 (no errors)
    syscall                   ; Call the kernel to exit
