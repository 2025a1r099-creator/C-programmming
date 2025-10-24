#include <stdio.h>
int main() {
printf("Enter an alphabet:");
scanf("%c",&ch);

if ((ch>='a' &&ch<='z'||(ch>='A' &&ch='Z')){
if (ch =='a'||ch =='e'||ch =='i'||ch =='o'||ch =='u'||
ch =='A'||ch =='E'||ch =='I'||ch =='O'||ch =='U'){

printf("%c is a vowel.\n",ch);
}else{
printf("%c is a constant.\n",ch);
}
}else{
printf("Invalid input ! please enter an alphabet .\n");
}
return 0;
}
