// C++ code to demonstrate Difference Array
#include <bits/stdc++.h>
using namespace std;

// Creates a diff array D[] for A[] and returns
// it after filling initial values.
vector<int> initializeDiffArray(vector<int>& A)
{
	int n = A.size();

	// We use one extra space because
	// update(l, r, x) updates D[r+1]
	vector<int> D(n + 1);

	D[0] = A[0], D[n] = 0;
	for (int i = 1; i < n; i++)
		D[i] = A[i] - A[i - 1];
	return D;
}

// Does range update
void update(vector<int>& D, int l, int r, int x)
{
	D[l] += x;
	D[r + 1] -= x;
}

// Prints updated Array
int printArray(vector<int>& A, vector<int>& D)
{
	for (int i = 0; i < A.size(); i++) {
		if (i == 0)
			A[i] = D[i];

		// Note that A[0] or D[0] decides
		// values of rest of the elements.
		else
			A[i] = D[i] + A[i - 1];

		cout << A[i] << " ";
	}
	cout << endl;
}

// Driver Code
int main()
{
	// Array to be updated
	vector<int> A{ 1, 0, 1, 0,1 };

	// Create and fill difference Array
	vector<int> D = initializeDiffArray(A);

	// After below update(l, r, x), the
	// elements should become 20, 15, 20, 40
	update(D, 0, 1, 1);
	update(D, 2, 4, 3);
	update(D, 0,4, 2);
	printArray(A, D);

	return 0;
}
