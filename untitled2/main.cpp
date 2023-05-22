#include <iostream>

int str_lenght(const char* str) {
    int i=0;
    int count=0;
    while (*(str+i)!='\0') {
        ++i;
        ++count;
    }
    return count;
}

bool substr (const char* ptext, const char* word) {
    bool found=false;
    bool result=false;
    for (int startPos=0; startPos+str_lenght(word)<= str_lenght(ptext); ++startPos){
        bool match=true;
        for (int i=0; i<str_lenght(word); ++i) {
            if (*(word+i)!= *(ptext+(i+startPos))) {
                match = false;
                break;
            }
        }
        if (match) {
            found=true;
            break;
        }
    }
    if (found)
        return true;
    else
        return false;
}

int main() {
    const char* text = "Hello world";
    const char* word="wor";

   std::cout<< substr(text, word);
}
