int GetValue(char c) {
    switch (tolower(c)) {
        case 'i':
            return 1;
            break;
        case 'v':
            return 5;
            break;
        case 'x':
            return 10;
            break;
        case 'l':
            return 50;
            break;
        case 'c':
            return 100;
            break;
        case 'd':
            return 500;
            break;
        case 'm':
            return 1000;
            break;
        default:
            return 0;
            break; 
    }

}
int romanToInt(char *s)
{
    int num = 0;
    int n = 0;
    while (s[n] != '\0')
    {
        n++;
    }
    for (int i = 0; i < n; i++)
    {
        if( GetValue(s[i]) < GetValue(s[i + 1]))
        {
            num = num - GetValue(s[i]);
        }
        if( GetValue(s[i]) >= GetValue(s[i + 1]))
        {
            num = num + GetValue(s[i]);
        }
        
    }
    return num; 
    
}
