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
