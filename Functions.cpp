string UpString(string su)
{
            transform(su.begin(), su.end(), su.begin(), ::toupper);
            return su;
}

bool IsUpString(string s)
{
    bool check = true;
    int x = s.length();
    for (int i=0; i<x; i++)
    {
        int k = s[i];
        if (k<65 || k>90)
        {
            check = false;
            break;
        }
    }
    return check;
}