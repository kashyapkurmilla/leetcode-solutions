char *mergeAlternately(char *word1, char *word2) {
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int totalLen = len1 + len2;

    char *output = (char *)malloc(totalLen+1);
    int i = 0, k = 0;
    while (i < len1 || i < len2) {
        if (i < len1) {
            output[k] = word1[i];
            k++;
        }
        if (i < len2) {
            output[k] = word2[i];
            k++;
        }
        i++;
    }

    output[k] = '\0'; 

    return output;
}