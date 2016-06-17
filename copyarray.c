#include <stdio.h>

int main()
{
  int arr[] = {15,31,47,63,79,95,111,127,143,159},
      newarr[10],
      i;

  for(i=0; i < 10; i++)
  {
    newarr[i] = arr[i];
  }
}


/*
 * *** compile:
 *     $ gdb copyarray.c
 *
 * *** run:
 *    ./a.out
 *
 * *** disassemble (intel syntax):
 *     objdump -M intel -D a.out | grep -A28 main.:
 * 
 * *** disassembly result: 
 *     00000000004004a6 <main>:
 *     4004a6:	55                   	push   rbp
 *     4004a7:	48 89 e5             	mov    rbp,rsp
 *     4004aa:	c7 45 d0 0f 00 00 00 	mov    DWORD PTR [rbp-0x30],0xf
 *     4004b1:	c7 45 d4 1f 00 00 00 	mov    DWORD PTR [rbp-0x2c],0x1f
 *     4004b8:	c7 45 d8 2f 00 00 00 	mov    DWORD PTR [rbp-0x28],0x2f
 *     4004bf:	c7 45 dc 3f 00 00 00 	mov    DWORD PTR [rbp-0x24],0x3f
 *     4004c6:	c7 45 e0 4f 00 00 00 	mov    DWORD PTR [rbp-0x20],0x4f
 *     4004cd:	c7 45 e4 5f 00 00 00 	mov    DWORD PTR [rbp-0x1c],0x5f
 *     4004d4:	c7 45 e8 6f 00 00 00 	mov    DWORD PTR [rbp-0x18],0x6f
 *     4004db:	c7 45 ec 7f 00 00 00 	mov    DWORD PTR [rbp-0x14],0x7f
 *     4004e2:	c7 45 f0 8f 00 00 00 	mov    DWORD PTR [rbp-0x10],0x8f
 *     4004e9:	c7 45 f4 9f 00 00 00 	mov    DWORD PTR [rbp-0xc],0x9f
 *     4004f0:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [rbp-0x4],0x0
 *     4004f7:	eb 16                	jmp    40050f <main+0x69>
 *     4004f9:	8b 45 fc             	mov    eax,DWORD PTR [rbp-0x4]
 *     4004fc:	48 98                	cdqe   
 *     4004fe:	8b 54 85 d0          	mov    edx,DWORD PTR [rbp+rax*4-0x30]
 *     400502:	8b 45 fc             	mov    eax,DWORD PTR [rbp-0x4]
 *     400505:	48 98                	cdqe   
 *     400507:	89 54 85 a0          	mov    DWORD PTR [rbp+rax*4-0x60],edx
 *     40050b:	83 45 fc 01          	add    DWORD PTR [rbp-0x4],0x1
 *     40050f:	83 7d fc 09          	cmp    DWORD PTR [rbp-0x4],0x9
 *     400513:	7e e4                	jle    4004f9 <main+0x53>
 *     400515:	b8 00 00 00 00       	mov    eax,0x0
 *     40051a:	5d                   	pop    rbp
 *     40051b:	c3                   	ret    
 *     40051c:	0f 1f 40 00          	nop    DWORD PTR [rax+0x0]
 */
