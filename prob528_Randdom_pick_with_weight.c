typedef struct 
{
    int* prefixSums;
    int totalSum;
    int size;
} Solution;

Solution* solutionCreate(int* w, int wSize) 
{
    Solution* obj = (Solution*)malloc(sizeof(Solution));
    obj->prefixSums = (int*)malloc(wSize * sizeof(int));
    obj->totalSum = 0;
    obj->size = wSize;
    for (int i = 0; i < wSize; i++)
     {
        obj->totalSum += w[i];
        obj->prefixSums[i] = obj->totalSum;
    }
    return obj;
}

int solutionPickIndex(Solution* obj)
 {
    
    int target = rand() % obj->totalSum + 1;
    int left = 0, right = obj->size - 1;
    while (left < right) 
    {
        int mid = left + (right - left) / 2;
        if (obj->prefixSums[mid] < target)
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}

void solutionFree(Solution* obj) 
{
    free(obj->prefixSums);
    free(obj);
}typedef struct 
{
    int* prefixSums;
    int totalSum;
    int size;
} Solution;

Solution* solutionCreate(int* w, int wSize) 
{
    Solution* obj = (Solution*)malloc(sizeof(Solution));
    obj->prefixSums = (int*)malloc(wSize * sizeof(int));
    obj->totalSum = 0;
    obj->size = wSize;
    for (int i = 0; i < wSize; i++)
     {
        obj->totalSum += w[i];
        obj->prefixSums[i] = obj->totalSum;
    }
    return obj;
}

int solutionPickIndex(Solution* obj)
 {
    
    int target = rand() % obj->totalSum + 1;
    int left = 0, right = obj->size - 1;
    while (left < right) 
    {
        int mid = left + (right - left) / 2;
        if (obj->prefixSums[mid] < target)
            left = mid + 1;
        else
            right = mid;
    }
    return left;
}

void solutionFree(Solution* obj) 
{
    free(obj->prefixSums);
    free(obj);
}