#include <bits/stdc++.h>

using namespace std;

/*
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */
int hourglassSum(vector<vector<int>> arr) {
    int maxSum = INT_MIN; // Initialize maxSum to a very small value

    // The outer loop runs for all possible hourglass starting positions (i, j)
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            // Calculate the sum for the current hourglass
            int sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] +
                      arr[i + 1][j + 1] +
                      arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];

            // Update the maximum sum if needed
            maxSum = max(maxSum, sum);
        }
    }

    return maxSum;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);

    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        string arr_row_temp_temp;
        getline(cin, arr_row_temp_temp);

        vector<string> arr_row_temp = split(rtrim(arr_row_temp_temp));

        for (int j = 0; j < 6; j++) {
            int arr_row_item = stoi(arr_row_temp[j]);
            arr[i][j] = arr_row_item;
        }
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
