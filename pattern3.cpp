#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cout<<"enter n&k";
    cin >> n >> q;

    vector<vector<int>> arrays(n);

     for (int i = 0; i < n; i++) {
        int k;
        cout<<"enter k";
        cin >> k;
        arrays[i].resize(k);
        for (int j = 0; j < k; j++) {
            cin >> arrays[i][j];
        }
    }

    
    for (int i = 0; i < q; i++) {
        int array_index, element_index;
        cin >> array_index >> element_index;
        cout << arrays[array_index][element_index] <<endl;
    }

    return 0;
}
