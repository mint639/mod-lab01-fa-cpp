unsigned int faStr1(const char *str)
{
    int i = 0, count = 0, state = 0, F = 0;
    while (str[i] != '\0')
    {
        if (state == 0 && str[i] != ' ')
        {
            if (str[i] > 57 || str[i] < 48) F = 1;
            state = 1;
        }
        else if (state == 1 && str[i] == ' ')
        {
            if (F == 1) count++;
            F = 0;
            state = 0;
        }
        else if (state == 1 && str[i] != ' ' && F == 1)
        {
            if (str[i] >= 48 && str[i] <= 57) F = 0;
        }
        i++;
    }
    if (state == 1 && F == 1) count++;
    return count;
}

unsigned int faStr2(const char *str)
{
    int i = 0, count = 0, state = 0, F = 0;
    while (str[i] != '\0')
    {
        if (state == 0 && str[i] >= 65 && str[i] <= 90)
        {
            state = 1;
            F = 1;
        }
        else if (state == 1 && str[i] == ' ')
        {
            if (F == 1) count++;
            F = 0;
            state = 0;
        }
        else if (state == 1 && str[i] != ' ' && F == 1)
        {
            if (str[i] >= 65 && str[i] <= 90) F = 0;
            if (str[i] > 122 || str[i] < 65) F = 0;
        }
        i++;
    }
    if (state == 1 && F == 1) count++;
    return count;
}

unsigned int faStr3(const char *str)
{
    int i = 0, count = 0, state = 0, leng = 0, answer;
    float sum = 0;
    while (str[i] != '\0')
    {
        if (state == 0 && str[i] != ' ')
        {
            count++;
            state = 1;
            leng++;
        }
        else if (state == 1 && str[i] == ' ')
        {
            sum = sum + leng;
            state = 0;
            leng = 0;
        }
        else if (state == 1 && str[i] != ' ') leng++;
        i++;
    }
    if (state == 1) sum = sum + leng;
    if (count == 0) return 0;
    sum = sum / (float)count;
    answer = sum;
    if (sum - (float)answer >= 0.5) answer++;
    return answer;
}
