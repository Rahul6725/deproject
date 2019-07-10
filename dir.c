#include <stdio.h>
#include <conio.h>
#include <process.h>
#include <dir.h>
 

intif main()
{
int stat;
char a[100];
gets(a);
a=mkdir(a);
if(!a)
{
printf("created sucessfully");
}
else
{
printf("sorry not created");
}
gethch();
}