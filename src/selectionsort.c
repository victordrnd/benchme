float selectionsort(float *t, int size)
{
    int min = 0;
    int i = 0;
    while (i < size - 1)
    {
        int j = i + 1;
        min = i;
        while (j <= size - 1)
        {
            if (t[j] < t[min])
            {
                min = j;
            }
        }
        if (min != 0)
        {
            // temp = 0, t[i] = 1, t[min] = 2
            float temp = t[i]; //0 = 1 temp = 1
            t[i] = t[min];   // 1 = 2 t[i] = 2
            t[min] = temp;   // 2 = 1 t[min] = 1
        }
        i = i + 1;
    }
    return *t;
}