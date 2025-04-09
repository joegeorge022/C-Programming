/*Write a C program to read a file and count the number of words, lines and the number of characters in it.*/

#include <stdio.h>

int main(){
    FILE *fp1;
    fp1=fopen("file.txt","r");
    
    char ch;
    int word_count=0, sentence_count=0, line_count=0;
    while(fscanf(fp1,"%c", &ch)==1){
        if(ch==' '){
            word_count+=1;
        }
        if (ch=='.'){
            sentence_count+=1;
        }
        if (ch=='\n'){
            line_count+=1;
        }
    }
    
    fclose(fp1);
    
    printf("Word Count: %d\n",word_count);
    printf("Sentence Count: %d\n",sentence_count);
    printf("line Count: %d\n",line_count);
    
    return 0;
}
