int getOddOccurrence(int arr[], int n) {
    int num = 0;
    for(int i=0; i < n; i++)
        num ^= arr[i];
    return num;
}