#include<stdio.h>
#include<string.h>
int main(){
         char s[10];
         int i,j,count;
         scanf("%s",s);
         int size=strlen(s);
         for(i=0;i<size;i++){
                 count=0;
                 for(j=0;j<size;j++){
                              if(i!=j){
                                      if(s[i]==s[j]){
                                                    count++;}
                              
                              }
                 }
                 if(count==0){
                            printf("%d\n",i);   
                            break;    
                 }
         }
   }
