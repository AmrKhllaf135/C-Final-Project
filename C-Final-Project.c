#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int key =3;
int length;
char s[26];

void Encryption_Upper(char s[26])
{
	int i;
	length = strlen(s);
    for(i=0 ;i <length; i++)
    {
        if(s[i] + key <= 'Z')
            s[i] += key;
       else
            s[i] = 'A' + ((s[i] + key) - 'Z' -1);
    }
    printf("%s\n", s);
}
void Decryption_Upper(char s[26])
{
	int i;
	length = strlen(s);
    for(i=0 ;i <length; i++)
    {
        if(s[i] - key >= 'A')
            s[i] -= key;
       else
            s[i] = ('Z' -key) + (s[i] - 'A') +1 ;
    }
    printf("%s\n", s);
}
void Encryption_Lower(char s[26])
{
	int i;
	length = strlen(s);
    for(i=0 ;i <length; i++)
    {
        if(s[i] + key <= 'z')
            s[i] += key;
       else
            s[i] = 'a' + ((s[i] + key) - 'z' -1);
    }
    printf("%s\n", s);
}
void Decryption_Lower(char s[26])
{
	int i;
	length = strlen(s);
    for(i=0 ;i <length; i++)
    {
        if(s[i] - key >= 'a')
            s[i] -= key;
       else
            s[i] = ('z' -key) + (s[i] - 'a') +1 ;
    }
    printf("%s\n", s);
}

int main()
{
	 while(1)
    {
        printf("Press 1 to Encrypt for Upper String\n");  
        printf("Press 2 to Decrypt for Upper String\n");
		 printf("Press 3 to Encrypt for Lower String\n");  
        printf("Press 4 to Decrypt for Lower String\n"); 
        printf("Press 5 to exit\n");
        int input;
		scanf("%d" , &input);
        printf("Please Enter a string\n"); 
        char s[26];
        scanf("%s" ,&s); 
        switch(input)
        {
        case 1 :
            printf("String for Upper Encryption is: ");
            Encryption_Upper(s);
            break;
        case 2:
            printf("String for Upper Decryption is: ");
            Decryption_Upper(s);
            break;
        case 3 :
            printf("String for Lower Encryption is: ");
            Encryption_Lower(s);
            break;
        case 4:
            printf("String for Lower Decryption is: ");
            Decryption_Lower(s);
            break;    
        case 5 :
            return 0;
            break;
        default:
            printf("Wrong choice\n");
            break;
        }
    }


    return 0;
}
	
