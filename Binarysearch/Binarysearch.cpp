#include <iostream>
using namespace std;

int arr[20];
int i;
int n;

void input()
{
    while (true)
    {
        cout << "Masukkan jumlah array : ";
        cin >> n;
        if (n <= 20)
            break;
        else
            cout << "Array maksimal berjumlah 20 !!";
    }

    cout << "Masukkan Array";
    for (i = 0; i < n; i++)
    {
        cout << "\n" << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}

void BinarySearch()
{
    int item;
    int lower;
    int upper;
    int mid;

    cout << "\nMasukan nilai yang dicari : ";
    cin >> item;

    lower = 0;
    upper = n - 1;
    while (lower <= upper)
    {
        mid = (lower + upper) / 2;
        if (arr[mid] == item)
        {
            cout << item << "Found at position " << (mid + 1) << endl;
            return;
        }
        else if (arr[mid] > item)
        {
            upper = mid - 1;
        }
        else {
            lower = mid + 1;
        }
    }
    cout << "\n" << item << "Not found\n" << endl;
}

int main()
{
    input();
    BinarySearch();
    return 0;
}