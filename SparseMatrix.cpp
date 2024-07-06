#include <iostream>
#include <vector>

using namespace std;

class SparseMatrix {
private:
    int numRows;  // Setting up the number of rows in the sparse matrix
    int numCols;  // Setting up the number of columns in the sparse matrix
    vector<int> nonZeroRowIndices;  // Creating a vector to hold the row indices of non-zero elements
    vector<int> nonZeroColIndices;  // Creating a vector to hold the column indices of non-zero elements
    vector<int> nonZeroValues;      // Creating a vector to hold the values of non-zero elements

public:
    // Initializing the sparse matrix with the specified number of rows and columns
    SparseMatrix(int totalRows, int totalCols) : numRows(totalRows), numCols(totalCols) {}

    // Adding a non-zero element to the sparse matrix
    void insertElement(int rowIndex, int colIndex, int elementValue) {
        if (elementValue != 0) {  // Checking if the value is non-zero before adding
            nonZeroRowIndices.push_back(rowIndex);  // Storing the row index
            nonZeroColIndices.push_back(colIndex);  // Storing the column index
            nonZeroValues.push_back(elementValue);  // Storing the value
        }
    }

    // Retrieving an element from the sparse matrix
    int retrieveElement(int rowIndex, int colIndex) const {
        // Looping through the stored non-zero elements
        for (size_t i = 0; i < nonZeroValues.size(); ++i) {
            // Returning the value if the current element matches the requested position
            if (nonZeroRowIndices[i] == rowIndex && nonZeroColIndices[i] == colIndex) {
                return nonZeroValues[i];
            }
        }
        return 0;  // Returning 0 if the element is not found
    }

    // Printing the entire sparse matrix
    void displayMatrix() const {
        // Iterating through each row
        for (int rowIndex = 0; rowIndex < numRows; ++rowIndex) {
            // Iterating through each column
            for (int colIndex = 0; colIndex < numCols; ++colIndex) {
                // Printing the element at the current position
                cout << retrieveElement(rowIndex, colIndex) << " ";
            }
            cout << endl;  // Moving to the next line after each row
        }
    }
};

int main() {
    int totalRows, totalCols;

    // Asking the user to enter the number of rows and columns
    cout << "Enter the number of rows: ";
    cin >> totalRows;
    cout << "Enter the number of columns: ";
    cin >> totalCols;

    // Creating a sparse matrix with the specified dimensions
    SparseMatrix sparseMatrix(totalRows, totalCols);

    char userChoice;
    do {
        int inputRowIndex, inputColIndex, inputValue;

        // Asking the user to enter the row index, column index, and value of a non-zero element
        cout << "Enter row index: ";
        cin >> inputRowIndex;
        cout << "Enter column index: ";
        cin >> inputColIndex;
        cout << "Enter value: ";
        cin >> inputValue;

        // Adding the non-zero element to the sparse matrix
        sparseMatrix.insertElement(inputRowIndex, inputColIndex, inputValue);

        // Asking the user if they want to add another element
        cout << "Do you want to add another element? (y/n): ";
        cin >> userChoice;
    } while (userChoice == 'y' || userChoice == 'Y');  // Repeating the process until the user chooses 'n'

    // Displaying the complete sparse matrix
    cout << "Sparse Matrix:" << endl;
    sparseMatrix.displayMatrix();

    return 0;
}
