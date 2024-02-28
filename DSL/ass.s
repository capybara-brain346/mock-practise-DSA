<<<<<<< HEAD
	.file	"Practical_13_Pizza.cpp"
	.section .rdata,"dr"
__ZStL19piecewise_construct:
	.space 1
.lcomm __ZStL8__ioinit,1,1
	.section	.text$_ZN11PizzaParlorC1Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZN11PizzaParlorC1Ev
	.def	__ZN11PizzaParlorC1Ev;	.scl	2;	.type	32;	.endef
__ZN11PizzaParlorC1Ev:
LFB1447:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	movl	-4(%ebp), %eax
	movl	$-1, (%eax)
	movl	-4(%ebp), %eax
	movl	$-1, 4(%eax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1447:
	.section	.text$_ZN11PizzaParlor6isFullEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZN11PizzaParlor6isFullEv
	.def	__ZN11PizzaParlor6isFullEv;	.scl	2;	.type	32;	.endef
__ZN11PizzaParlor6isFullEv:
LFB1448:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	movl	-4(%ebp), %eax
	movl	(%eax), %eax
	testl	%eax, %eax
	jne	L3
	movl	-4(%ebp), %eax
	movl	4(%eax), %eax
	cmpl	$4, %eax
	je	L4
L3:
	movl	-4(%ebp), %eax
	movl	(%eax), %edx
	movl	-4(%ebp), %eax
	movl	4(%eax), %eax
	addl	$1, %eax
	cmpl	%eax, %edx
	jne	L5
L4:
	movl	$1, %eax
	jmp	L6
L5:
	movl	$0, %eax
L6:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1448:
	.section	.text$_ZN11PizzaParlor7isEmptyEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZN11PizzaParlor7isEmptyEv
	.def	__ZN11PizzaParlor7isEmptyEv;	.scl	2;	.type	32;	.endef
__ZN11PizzaParlor7isEmptyEv:
LFB1449:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	movl	-4(%ebp), %eax
	movl	(%eax), %eax
	cmpl	$-1, %eax
	jne	L9
	movl	-4(%ebp), %eax
	movl	4(%eax), %eax
	cmpl	$-1, %eax
	jne	L9
	movl	$1, %eax
	jmp	L10
L9:
	movl	$0, %eax
L10:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1449:
	.section .rdata,"dr"
LC0:
	.ascii "\12Enter the Pizza ID: \0"
	.align 4
LC1:
	.ascii "Do you want to add another order? (y/n): \0"
LC2:
	.ascii "\12Orders are full.\0"
	.section	.text$_ZN11PizzaParlor8addOrderEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZN11PizzaParlor8addOrderEv
	.def	__ZN11PizzaParlor8addOrderEv;	.scl	2;	.type	32;	.endef
__ZN11PizzaParlor8addOrderEv:
LFB1450:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$56, %esp
	movl	%ecx, -28(%ebp)
	movl	-28(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN11PizzaParlor6isFullEv
	xorl	$1, %eax
	testb	%al, %al
	je	L13
	movl	$LC0, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	-28(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN11PizzaParlor7isEmptyEv
	testb	%al, %al
	je	L14
	movl	-28(%ebp), %eax
	movl	$0, 4(%eax)
	movl	-28(%ebp), %eax
	movl	4(%eax), %edx
	movl	-28(%ebp), %eax
	movl	%edx, (%eax)
	movl	-28(%ebp), %eax
	movl	4(%eax), %eax
	leal	0(,%eax,4), %edx
	movl	-28(%ebp), %eax
	addl	%edx, %eax
	addl	$8, %eax
	movl	%eax, (%esp)
	movl	$__ZSt3cin, %ecx
	call	__ZNSirsERi
	subl	$4, %esp
	jmp	L15
L14:
	movl	-28(%ebp), %eax
	movl	4(%eax), %eax
	leal	1(%eax), %ecx
	movl	$1717986919, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	%edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, %edx
	sall	$2, %edx
	addl	%eax, %edx
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	-28(%ebp), %edx
	movl	%eax, 4(%edx)
	movl	-28(%ebp), %eax
	movl	4(%eax), %eax
	leal	0(,%eax,4), %edx
	movl	-28(%ebp), %eax
	addl	%edx, %eax
	addl	$8, %eax
	movl	%eax, (%esp)
	movl	$__ZSt3cin, %ecx
	call	__ZNSirsERi
	subl	$4, %esp
L15:
	movl	$LC1, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leal	-9(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$__ZSt3cin, (%esp)
	call	__ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_RS3_
	movzbl	-9(%ebp), %eax
	cmpb	$121, %al
	je	L16
	movzbl	-9(%ebp), %eax
	cmpb	$89, %al
	jne	L19
L16:
	movl	-28(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN11PizzaParlor8addOrderEv
	jmp	L19
L13:
	movl	$LC2, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
L19:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1450:
	.section .rdata,"dr"
LC3:
	.ascii "\12Order served is: \0"
LC4:
	.ascii "\12Orders are empty.\0"
	.section	.text$_ZN11PizzaParlor10serveOrderEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZN11PizzaParlor10serveOrderEv
	.def	__ZN11PizzaParlor10serveOrderEv;	.scl	2;	.type	32;	.endef
__ZN11PizzaParlor10serveOrderEv:
LFB1451:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$36, %esp
	.cfi_offset 3, -12
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN11PizzaParlor7isEmptyEv
	xorl	$1, %eax
	testb	%al, %al
	je	L21
	movl	-12(%ebp), %eax
	movl	(%eax), %edx
	movl	-12(%ebp), %eax
	movl	4(%eax), %eax
	cmpl	%eax, %edx
	jne	L22
	movl	-12(%ebp), %eax
	movl	(%eax), %edx
	movl	-12(%ebp), %eax
	movl	8(%eax,%edx,4), %ebx
	movl	$LC3, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%ebx, (%esp)
	movl	%eax, %ecx
	call	__ZNSolsEi
	subl	$4, %esp
	movl	-12(%ebp), %eax
	movl	$-1, 4(%eax)
	movl	-12(%ebp), %eax
	movl	4(%eax), %edx
	movl	-12(%ebp), %eax
	movl	%edx, (%eax)
	jmp	L25
L22:
	movl	-12(%ebp), %eax
	movl	(%eax), %edx
	movl	-12(%ebp), %eax
	movl	8(%eax,%edx,4), %ebx
	movl	$LC3, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%ebx, (%esp)
	movl	%eax, %ecx
	call	__ZNSolsEi
	subl	$4, %esp
	movl	-12(%ebp), %eax
	movl	(%eax), %eax
	leal	1(%eax), %ecx
	movl	$1717986919, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	%edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, %edx
	sall	$2, %edx
	addl	%eax, %edx
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	-12(%ebp), %edx
	movl	%eax, (%edx)
	jmp	L25
L21:
	movl	$LC4, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
L25:
	nop
	movl	-4(%ebp), %ebx
	leave
	.cfi_restore 5
	.cfi_restore 3
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1451:
	.section .rdata,"dr"
LC5:
	.ascii "\12Current orders: \0"
LC6:
	.ascii " <- \0"
	.section	.text$_ZN11PizzaParlor13displayOrdersEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZN11PizzaParlor13displayOrdersEv
	.def	__ZN11PizzaParlor13displayOrdersEv;	.scl	2;	.type	32;	.endef
__ZN11PizzaParlor13displayOrdersEv:
LFB1452:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$56, %esp
	movl	%ecx, -28(%ebp)
	movl	-28(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN11PizzaParlor7isEmptyEv
	xorl	$1, %eax
	testb	%al, %al
	je	L27
	movl	-28(%ebp), %eax
	movl	(%eax), %eax
	movl	%eax, -12(%ebp)
	movl	$LC5, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
L29:
	movl	-28(%ebp), %eax
	movl	-12(%ebp), %edx
	movl	8(%eax,%edx,4), %eax
	movl	%eax, (%esp)
	movl	$__ZSt4cout, %ecx
	call	__ZNSolsEi
	subl	$4, %esp
	movl	$LC6, 4(%esp)
	movl	%eax, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	-12(%ebp), %eax
	leal	1(%eax), %ecx
	movl	$1717986919, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	%edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -12(%ebp)
	movl	-12(%ebp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	movl	%eax, -12(%ebp)
	movl	-28(%ebp), %eax
	movl	4(%eax), %eax
	cmpl	-12(%ebp), %eax
	je	L28
	jmp	L29
L28:
	movl	-28(%ebp), %eax
	movl	4(%eax), %edx
	movl	-28(%ebp), %eax
	movl	8(%eax,%edx,4), %eax
	movl	%eax, (%esp)
	movl	$__ZSt4cout, %ecx
	call	__ZNSolsEi
	subl	$4, %esp
	jmp	L31
L27:
	movl	$LC4, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
L31:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1452:
	.section .rdata,"dr"
	.align 4
LC7:
	.ascii "\12\12 * * * * PIZZA PARLOUR * * * * \12\12\0"
LC8:
	.ascii "1. Add a Pizza\12\0"
LC9:
	.ascii "2. Display the Orders\12\0"
LC10:
	.ascii "3. Serve a Pizza\12\0"
LC11:
	.ascii "4. Exit\12\0"
LC12:
	.ascii "Enter your choice: \0"
LC13:
	.ascii "Invalid choice.\0"
	.align 4
LC14:
	.ascii "\12Do you want to continue? (y/n): \0"
	.section	.text$_ZN11PizzaParlor9checkMenuEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZN11PizzaParlor9checkMenuEv
	.def	__ZN11PizzaParlor9checkMenuEv;	.scl	2;	.type	32;	.endef
__ZN11PizzaParlor9checkMenuEv:
LFB1453:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$56, %esp
	movl	%ecx, -28(%ebp)
	movl	$LC7, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$LC8, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$LC9, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$LC10, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$LC11, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$LC12, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leal	-12(%ebp), %eax
	movl	%eax, (%esp)
	movl	$__ZSt3cin, %ecx
	call	__ZNSirsERi
	subl	$4, %esp
	movl	-12(%ebp), %eax
	cmpl	$2, %eax
	je	L34
	cmpl	$2, %eax
	jg	L35
	cmpl	$1, %eax
	je	L36
	jmp	L33
L35:
	cmpl	$3, %eax
	je	L37
	cmpl	$4, %eax
	je	L38
	jmp	L33
L36:
	movl	-28(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN11PizzaParlor8addOrderEv
	jmp	L39
L34:
	movl	-28(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN11PizzaParlor13displayOrdersEv
	jmp	L39
L37:
	movl	-28(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN11PizzaParlor10serveOrderEv
	jmp	L39
L38:
	movl	$0, (%esp)
	call	_exit
L33:
	movl	$LC13, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
L39:
	movl	$LC14, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leal	-13(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$__ZSt3cin, (%esp)
	call	__ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_RS3_
	movzbl	-13(%ebp), %eax
	cmpb	$121, %al
	je	L40
	movzbl	-13(%ebp), %eax
	cmpb	$89, %al
	jne	L42
L40:
	movl	-28(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN11PizzaParlor9checkMenuEv
L42:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1453:
	.def	___main;	.scl	2;	.type	32;	.endef
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB1454:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	leal	4(%esp), %eax
	movl	%eax, %ecx
	call	__ZN11PizzaParlorC1Ev
	leal	4(%esp), %eax
	movl	%eax, %ecx
	call	__ZN11PizzaParlor9checkMenuEv
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1454:
	.def	___tcf_0;	.scl	3;	.type	32;	.endef
___tcf_0:
LFB1882:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	movl	$__ZStL8__ioinit, %ecx
	call	__ZNSt8ios_base4InitD1Ev
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1882:
	.def	__Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
__Z41__static_initialization_and_destruction_0ii:
LFB1881:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	cmpl	$1, 8(%ebp)
	jne	L48
	cmpl	$65535, 12(%ebp)
	jne	L48
	movl	$__ZStL8__ioinit, %ecx
	call	__ZNSt8ios_base4InitC1Ev
	movl	$___tcf_0, (%esp)
	call	_atexit
L48:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1881:
	.def	__GLOBAL__sub_I_main;	.scl	3;	.type	32;	.endef
__GLOBAL__sub_I_main:
LFB1883:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	$65535, 4(%esp)
	movl	$1, (%esp)
	call	__Z41__static_initialization_and_destruction_0ii
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1883:
	.section	.ctors,"w"
	.align 4
	.long	__GLOBAL__sub_I_main
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc;	.scl	2;	.type	32;	.endef
	.def	__ZNSirsERi;	.scl	2;	.type	32;	.endef
	.def	__ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_RS3_;	.scl	2;	.type	32;	.endef
	.def	__ZNSolsEi;	.scl	2;	.type	32;	.endef
	.def	_exit;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	_atexit;	.scl	2;	.type	32;	.endef
=======
	.file	"Practical_13_Pizza.cpp"
	.section .rdata,"dr"
__ZStL19piecewise_construct:
	.space 1
.lcomm __ZStL8__ioinit,1,1
	.section	.text$_ZN11PizzaParlorC1Ev,"x"
	.linkonce discard
	.align 2
	.globl	__ZN11PizzaParlorC1Ev
	.def	__ZN11PizzaParlorC1Ev;	.scl	2;	.type	32;	.endef
__ZN11PizzaParlorC1Ev:
LFB1447:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	movl	-4(%ebp), %eax
	movl	$-1, (%eax)
	movl	-4(%ebp), %eax
	movl	$-1, 4(%eax)
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1447:
	.section	.text$_ZN11PizzaParlor6isFullEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZN11PizzaParlor6isFullEv
	.def	__ZN11PizzaParlor6isFullEv;	.scl	2;	.type	32;	.endef
__ZN11PizzaParlor6isFullEv:
LFB1448:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	movl	-4(%ebp), %eax
	movl	(%eax), %eax
	testl	%eax, %eax
	jne	L3
	movl	-4(%ebp), %eax
	movl	4(%eax), %eax
	cmpl	$4, %eax
	je	L4
L3:
	movl	-4(%ebp), %eax
	movl	(%eax), %edx
	movl	-4(%ebp), %eax
	movl	4(%eax), %eax
	addl	$1, %eax
	cmpl	%eax, %edx
	jne	L5
L4:
	movl	$1, %eax
	jmp	L6
L5:
	movl	$0, %eax
L6:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1448:
	.section	.text$_ZN11PizzaParlor7isEmptyEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZN11PizzaParlor7isEmptyEv
	.def	__ZN11PizzaParlor7isEmptyEv;	.scl	2;	.type	32;	.endef
__ZN11PizzaParlor7isEmptyEv:
LFB1449:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$4, %esp
	movl	%ecx, -4(%ebp)
	movl	-4(%ebp), %eax
	movl	(%eax), %eax
	cmpl	$-1, %eax
	jne	L9
	movl	-4(%ebp), %eax
	movl	4(%eax), %eax
	cmpl	$-1, %eax
	jne	L9
	movl	$1, %eax
	jmp	L10
L9:
	movl	$0, %eax
L10:
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1449:
	.section .rdata,"dr"
LC0:
	.ascii "\12Enter the Pizza ID: \0"
	.align 4
LC1:
	.ascii "Do you want to add another order? (y/n): \0"
LC2:
	.ascii "\12Orders are full.\0"
	.section	.text$_ZN11PizzaParlor8addOrderEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZN11PizzaParlor8addOrderEv
	.def	__ZN11PizzaParlor8addOrderEv;	.scl	2;	.type	32;	.endef
__ZN11PizzaParlor8addOrderEv:
LFB1450:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$56, %esp
	movl	%ecx, -28(%ebp)
	movl	-28(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN11PizzaParlor6isFullEv
	xorl	$1, %eax
	testb	%al, %al
	je	L13
	movl	$LC0, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	-28(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN11PizzaParlor7isEmptyEv
	testb	%al, %al
	je	L14
	movl	-28(%ebp), %eax
	movl	$0, 4(%eax)
	movl	-28(%ebp), %eax
	movl	4(%eax), %edx
	movl	-28(%ebp), %eax
	movl	%edx, (%eax)
	movl	-28(%ebp), %eax
	movl	4(%eax), %eax
	leal	0(,%eax,4), %edx
	movl	-28(%ebp), %eax
	addl	%edx, %eax
	addl	$8, %eax
	movl	%eax, (%esp)
	movl	$__ZSt3cin, %ecx
	call	__ZNSirsERi
	subl	$4, %esp
	jmp	L15
L14:
	movl	-28(%ebp), %eax
	movl	4(%eax), %eax
	leal	1(%eax), %ecx
	movl	$1717986919, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	%edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, %edx
	sall	$2, %edx
	addl	%eax, %edx
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	-28(%ebp), %edx
	movl	%eax, 4(%edx)
	movl	-28(%ebp), %eax
	movl	4(%eax), %eax
	leal	0(,%eax,4), %edx
	movl	-28(%ebp), %eax
	addl	%edx, %eax
	addl	$8, %eax
	movl	%eax, (%esp)
	movl	$__ZSt3cin, %ecx
	call	__ZNSirsERi
	subl	$4, %esp
L15:
	movl	$LC1, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leal	-9(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$__ZSt3cin, (%esp)
	call	__ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_RS3_
	movzbl	-9(%ebp), %eax
	cmpb	$121, %al
	je	L16
	movzbl	-9(%ebp), %eax
	cmpb	$89, %al
	jne	L19
L16:
	movl	-28(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN11PizzaParlor8addOrderEv
	jmp	L19
L13:
	movl	$LC2, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
L19:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1450:
	.section .rdata,"dr"
LC3:
	.ascii "\12Order served is: \0"
LC4:
	.ascii "\12Orders are empty.\0"
	.section	.text$_ZN11PizzaParlor10serveOrderEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZN11PizzaParlor10serveOrderEv
	.def	__ZN11PizzaParlor10serveOrderEv;	.scl	2;	.type	32;	.endef
__ZN11PizzaParlor10serveOrderEv:
LFB1451:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$36, %esp
	.cfi_offset 3, -12
	movl	%ecx, -12(%ebp)
	movl	-12(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN11PizzaParlor7isEmptyEv
	xorl	$1, %eax
	testb	%al, %al
	je	L21
	movl	-12(%ebp), %eax
	movl	(%eax), %edx
	movl	-12(%ebp), %eax
	movl	4(%eax), %eax
	cmpl	%eax, %edx
	jne	L22
	movl	-12(%ebp), %eax
	movl	(%eax), %edx
	movl	-12(%ebp), %eax
	movl	8(%eax,%edx,4), %ebx
	movl	$LC3, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%ebx, (%esp)
	movl	%eax, %ecx
	call	__ZNSolsEi
	subl	$4, %esp
	movl	-12(%ebp), %eax
	movl	$-1, 4(%eax)
	movl	-12(%ebp), %eax
	movl	4(%eax), %edx
	movl	-12(%ebp), %eax
	movl	%edx, (%eax)
	jmp	L25
L22:
	movl	-12(%ebp), %eax
	movl	(%eax), %edx
	movl	-12(%ebp), %eax
	movl	8(%eax,%edx,4), %ebx
	movl	$LC3, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	%ebx, (%esp)
	movl	%eax, %ecx
	call	__ZNSolsEi
	subl	$4, %esp
	movl	-12(%ebp), %eax
	movl	(%eax), %eax
	leal	1(%eax), %ecx
	movl	$1717986919, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	%edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, %edx
	sall	$2, %edx
	addl	%eax, %edx
	movl	%ecx, %eax
	subl	%edx, %eax
	movl	-12(%ebp), %edx
	movl	%eax, (%edx)
	jmp	L25
L21:
	movl	$LC4, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
L25:
	nop
	movl	-4(%ebp), %ebx
	leave
	.cfi_restore 5
	.cfi_restore 3
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1451:
	.section .rdata,"dr"
LC5:
	.ascii "\12Current orders: \0"
LC6:
	.ascii " <- \0"
	.section	.text$_ZN11PizzaParlor13displayOrdersEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZN11PizzaParlor13displayOrdersEv
	.def	__ZN11PizzaParlor13displayOrdersEv;	.scl	2;	.type	32;	.endef
__ZN11PizzaParlor13displayOrdersEv:
LFB1452:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$56, %esp
	movl	%ecx, -28(%ebp)
	movl	-28(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN11PizzaParlor7isEmptyEv
	xorl	$1, %eax
	testb	%al, %al
	je	L27
	movl	-28(%ebp), %eax
	movl	(%eax), %eax
	movl	%eax, -12(%ebp)
	movl	$LC5, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
L29:
	movl	-28(%ebp), %eax
	movl	-12(%ebp), %edx
	movl	8(%eax,%edx,4), %eax
	movl	%eax, (%esp)
	movl	$__ZSt4cout, %ecx
	call	__ZNSolsEi
	subl	$4, %esp
	movl	$LC6, 4(%esp)
	movl	%eax, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	-12(%ebp), %eax
	leal	1(%eax), %ecx
	movl	$1717986919, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	%edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -12(%ebp)
	movl	-12(%ebp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	movl	%eax, -12(%ebp)
	movl	-28(%ebp), %eax
	movl	4(%eax), %eax
	cmpl	-12(%ebp), %eax
	je	L28
	jmp	L29
L28:
	movl	-28(%ebp), %eax
	movl	4(%eax), %edx
	movl	-28(%ebp), %eax
	movl	8(%eax,%edx,4), %eax
	movl	%eax, (%esp)
	movl	$__ZSt4cout, %ecx
	call	__ZNSolsEi
	subl	$4, %esp
	jmp	L31
L27:
	movl	$LC4, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
L31:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1452:
	.section .rdata,"dr"
	.align 4
LC7:
	.ascii "\12\12 * * * * PIZZA PARLOUR * * * * \12\12\0"
LC8:
	.ascii "1. Add a Pizza\12\0"
LC9:
	.ascii "2. Display the Orders\12\0"
LC10:
	.ascii "3. Serve a Pizza\12\0"
LC11:
	.ascii "4. Exit\12\0"
LC12:
	.ascii "Enter your choice: \0"
LC13:
	.ascii "Invalid choice.\0"
	.align 4
LC14:
	.ascii "\12Do you want to continue? (y/n): \0"
	.section	.text$_ZN11PizzaParlor9checkMenuEv,"x"
	.linkonce discard
	.align 2
	.globl	__ZN11PizzaParlor9checkMenuEv
	.def	__ZN11PizzaParlor9checkMenuEv;	.scl	2;	.type	32;	.endef
__ZN11PizzaParlor9checkMenuEv:
LFB1453:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$56, %esp
	movl	%ecx, -28(%ebp)
	movl	$LC7, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$LC8, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$LC9, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$LC10, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$LC11, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movl	$LC12, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leal	-12(%ebp), %eax
	movl	%eax, (%esp)
	movl	$__ZSt3cin, %ecx
	call	__ZNSirsERi
	subl	$4, %esp
	movl	-12(%ebp), %eax
	cmpl	$2, %eax
	je	L34
	cmpl	$2, %eax
	jg	L35
	cmpl	$1, %eax
	je	L36
	jmp	L33
L35:
	cmpl	$3, %eax
	je	L37
	cmpl	$4, %eax
	je	L38
	jmp	L33
L36:
	movl	-28(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN11PizzaParlor8addOrderEv
	jmp	L39
L34:
	movl	-28(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN11PizzaParlor13displayOrdersEv
	jmp	L39
L37:
	movl	-28(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN11PizzaParlor10serveOrderEv
	jmp	L39
L38:
	movl	$0, (%esp)
	call	_exit
L33:
	movl	$LC13, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
L39:
	movl	$LC14, 4(%esp)
	movl	$__ZSt4cout, (%esp)
	call	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	leal	-13(%ebp), %eax
	movl	%eax, 4(%esp)
	movl	$__ZSt3cin, (%esp)
	call	__ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_RS3_
	movzbl	-13(%ebp), %eax
	cmpb	$121, %al
	je	L40
	movzbl	-13(%ebp), %eax
	cmpb	$89, %al
	jne	L42
L40:
	movl	-28(%ebp), %eax
	movl	%eax, %ecx
	call	__ZN11PizzaParlor9checkMenuEv
L42:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1453:
	.def	___main;	.scl	2;	.type	32;	.endef
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB1454:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	leal	4(%esp), %eax
	movl	%eax, %ecx
	call	__ZN11PizzaParlorC1Ev
	leal	4(%esp), %eax
	movl	%eax, %ecx
	call	__ZN11PizzaParlor9checkMenuEv
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1454:
	.def	___tcf_0;	.scl	3;	.type	32;	.endef
___tcf_0:
LFB1882:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$8, %esp
	movl	$__ZStL8__ioinit, %ecx
	call	__ZNSt8ios_base4InitD1Ev
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1882:
	.def	__Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
__Z41__static_initialization_and_destruction_0ii:
LFB1881:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	cmpl	$1, 8(%ebp)
	jne	L48
	cmpl	$65535, 12(%ebp)
	jne	L48
	movl	$__ZStL8__ioinit, %ecx
	call	__ZNSt8ios_base4InitC1Ev
	movl	$___tcf_0, (%esp)
	call	_atexit
L48:
	nop
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1881:
	.def	__GLOBAL__sub_I_main;	.scl	3;	.type	32;	.endef
__GLOBAL__sub_I_main:
LFB1883:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$24, %esp
	movl	$65535, 4(%esp)
	movl	$1, (%esp)
	call	__Z41__static_initialization_and_destruction_0ii
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE1883:
	.section	.ctors,"w"
	.align 4
	.long	__GLOBAL__sub_I_main
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
	.def	__ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc;	.scl	2;	.type	32;	.endef
	.def	__ZNSirsERi;	.scl	2;	.type	32;	.endef
	.def	__ZStrsIcSt11char_traitsIcEERSt13basic_istreamIT_T0_ES6_RS3_;	.scl	2;	.type	32;	.endef
	.def	__ZNSolsEi;	.scl	2;	.type	32;	.endef
	.def	_exit;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	__ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	_atexit;	.scl	2;	.type	32;	.endef
>>>>>>> c86646d2c6758a6b5b0d25bd4931f28d026307cf
