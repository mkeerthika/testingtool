#include<stdiioh>
using namespace std;
int main
{
  char str[20];
  int i,cont;
int flag=0;
scanf("%d",&str);
cont=strlen(str);
for(i=0;i<length/2;i++){
if(str[i]!=str[len-1-i])
{
flag=1;
}}
if(flag)
{
printf("%d is not a palindrome");
}
else
{
printf("%s is a palindrome");
return;
}
