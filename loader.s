.set MAGIC, 0x1badb002
.set FLAGS, (1<<0 | 1<<1)
.set CHECKSUM, -(MAGIC + FLAGS)

.section .multiboot
    .long MAGIC
    .long FLAGS
    .long CHECKSUM

.section .text
.extern kernel_main

.global loader

loader: 
    mov $kernel_stack, %esp 
    push %eax
    push %ebx
    call kernel_main

_stop:
    cli
    hlt
    jmp _stop #infinite loop just to make sure

.section .bss
.space 2*1024*1024;
kernel_stack: