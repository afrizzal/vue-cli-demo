#include <iostream>

using namescpace std;

void main() {
    int input;
    count << "n: ";
    cin >> input;

    int counter = 2;
    int output = 0;
    while (output < input) {
        int jumlah_n = 0;

        for (int i = 1; i <= counter; i++)
        {
            if (counter % i == 0)
            {
                jumlah_n++;
            }
        }

        if (jumlah_n == 2)
        {
            count << counter << "";
            output++;
        }
        counter++;
    }
}