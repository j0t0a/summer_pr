int strSize(char* str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

void removeCharAt(char* str, int index)
{
    int len = strSize(str);
    if (index < 0 || index >= len)
        return;
    for (int i = index; i < len; i++)
    {
        str[i] = str[i + 1];
    }
}

void removeAllSights(char* str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '.' || str[i] == ',' || str[i] == '!' || str[i] == ' ' || str[i] == '?')
        {
            removeCharAt(str, i);
            i--;
        }
    }
}

void shakeStr(char* str)
{
    int len = strSize(str);
    for (int i = 0; i < len; i++)
    {
        int index = rand() % len;
        char buffer = str[i];
        str[i] = str[index];
        str[index] = buffer;
    }
}
