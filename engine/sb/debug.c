/* FILE: debug.c
   This file contains the binary code of a ScriptBasic program
   To run this file you have to compile it to object file and
   link it with scribast.lib or whatever the library code is
   called on your platform.
*/
unsigned long ulGlobalVariables=1;
unsigned long ulNodeCounter=23;
unsigned long ulStartNode=4;
unsigned long ulStringTableSize=36;
unsigned char szCommandArray[] ={
0x92, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xCD, 0xCD, 0xCD, 0xCD, 
0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 
0x08, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xCD, 0xCD, 0xCD, 0xCD, 
0x08, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0xCD, 0xCD, 0xCD, 0xCD, 
0x8A, 0x01, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0xCD, 0xCD, 0xCD, 0xCD, 
0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 
0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0xCD, 0xCD, 0xCD, 0xCD, 
0x06, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 
0x08, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0xCD, 0xCD, 0xCD, 0xCD, 
0x60, 0x02, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x00, 0x00, 0xCD, 0xCD, 0xCD, 0xCD, 
0x06, 0x00, 0x00, 0x00, 0x64, 0x00, 0x00, 0x00, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 
0x09, 0x00, 0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0xCD, 0xCD, 0xCD, 0xCD, 
0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0xCD, 0xCD, 0xCD, 0xCD, 
0x08, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0xCD, 0xCD, 0xCD, 0xCD, 
0x92, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0xCD, 0xCD, 0xCD, 0xCD, 
0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 
0x08, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0xCD, 0xCD, 0xCD, 0xCD, 
0x07, 0x00, 0x00, 0x00, 0x1A, 0x00, 0x00, 0x00, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 0xCD, 
0x08, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xCD, 0xCD, 0xCD, 0xCD, 
0x08, 0x00, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0xCD, 0xCD, 0xCD, 0xCD, 
0x29, 0x02, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0xCD, 0xCD, 0xCD, 0xCD, 
0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0xCD, 0xCD, 0xCD, 0xCD, 
0x08, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xCD, 0xCD, 0xCD, 0xCD, 
0x00 };
char szStringTable[]={
0x48, 0x65, 0x6C, 0x6C, 0x6F, 0x2E, 0x20, 0x54, 0x68, 0x69, 0x73, 0x20, 0x69, 0x73, 0x20, 0x64, 
0x65, 0x62, 0x75, 0x67, 0x2E, 0x62, 0x61, 0x73, 0x0A, 0x00, 0x0A, 0x00, 0x6D, 0x61, 0x69, 0x6E, 
0x3A, 0x3A, 0x69, 0x00, 
0x00 };
/*End of file debug.c */