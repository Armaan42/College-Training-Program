void QuickSort(vector<int> &arr, int left, int right) {
    if (left < right) {
        int pivot = arr[(left + right) / 2];
        int i = left;
        int j = right;

        while (i <= j) {
            while (arr[i] < pivot) {
                i++;
            }
            while (arr[j] > pivot) {
                j--;
            }
            if (i <= j) {
                swap(arr[i], arr[j]);
                i++;
                j--;
            }
        }

        QuickSort(arr, left, j);
        QuickSort(arr, i, right);
    }
}


