#include <iostream>
#include <string>
using namespace std;

int main()
{
    string url;
    getline(cin, url);

    size_t start = url.find('?') + 1;
    size_t end = url.size();

    string keys[] = {"username", "pwd", "profile", "role", "key"};

    for (string key : keys)
    {
        size_t key_pos = url.find(key + "=", start);
        size_t val_start = key_pos + key.length() + 1;
        size_t val_end = url.find('&', val_start);
        if (val_end == string::npos)
            val_end = end;

        string value = url.substr(val_start, val_end - val_start);
        cout << key << ": " << value << endl;
    }

    return 0;
}
