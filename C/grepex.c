#include <stdio.h>
#include<string.h>

int strindex(const char *s, const char *value);

int main() {
char string[1000];
int size = 0;
char c;
 while((c = getchar())!= EOF){
 if(c != '\n'){
 string[size] = c;
 size++;
 }else{
 string[size] = '\0';
 int ptr = strindex(string, "ould");
 if(ptr!=-1){
 string[size] = '\0';
 printf("%s \n",string);
 }
 size = 0;
 }}
 
 


    
    return 0;
}

int strindex(const char *s, const char *value){
int i, j, k; 
for (i = 0; s[i] != '\0'; i++) { 
for (j = i, k = 0; value[k] != '\0' && s[j] == value[k]; j++, k++);
if (value[k] == '\0') {
return i; // found match starting at i 
} } 
return -1;
}


