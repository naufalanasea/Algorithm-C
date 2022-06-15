using namespace std;
class Output {
public:
  void print(int arr[][4], int row, int column){ 
    cout << endl;
    cout << "\nSetelah disusun dalam rak : \n" << endl;
    for (int i = 0; i < row; i++) {
      for (int j = 0; j < column; j++) {
        if (arr[i][j] < 10) {
          cout << arr[i][j] << "  ";
        } else {
          cout << arr[i][j] << " ";
        }
      }
      cout << "\n";
    }
  }
};