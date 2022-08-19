#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char input[100] = {};
    char output[100] = {};

    int counts[100] = {};

    cout << "Enter the input word : ";

    cin.get(input, 100);

    for (int i = 0; i < 100; i++) {
        if (input[i] == '\0') {
            break;
        }
        if (counts[i] > 0)
        {
            output[i] = ')';
        }
        else
        {
            for (int j = i + 1; j < 100; j++) {
                if (tolower(input[j]) == tolower(input[i])) {
                    counts[i]++;
                    counts[j]++;
                }
            }
            if (counts[i] > 0) {
                output[i] = ')';
            }
            else {
                output[i] = '(';
            }
        }
    }

    cout << output;

    cout << "\n Press any key to continue...";
    getchar();
    getchar();

    return 0;
}