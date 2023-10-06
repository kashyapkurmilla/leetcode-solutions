bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
char* reverseVowels(char* s) {
    int len = strlen(s);
    char* p1 = s;
    char* p2 = s + len;

    while (p1 < p2) {
        while (p1 < p2 && !isVowel(*p1)) {
            p1++;
        }
        while (p1 < p2 && !isVowel(*p2)) {
            p2--;
        }
        if (p1 < p2) {
            char temp = *p1;
            *p1 = *p2;
            *p2 = temp;
            p1++;
            p2--;
        }
    }
    return s;
}