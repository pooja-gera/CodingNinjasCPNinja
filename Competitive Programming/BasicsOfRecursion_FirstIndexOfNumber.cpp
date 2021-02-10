int firstIndex(int input[], int size, int x)
{
    /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    if (input[0] == x)
        return 0;
    else if (size == 1)
    {
        if (input[0] == x)
            return 0;
        else
            return -1;
    }

    int smallIndex = firstIndex(input + 1, size - 1, x);
    if (smallIndex == -1)
    {
        return smallIndex;
    }
    else
    {
        return smallIndex + 1;
    }
}
