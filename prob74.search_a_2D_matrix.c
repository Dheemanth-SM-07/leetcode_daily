bool binarySearch(int* row, int left, int right, int target) 
{
    while (left <= right) 
    {
        int mid = left + (right - left) / 2;
        if (row[mid] == target) 
        {
            return true;
        } 
        else if (row[mid] < target) 
        {
            left = mid + 1;
        } else 
        {
            right = mid - 1;
        }
    }
    return false;
}

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int m = matrixSize;
    int n = *matrixColSize;

    int left = 0, right = m - 1;

    while (left <= right) 
    {
        int mid = left + (right - left) / 2;
        if (matrix[mid][0] == target) 
        {
            return true;
        }
         else if (matrix[mid][0] < target) 
         {
            if (mid == m - 1 || matrix[mid + 1][0] > target) 
            {
                return binarySearch(matrix[mid], 0, n - 1, target);
            }
            left = mid + 1;
        } else 
        {
            right = mid - 1;
        }
    }
    return false;
}
