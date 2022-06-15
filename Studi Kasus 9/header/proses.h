using namespace std;
class Proses {
public:
  void sort(int arr[], int size);
  void jadiMatriks(int arr[], int arrM[][4], int row, int column);

private:
  int temp;
};

void Proses::sort(int arr[], int size) {
  int n = size;
  int batas = n - 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < batas; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
      }
    }
    batas -= 1;
  }
}

void Proses::jadiMatriks(int arr[], int arrM[][4], int row, int column) {
  int k = 0;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      arrM[i][j] = arr[k];
      k++;
    }
  }
}