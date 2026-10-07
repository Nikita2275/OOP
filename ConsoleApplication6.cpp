#include <iostream>
#include <cstring>

class String {
private:
    char* str;
public:
    String() {
        str = new char[1];
        str[0] = '\0';
    }

    String(const char* inputStr) {
        if (inputStr) {
            int len = strlen(inputStr);
            str = new char[len + 1];
            strcpy(str, inputStr);
        }
        else
        {
            str = new char[1];
            str[0] = '\0';
        }
    }

    String(const String& other) {
        int len = strlen(other.str);
        str = new char[len + 1];
        strcpy(str, other.str);
    }

    ~String() {
        delete[] str;
    }

    const char* c_str() const {
        return str;
    }

    char getAt(int index) const {
        if (index >= 0 && index < strlen(str)) {
            return str[index];
        }
        return '\0';
    }
};


int main()
{
    
}